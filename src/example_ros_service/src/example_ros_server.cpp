#include<ros/ros.h>
#include<example_ros_service/ExampleServiceMsg.h>
#include<iostream>

//request


//response

bool callback(example_ros_service::ExampleServiceMsgRequest &request,example_ros_service::ExampleServiceMsgResponse &response){
    //info
    ROS_INFO("callback start\n");
    //
    std::string lookup_name(request.name);
    response.on_the_list=false;
    response.age=-1;
    if(lookup_name.compare("Bob")==0){
        ROS_INFO("look bob\n");
        response.on_the_list=true;
        response.age=32;
        response.good_guy=true;
        response.nickname="BobThe";
    }    
    else if(lookup_name.compare("Ted")==0){
        ROS_INFO("look ted\n");
        response.on_the_list=true;
        response.age=4;
        response.good_guy=true;
        response.nickname="tedThe";
    }
    return true;
}

int main(int argc,char** argv){
    ros::init(argc,argv,"example_ros_server");
    ros::NodeHandle nh;

    ros::ServiceServer server=nh.advertiseService("lookup_by_name",callback);
    ROS_INFO("service lookup_by_name ready\n");
    ros::spin();

    return 0;
}