//============================================================================
// Name        : References.cpp
// Author      : Shubhit Chouhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include<iostream>
using namespace std;

void changeSomething(double &value){
	value = 123.4;
}

int main(){


	int Value1 = 8;
	int &Value2 =Value1;
	Value2 =10;

	cout<<Value1<<endl;
	cout<<Value2<<endl;

	double value= 4.321;

	changeSomething(value);
	cout<<value<<endl;


	return 0;
}
