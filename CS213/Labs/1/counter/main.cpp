#include <iostream>
#include "counter.h"   // include the header only (never include counter.cpp)

// ============================================================
//  This file is COMPLETE. Do not modify it.
//  It only creates objects and calls the methods you write.
//  All of your work goes inside the Counter methods in counter.cpp.
// ============================================================
int main() {
    // Create a counter starting at 10
    Counter a(10);
    std::cout << "a start: " << a.getValue() << std::endl;

    // Should double the value -> 20   (uses your doubleValue())
    a.doubleValue();
    std::cout << "a doubled: " << a.getValue() << std::endl;

    // Create a second counter starting at 0
    Counter b(0);
    std::cout << "b start: " << b.getValue() << std::endl;

    // Should copy a's value into b -> 20   (uses your copyFrom())
    b.copyFrom(&a);
    std::cout << "b after copyFrom: " << b.getValue() << std::endl;

    return 0;
}
