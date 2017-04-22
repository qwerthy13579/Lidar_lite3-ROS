#include "ros/ros.h"
#include "std_msgs/String.h"

void chatterCallback(const std_msgs::String::ConstPtr& msg)

{
     ROS_INFO("I heard: [%s]", msg->data.c_str());
}


int main(int argc, char **argv)
{
	ros::init(argc, argv, "arduino_listener");
	
	ros::NodeHandle nh;
	
	ros::Subscriber sub = nh.subscribe("arduino", 1000, chatterCallback);

	ros::spin();

	return 0;
}
