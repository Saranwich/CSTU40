#ifndef COUNTER_H
#define COUNTER_H

// ============================================================
//  Counter class declaration
//  (You do NOT need to modify this file.)
// ============================================================
class Counter {
private:
    int value;   // the number this counter holds

public:
    Counter(int startValue);        // constructor: sets the starting value
    int getValue() const;           // returns the current value
    void setValue(int newValue);    // sets a new value

    // ----- Methods you must implement in counter.cpp -----
    void doubleValue();             // TODO #1: double 'value' using a pointer
    void copyFrom(Counter* other);  // TODO #2: copy another Counter's value via pointer
};

#endif // COUNTER_H
