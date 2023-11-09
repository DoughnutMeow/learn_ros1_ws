#include<ros/ros.h>
#include<std_msgs/Float64.h>

//pub f-cmd

//sub v

int main(int argc,char** argv){
    ros::init(argc,argv,"minimal_controller");
    ros::NodeHandle nh;

    ros::Publisher my_publisher_object=nh.advertise<std_msgs::Float64>("force_cmd",1);
}