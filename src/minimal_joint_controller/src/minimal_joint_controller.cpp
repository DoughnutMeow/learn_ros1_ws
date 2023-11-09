#include<ros/ros.h>
#include<gazebo_msgs/GetModelState.h>
#include<gazebo_msgs/ApplyJointEffort.h>
#include<gazebo_msgs/GetJointProperties.h>
#include<sensor_msgs/JointState.h>
#include<std_msgs/Float64.h>
#include<iostream>
#include<math.h>

bool test_service(){
    bool service_ready=false;

    if(!ros::service::exists("/gazebo/get_joint_properties",true)){
        ROS_WARN("waiting for /gazebo/get_joint_properties service\n");
        return false;
    }
    if(!ros::service::exists("/gazebo/apply_joint_effort",true)){
        ROS_WARN("waiting for /gazebo/apply_joint_effort service\n");
        return false;
    }
    ROS_INFO("service are ready\n");
    return true;
}


int main(int argc,char** argv){
    ros::init(argc,argv,"minimal_joint_controller");
    ros::NodeHandle nodehandle;
    ros::Duration half_sec(0.5);

    while(!test_service()){
        ros::spinOnce();
        half_sec.sleep();
    }

    ros::ServiceClient set_trq_client=nodehandle.serviceClient<gazebo_msgs::ApplyJointEffort>("/gazebo/apply_joint_effort service");    
}
