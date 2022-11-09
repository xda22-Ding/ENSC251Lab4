//header file bst.hpp to declare your class
#ifndef STACK
#define STACK
#include <iostream>

namespace ENSC251_Lab4 {
	struct StackFrame{ 
			char data;
			StackFrame *link; 
		};
		typedef StackFrame* StackFramePtr;


	class Stack{
	public:
		Stack( );
		void push(char the_symbol); 
		char pop( );
		bool empty( ) const;
	private: StackFramePtr top;
	}
};
#endif
