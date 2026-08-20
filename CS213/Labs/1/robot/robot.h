#ifndef ROBOT_H
#define ROBOT_H

// Declaration of the Robot class.
// This file states what the class contains,
// but does not include the actual implementation.
class Robot {
private:
    int x;  // X coordinate
    int y;  // Y coordinate

public:
    // Constructor: sets the initial x, y position when the object is created
    Robot(int startX, int startY);

    // Four movement methods (each moves 1 unit)
    void moveUp();     // move up    -> y increases by 1
    void moveDown();   // move down  -> y decreases by 1
    void moveLeft();   // move left  -> x decreases by 1
    void moveRight();  // move right -> x increases by 1

    // Method to display the current position
    void printPosition() const;
};

#endif // ROBOT_H
