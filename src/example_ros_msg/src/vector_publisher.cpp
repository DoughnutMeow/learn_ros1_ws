#include<ros/ros.h>
#include<example_ros_msg/VecOfDoubles.h>

//node name:vector_publisher
//pub topic name:vec_topic

int main(int argc,char** argv){
    ros::init(argc,argv,"vector_publisher");
    ros::NodeHandle nh;

    ros::Publisher my_publisher_object=nh.advertise<example_ros_msg::VecOfDoubles>("vec_topic",1);
    example_ros_msg::VecOfDoubles vec_msg;
    vec_msg.dbl_vec.resize(3);
    vec_msg.dbl_vec[0]=1.414;
    vec_msg.dbl_vec[1]=2.71828;
    vec_msg.dbl_vec[2]=3.1416;
    double count=0;
    ros::Rate naptime(1);
    while (ros::ok())
    {
        /* code */
        vec_msg.dbl_vec.push_back(count++);
        my_publisher_object.publish<example_ros_msg::VecOfDoubles>(vec_msg);
        naptime.sleep();
    }
    
}