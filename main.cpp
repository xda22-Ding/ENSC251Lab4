#include<iostream>
#include"stack.hpp"
#include"stack.cpp"

using namespace std;
using namespace ENSC251_Lab4;



int main(){
	
	Stack<int> stack1;
	stack1.push(3);
	stack1.push(4);

	stack1.printStack();


	return 0;
}