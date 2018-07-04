//============================================================================
// Name        : Stacks.cpp
// Author      : Shubhit Chouhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
const int MAX = 101;
int A[MAX];
int top=-1;

void Push(int x){
	if(top==MAX - 1){
		cout<<"Error: stack overflow\n"<<flush;
		return;
	}
	A[++top] = x;

}

void Pop(){
	if(top == -1){
		cout<<"Error: No element to pop\n"<<flush;
		return;
	}
	top--;

}

int Top(){
	return A[top];
}

void Print(){
	int i;
	cout<<"Stack: "<<flush;
	for(i=0;i<=top;i++)
		cout<<A[i]<<" "<<flush;
	cout<<"\n";
}
int main() {
	Push(2);Print();
	Push(5);Print();
	Push(10);Print();
	Pop();Print();
	Push(12);Print();
	return 0;
}
