//============================================================================
// Name        : Static.cpp
// Author      : Shubhit Chouhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include<iostream>
using namespace std;

// .h header file
class Test{

public:
	static const int PI= 3.1415;
private:
	static int count ;
	int id;

public:
	Test(){
		id = count++;
	}
	static void info(){
		cout<< count <<endl;
	}
	int getId(){
		return id;
	}
};


//cpp source

int Test::count = 0;//always initialize non static outside class ..cpp source

int main(){

	Test test;
	cout<< test.getId()<<endl;
	Test test2;




	Test::info();

	return 0;
}
