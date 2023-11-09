#include<ros/ros.h>
#include<geometry_msgs/Twist.h>

int main(int argc,char** argv){
    ros::init(argc,argv,"stdr_commamder");
    ros::NodeHandle nh;
    ros::Publisher twist_commander=nh.advertise<geometry_msgs::Twist>("/robot0/cmd_vel",1);

    double sample_dt=0.01;
    double speed=1.0;
    double yaw_rate=0.5;
    double time_3_sec=3.0;

    geometry_msgs::Twist twist_msg;

    twist_msg.linear.x=0.0;
    twist_msg.linear.y=0.0;
    twist_msg.linear.z=0.0;
    twist_msg.angular.x=0.0;
    twist_msg.angular.y=0.0;
    twist_msg.angular.z=0.0;

    ros::Rate sleep_time(1/sample_dt);
    double timer=0.0;
    for(int i=0;i<10;i++){
        twist_commander.publish(twist_msg);
        sleep_time.sleep();
    }

    twist_msg.linear.x=speed;
    while (timer<time_3_sec){
        twist_commander.publish(twist_msg);
        timer+=sample_dt;
        sleep_time.sleep();
    }

    twist_msg.linear.x=0.0;
    twist_msg.angular.z=yaw_rate;
    timer=0.0;
    while (timer<time_3_sec){
        twist_commander.publish(twist_msg);
        timer+=sample_dt;
        sleep_time.sleep();
    }

    twist_msg.linear.x=speed;
    twist_msg.angular.z=0.0;
    while (timer<time_3_sec){
        twist_commander.publish(twist_msg);
        timer+=sample_dt;
        sleep_time.sleep();
    }

    twist_msg.linear.x=0.0;
    twist_msg.angular.z=0.0;
    for(int i=0;i<10;i++){
        twist_commander.publish(twist_msg);
        sleep_time.sleep();
    }
}



//publisher '/robot0/cmd_vel'
//dt speed yaw_rate 
