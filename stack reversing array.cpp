//============================================================================
// Name        : stack.cpp
// Author      : Shubhit Chouhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstring>
#include<stack>
using namespace std;
void Reverse(char *C,int n){
	stack<char> S;
	for(int i=0;i<n;i++){
		S.push(C[i]);
	}
	for(int i=0;i<n;i++){
		C[i] = S.top();
		S.pop();
	}


}

int main() {
	char C[51];
	cout<<"Enter a string: "<<flush;
	gets(C);

	Reverse(C,strlen(C));
	cout<<"Output: "<<C<<flush;
	return 0;
}
