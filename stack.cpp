#include "stack.hpp"
#include <iostream>
using namespace std;

namespace ENSC251_Lab4{

//default constructor
template<class T>
Stack<T>::Stack(){
    top = NULL;
     
}

//return top pointer
template<class T>
StackFramePtr<T> Stack<T>::peek(){
    return top;
}




template<class T>
//deconstructor
Stack<T>::~Stack(){
    T next;
    while (! empty()){
        next = pop();
    }
}

template<class T>
//help function
void Stack<T>::stackCopy(StackFramePtr<T> a_stack){
     
     if (a_stack != NULL) {

        StackFramePtr<T> tempNode = a_stack;
        
        // copy the first node
        StackFramePtr<T> firstNode = new StackFrame<T>();
        firstNode->data = tempNode->data;
        //set firstnode as top
        top = firstNode;
        //let the previous node equal to firstnode
        StackFramePtr<T> pastNode = firstNode;

        // copy everything
        while(tempNode->link != NULL){
            tempNode = tempNode->link;
            // create a new node 
            StackFramePtr<T> newNode = new StackFrame<T>();
            newNode->data = tempNode->data;
            pastNode->link = newNode;
            pastNode = newNode;
        }
    
   }
}
template<class T>
//copy constructor

Stack<T>::Stack(const Stack<T> &obj){
    StackFramePtr<T> a_stack = obj.top;
    stackCopy(a_stack);
}

//operator
template<class T>
void Stack<T>::operator=(Stack<T>& obj){
    //delete first
    StackFramePtr<T> temp = top;
    while( top != NULL){
        temp = top;
        top = temp->link;
        delete temp;
    }
    
    //copy
    stackCopy(obj.top);
    
}


template<class T>
bool Stack<T>::empty() const{

    return (top == NULL);

}
template<class T>
T Stack<T>::pop(){
    T result = top->data;
    StackFramePtr<T> temp_node; //have a temp node to replace top node
    temp_node = top; 
    top = top->link; 
    return result;

}

template<class T>
void Stack<T>::push(T the_symbol){
    StackFramePtr<T> temp_node; // declare a new node to push to the stack
    temp_node = new StackFrame<T>;
    temp_node->data = the_symbol;
    StackFramePtr<T> old_top;
    old_top = top;
    top = temp_node;
    top->link = old_top;
    
}

//The funciton is recursively push data to the bottom
//meaning it would do n-1 pop and push for every node pushed in.
//the time complexity is O(N)
template<class T>
void Stack<T>::push_bot(T the_symbol){
    if(top == NULL){
        push(the_symbol);
    }
    else{
        StackFramePtr<T> temp_node = peek();
        T temp_symbol = temp_node->data;
        pop();
        push_bot(the_symbol);
        push(temp_symbol);
    }

    
}

//print the whole stack
template<class T>
void Stack<T>::printStack(){
    StackFramePtr<T> temp_node;
    temp_node = top;
    while(temp_node != NULL){
        cout << temp_node->data << endl;
        temp_node = temp_node->link;

    }
}

//The reverse function recursively put the top node to the bottom
//The reverse will be called n times.
//Considering the push_bot is O(N), 
//The time complexity of reverseh is O(N).
template<class T>
void Stack<T>::reverseh(){
    if(!empty()){
        StackFramePtr<T> temp_node = peek();
        T temp_symbol = temp_node->data;
        pop();
        reverseh();
        push_bot(temp_symbol);
    }

}

//the reverse function should return the top value.
template<class T>
T Stack<T>::reverse(){
    reverseh();
    return top->data;


}
}
