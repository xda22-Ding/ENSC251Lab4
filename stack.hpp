//header file bst.hpp to declare your class
#ifndef STACK
#define STACK
#include <iostream>
#include <cstddef>
#include <cstdlib>
namespace ENSC251_Lab4{
	template<class T> 
	struct StackFrame{ 
			T data;
			StackFrame *link; 
		
		};
	template<class T>
	using StackFramePtr = StackFrame<T>*;

	template<class T>
	class Stack{
	public: 
		// default constructor
			
        	Stack();
        	
        	//copy constructor
        	Stack(const Stack &a_stack);
        	// deconstructor
        	~Stack();
			
			void operator=(Stack& obj);
			
        	StackFramePtr<T> peek();
			void push(T the_symbol); 
			void push_bot(T the_symbol);
			T pop();
			bool empty() const;
			void printStack();
			void reverseh();
			T reverse();



	private: 
			StackFramePtr<T> top;
			void stackCopy(StackFramePtr<T> obj);
	};
}

#endif
