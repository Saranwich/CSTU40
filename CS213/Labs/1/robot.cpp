#include <iostream>
#include "robot.h"   // pull in the class declaration

// Constructor: initializes x and y using a member initializer list
Robot::Robot(int startX, int startY) : x(startX), y(startY){
	// TODO-1: Your code goes here.
    
}

// Move up -> y increases by 1
// TODO-2: Your code goes here. Write MoveUp method.
void Robot::moveUp(){y+=1;}

// Move down -> y decreases by 1
// TODO-3: Your code goes here. Write MoveDown method.
void Robot::moveDown(){y-=1;}

// Move left -> x decreases by 1
// TODO-4: Your code goes here. Write MoveLeft method.
void Robot::moveLeft(){x-=1;}

// Move right -> x increases by 1
// TODO-5: Your code goes here. Write MoveReft method.
void Robot::moveRight(){x+=1;}

// Display the robot's current position
void Robot::printPosition() const {
    std::cout << "Current position (" << x << ", " << y << ")" << std::endl;
}
