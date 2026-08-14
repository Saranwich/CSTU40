#include <iostream>
#include "robot.h"   // include only the header (never include robot.cpp)

int main() {
    // Create a robot at the starting position (0, 0)
    Robot r(0, 0);
    std::cout << "Robot created at start ";
    r.printPosition();

    // Test moving in each direction
    std::cout << "Move right -> ";
    r.moveRight();
    r.printPosition();

    std::cout << "Move up    -> ";
    r.moveUp();
    r.printPosition();

    std::cout << "Move left  -> ";
    r.moveLeft();
    r.printPosition();

    std::cout << "Move down  -> ";
    r.moveDown();
    r.printPosition();

    return 0;
}
