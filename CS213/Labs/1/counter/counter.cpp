#include "counter.h"

// ----- These three are already done for you -----
Counter::Counter(int startValue) : value(startValue) {}

int Counter::getValue() const {
    return value;
}

void Counter::setValue(int newValue) {
    value = newValue;
}

// ============================================================
//  TODO #1  -- implement doubleValue()
//
//  Double this object's 'value' member, but you must do it
//  THROUGH A POINTER (not by writing 'value = value * 2').
//
//  Steps:
//    (a) declare an int pointer that holds the ADDRESS of
//        the member 'value'          -> address-of operator (&)
//    (b) use the DEREFERENCE operator (*) on that pointer to
//        read the current value and write back (value * 2)
// ============================================================
void Counter::doubleValue() {
	int* p = &value;   // (a) address-of
    // >>> write your code here <<<
    *p *= 2;
}

// ============================================================
//  TODO #2  -- implement copyFrom()
//
//  'other' is a POINTER to another Counter object.
//  DEREFERENCE the pointer to read the other counter's value,
//  then store it into this object's 'value'.
//
//  Hint: reach a member through a pointer with  other->getValue()
//        or with the dereference operator  (*other).getValue()
// ============================================================
void Counter::copyFrom(Counter* other) {

    // >>> write your code here <<<
    value = other->getValue();


}
