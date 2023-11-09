#include"example_ros_class.h"

ExampleRosClass::ExampleRosClass(ros::NodeHandle *nodehandle):nh_(*nodehandle){
    ROS_INFO("structor start\n");
    initSubscribers();
    initPublishers();
    initServices();

}

void ExampleRosClass::initSubscribers(){
    last_data_.data=0;
    subscriber_=nh_.subscribe("example_ros_input_class",1,&ExampleRosClass::subscriberCallback,this);
}

void ExampleRosClass::initPublishers(){
    publisher_=nh_.advertise<std_msgs::Float32>("example_ros_input_class",1);
}

void ExampleRosClass::initServices(){
    //注意：回调函数返回值不能为void
    server_=nh_.advertiseService("example_ros_service",&ExampleRosClass::serviceCallback,this);

}

void ExampleRosClass::subscriberCallback(const std_msgs::Float32 &message_holder){
    ROS_INFO("sub callback\n");
    ROS_INFO("recieved msgs is %f\n",message_holder.data);
    last_data_.data+=message_holder.data;
    publisher_.publish(last_data_);
    ROS_INFO("publish data :%f\n",last_data_.data);
}

bool ExampleRosClass::serviceCallback(std_srvs::TriggerRequest &reqest,std_srvs::TriggerResponse &response){
    ROS_INFO("service callback\n");
    response.success=true;
    response.message="here is response string";
    return true;
}