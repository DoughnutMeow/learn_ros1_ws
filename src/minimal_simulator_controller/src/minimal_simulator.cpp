#include<ros/ros.h>
#include<std_msgs/Float64.h>

std_msgs::Float64 g_velocity;
std_msgs::Float64 g_force;

void my_callback(const std_msgs::Float64 &message_holder){
    g_force.data=message_holder.data;
    ROS_INFO("recieved force data is:%f",g_force.data);
}

int main(int argc,char** argv){
    ros::init(argc,argv,"minimal_simulator");
    ros::NodeHandle nh;
    ros::Subscriber my_subscriber_object=nh.subscribe("force_cmd",1,my_callback);
    ros::Publisher my_publisher_object=nh.advertise<std_msgs::Float64>("velocity",1);

    //消息v,f;
    double mass=1.0;
    double dt=0.01;
    double simple_rate=1/dt;
    ros::Rate naptime(simple_rate);
    g_velocity.data=0.0;
    g_force.data=0.0;

    while (ros::ok())
    {
        g_velocity.data+=g_force.data/mass*dt;
        my_publisher_object.publish(g_velocity);
        ROS_INFO("g_velocity= %f",g_velocity.data);
        ros::spinOnce();
        naptime.sleep();
    }
    return 0;
}

//初始化节点

//节点句柄

//订阅器my_subscriber_object 订阅message_holder的消息 话题force_cmd

//发布器my_subscriber_object 话题velpcoty

