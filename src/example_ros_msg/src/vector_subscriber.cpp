#include<ros/ros.h>
#include<example_ros_msg/VecOfDoubles.h>

void my_callback(const example_ros_msg::VecOfDoubles &message_holder){
    for(int i=0;i<message_holder.dbl_vec.size();i++){
        ROS_INFO("recived vec[%d]:%f",i,message_holder.dbl_vec[i]);
    }
    ROS_INFO("\n");
}

int main(int argc,char** argv){
    ros::init(argc,argv,"vector_subscriber");
    ros::NodeHandle nh;

    ros::Subscriber my_subscriber_object=nh.subscribe("vec_topic",1,my_callback);
    ros::spin();
    return 0;
}