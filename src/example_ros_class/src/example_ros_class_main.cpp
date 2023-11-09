#include"example_ros_class.h"

int main(int argc,char** argv){
    ros::init(argc,argv,"example_ros_class");
    ros::NodeHandle nh;
    ROS_INFO("create a object of ExampleRosClass\n");
    ExampleRosClass exampleRosClass(&nh);
    ros::spin();
}