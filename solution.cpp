#include "ros/ros.h" 
#include "geometry_msgs/Twist.h"

const double PI = 3.14159265359;


// Initialize the node 
        
    
int main(int argc, char **argv) 
{ 
    ros::init(argc, argv, "move_turtle"); 
    
    
  ros::Rate rate(3);
//void move(double distance, int turn);

  move(1.0, 1);
  move(1.0, 3);
  move(2.0, 3);
  move(6.0, 1);
  move(1.0, 2);
  move(1.0, 3);
  move(1.0, 3);
  move(1.0, 1);
  move(1.0, 1);
  move(1.0, 2);
  move(1.0, 3);
  move(1.0, 3);
  move(1.0, 1);
  move(0.5, 3);
  move(1.0, 1);
  move(3.0, 2);
  move(2.0, 2);
  move(0.5, 3);
  move(2.0, 3);
  move(1.0, 1);
  move(2.0, 1);
  move(1.0, 3);
  move(2.0, 3);
  move(1.0, 1);
  move(3.0, 1);
  move(1.0, 2);
  move(1.0, 1);
  move(2.0, 3);
  move(1.0, 1);
  move(2.0, 1);
  move(2.0, 2);
  move(1.0, 1);
  move(2.0, 1);
  move(2.0, 3);
  move(2.0, 3);
  move(1.0, 3);
  move(2.0, 3);
  move(2.0, 2);
  move(2.0, 1);
  move(2.0, 1);
  move(1.0, 3);
  move(2.0, 3);
  move(2.0, 2);
  move(2.0, 3);
  move(1.0, 3);
  move(1.0, 3);
  move(1.0, 1);
  move(1.0, 1);
  
  return 0;
  
/*  
  while (ros::ok()) {
    
    for (int i
      
    ROS_INFO("INFO");
    pub.publish(msg); 
    rate.sleep();
    

}
*/

}

void move(double distance, int turn) {
  // A publisher for the movement data 
ros::NodeHandle nh; 


    ros::Publisher pub = nh.advertise<geometry_msgs::Twist>("turtle1/cmd_vel", 10); 
    // Drive forward at a given speed.  The robot points up the x-axis. 
    // The default constructor will set all commands to 0 
    geometry_msgs::Twist msg;
    if (ros::ok()) {
        switch(turn) {
            case 1:
                msg.angular.z = PI/2;
		break;
            case 2:
                msg.angular.z = PI;
		break;
            case 3:
                msg.angular.z = 3*PI/2;
		break;
	}
	msg.linear.x = 0.6 * 11.1 / 4.4;
        ROS_INFO("INFO");
	pub.publish(msg);
	rate.sleep();
}
}


