#include"example_action_server.h"

ExampleActionServer::ExampleActionServer():as_(nh_,"example_action_server",boost::bind(&ExampleActionServer::executeCB,this,_1),false){
    ROS_INFO("instructor \n");
    as_.start();
}

void ExampleActionServer::executeCB(const actionlib::SimpleActionServer<example_action_server::demoAction>::GoalConstPtr &goal){
    g_count++;
    result_.output=g_count;
    result_.goal_stamp=goal_.input;

    //
    // example_action_server::demoActionGoal goalgoal;
    // goalgoal.goal.input

    if(g_count!=goal_.input){
        ROS_WARN("mismatch \n");
        ROS_INFO("g_count=%d;goal_stamp=%d\n",g_count,result_.goal_stamp);
        g_count_failure=true;
        ROS_WARN("informing client of abord goal\n");
        as_.setAborted(result_);
    }
    else{
        as_.setSucceeded(result_);
    }
}

int main(int argc,char** argv){
    ros::init(argc,argv,"example_action_server");
    ExampleActionServer exampleRosServer;
    while (!g_count_failure)
    {
        ros::spinOnce();
    }
    return 0;
}