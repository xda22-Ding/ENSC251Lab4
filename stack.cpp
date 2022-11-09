#include "stack.hpp"
#include <iostream>
using namespace std;
using namespace ENSC251_Lab4;

//default constructor
Stack::Stack() :top(NULL) {
     
}

//return top pointer
StackFramePtr Stack::peek(){
    return top;
}
