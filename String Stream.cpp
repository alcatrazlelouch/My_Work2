#include<iostream>
#include<sstream>
using namespace std;

int main(){
	string name = "Subhit";
	int age = 18;

	stringstream ss;
	ss<<"Name: ";
	ss<<name<<endl;
	ss<<"age: ";
	ss<<age;

	cout <<ss.str()<<endl;

	return 0;
}
