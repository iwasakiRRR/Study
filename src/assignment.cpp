#include "ros_assignment/assignment.hpp"

Robot::Robot(){
	time = 0;
	speed = 0;
	distance = 0;
}
Robot::~Robot(){

}

void Robot::move(){
	distance = time * speed;
}

void Robot::speakDistance(int a){

	std::cout<<"robot"<< a <<"が進んだ距離は"<<distance<<"mです(o_o;)"<<std::endl;
}

