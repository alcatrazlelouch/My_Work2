//============================================================================
// Name        : Returning.cpp
// Author      : Shubhit Chouhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
using namespace std;

class Animals{
private:
	string name;
public:
	Animals(){
		cout<<"Animal has been created"<<endl;
	}
	~Animals(){
		cout<<"Animal has been destroyed"<<endl;
	}
	Animals(const Animals &other) : name(other.name){
		cout<<"Copy constructor has been initiated"<<endl;
	}

	void setName(string name){this->name = name; }
	void speak(){
		cout<<"My name is "<<name<<endl;
	}
};

Animals *createAnimal(){
	Animals *pAnimal = new Animals();
	pAnimal-> setName("Bernie");
	return pAnimal;

}

int main(){

	Animals *pAnimal1 = createAnimal();
	pAnimal1->speak();

	delete pAnimal1;

	return 0;
}
