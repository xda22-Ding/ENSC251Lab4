#include<iostream>
#include"stack.hpp"
#include"stack.cpp"

using namespace std;
using namespace ENSC251_Lab4;



int main(){
	//part a
	Stack<int> sint1;
	sint1.push(1);
	sint1.push(2);
	sint1.push(3);
	sint1.push(4);
	sint1.push(5);
	sint1.push(6);

	Stack<int> sint2;
	sint2 = sint1;
	sint1.reverse();
	cout << "Sint 1 after reverse:" << endl;
	sint1.printStack();
	cout << endl;
	cout << "Sint 2:"<< endl;
	sint2.printStack();
	cout << endl;

	//partb
	Stack<double> sdouble1;
	sdouble1.push(1.5);
	sdouble1.push(2.5);
	sdouble1.push(3.5);
	sdouble1.push(4.5);
	sdouble1.push(5.5);
	sdouble1.push(6.5);
	
	cout<<"Sdouble 1: "<< endl;
	sdouble1.printStack();
	cout<< endl;

	Stack<double> sdouble2(sdouble1);
	sdouble2.reverse();
	cout << "Sdouble 2 after reversing: " << endl;
	sdouble2.printStack();
	cout<< endl;

	//part c
	Stack<char> sstring1;
	string a;
	cout << "please enter a string: "<<endl;
	cin >> a;
	for (int i = 0; i < size(a); i++){
		sstring1.push(a[i]);
	}
	
	Stack<char> sstring2(sstring1);
	sstring2.reverse();
	cout << "The palindrome is "<<endl;
	sstring2.printStack();
	sstring1.printStack();
/*
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
*/
	return 0;
}
