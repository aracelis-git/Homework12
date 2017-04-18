#include "ros/ros.h"
#include "std_msgs/String.h"
#include <geometry_msgs/Twist.h>
#include <sensor_msgs/LaserScan.h>
#include <sstream>


class Algorithm
{
public:
  Algorithm(const ros::NodeHandle& n);

private:
  ros::NodeHandle n_;
  ros::Subscriber scan_sub_;
  ros::Publisher twist_pub_;

};

Algorithm::Algorithm(const ros::NodeHandle& n)
	: n_(n)
{
  scan_sub_ = n_.subscribe("scan", 1000, scanCallback);
  twist_pub_ = n_.advertise<geometry_msgs::Twist>("turtle1/cmd_vel", 1);
}

void scanCallback(const geometry_msgs::Twist::ConstPtr& dist)
{
  last_command_time_ = ros::WallTime::now();
  lin_vel_ = vel->linear.x;
  ang_vel_ = vel->angular.z;
}

int main(int argc, char** argv)
{
  ros::init(argc, argv, "teleop_turtle");
  Algorithm walker_algorithm;



  return(0);

}



