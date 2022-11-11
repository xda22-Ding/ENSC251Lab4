#include "stack.hpp"
#include <iostream>
#include <cstddef>
#include <cstdlib>
using namespace std;

namespace ENSC251_Lab4
{
//default constructor
template<class T>
Stack<T>::Stack(){
    top = NULL;
     
}

//return top pointer
template<class T>
StackFrame<T>* Stack<T>::peek(){
    return top;
}

template<class T>
bool Stack<T>::empty() const{

    return (top == NULL);

}
template<class T>
T Stack<T>::pop(){
    T result = top->data;
    StackFrame<T>* temp_node; //have a temp node to replace top node
    temp_node = top; //
    top = top->link; 
    return result;

}

template<class T>
void Stack<T>::push(T the_symbol){
    StackFrame<T>* temp_node; // declare a new node to push to the stack
    temp_node = new StackFrame<T>;
    temp_node->data = the_symbol;
    StackFrame<T>* old_top;
    old_top = top;
    top = temp_node;
    top->link = old_top;
    
}



template<class T>
void Stack<T>::printStack(){
    cout << "Hello, World! " << endl;
    cout << top->data << endl;

}

}