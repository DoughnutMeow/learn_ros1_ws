#include<ros/ros.h>
#include<actionlib/server/simple_action_server.h>
#include<example_action_server/demoAction.h>

int g_count=0;
bool g_count_failure=false;

class ExampleActionServer{
public:
    ExampleActionServer();

private:
    ros::NodeHandle nh_;
    actionlib::SimpleActionServer<example_action_server::demoAction> as_;
    example_action_server::demoGoal goal_;
    example_action_server::demoResult result_;
    example_action_server::demoFeedback feedback_;
    void executeCB(const actionlib::SimpleActionServer<example_action_server::demoAction>::GoalConstPtr &goal);
};
