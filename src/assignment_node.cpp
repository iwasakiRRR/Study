#include "ros_assignment/assignment.hpp"

int main(int argc, char **argv){
	ros::init(argc,argv, "assignment");
	ros::NodeHandle n;
	boost::random::mt19937 engine((unsigned)time(NULL));
	Robot *robot;
	robot = new Robot[10];
	ros::Rate loop_rate(100);
	
	for(int a; a<10; a++){
			robot[a].speed = engine()%10000;
			robot[a].speed /= 10000;
	}
		
	while(ros::ok()){
		
		for(int a=0; a<10; a++){
			robot[a].speakDistance(a);
			robot[a].move();
			robot[a].time += 0.01;
		}
		system("tput clear");
		loop_rate.sleep();
		
	}
	
	return 0;
}
