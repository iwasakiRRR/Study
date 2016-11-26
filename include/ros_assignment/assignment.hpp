#include "ros/ros.h"
#include <iostream>
#include <boost/random/mersenne_twister.hpp>

class Robot {
	public:
		Robot();
		double time;
		double speed;
		double distance;
		void speakDistance(int);
		void move();
	protected:
	private:
		
}; 


