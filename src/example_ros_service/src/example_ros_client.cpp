#include<ros/ros.h>
#include<example_ros_service/ExampleServiceMsg.h>
#include<iostream>

int main(int argc,char** argv){
    ros::init(argc,argv,"example_ros_client");
    ros::NodeHandle nh;

    ros::ServiceClient client=nh.serviceClient<example_ros_service::ExampleServiceMsg>("lookup_by_name");
    example_ros_service::ExampleServiceMsg srv;
    while(ros::ok()){
        std::cout<<"input lookup name:"<<std::endl;
        std::cin>>srv.request.name;
        if(client.call(srv)){
            if(srv.response.on_the_list){
            std::cout<<"you are look for "<<srv.request.name<<std::endl;
            std::cout<<"his/her age is "<<srv.response.age<<std::endl;
            }
            else {
                std::cout<<srv.request.name<<" is not on the list"<<std::endl;
            }
        }
        else{
            ROS_ERROR("failed to call service lookup_by_name");
            return -1;
        }
        
    }
    ros::spin();

    return 0;
}