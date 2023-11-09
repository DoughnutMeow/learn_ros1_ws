#ifndef _EXAMPLE_ROS_CLASS_H_
#define _EXAMPLE_ROS_CLASS_H_

#include<ros/ros.h>
#include<std_msgs/Float32.h>
#include<std_msgs/Bool.h>
#include<std_srvs/Trigger.h>

class ExampleRosClass{
public:
    //structor
    ExampleRosClass(ros::NodeHandle *nodehandle);

private:
    ros::NodeHandle nh_;
    ros::Subscriber subscriber_;
    ros::Publisher publisher_;
    ros::ServiceServer server_;
    std_msgs::Float32 last_data_;
    //init sub callback
    void initSubscribers();
    void subscriberCallback(const std_msgs::Float32 &message_holder);
    //init pub <>
    void initPublishers();
    //init srv calllback
    void initServices();
    bool serviceCallback(std_srvs::TriggerRequest &request,std_srvs::TriggerResponse &response);
    //
};

#endif _EXAMPLE_ROS_CLASS_H_