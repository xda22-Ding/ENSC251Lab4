#include<iostream>
#include"stack.hpp"
#include"stack.cpp"

using namespace std;
using namespace ENSC251_Lab4;



int main(){
	
	Stack<int> stack1;
	stack1.push(3);
	stack1.push(4);
	stack1.push(6);
	stack1.push(7);
	stack1.push(10);
	stack1.push(14);
	stack1.push(24);
	stack1.printStack();

	cout << "after three poping" << endl;
	stack1.pop();
	stack1.pop();
	stack1.pop();
	stack1.printStack();





	stack1.push(11);
	stack1.push(12);
	stack1.push(13);
	cout << "after 3 push  "<< endl;
	stack1.printStack();

	int new_int = stack1.reverse();
	cout << "after reverse " << endl;
	stack1.printStack();
	cout << "the value of new top is: " << new_int << endl;




	return 0;
}