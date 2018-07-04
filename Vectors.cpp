//============================================================================
// Name        : Vectors.cpp
// Author      : Shubhit Chouhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<vector>
using namespace std;

int main() {
	vector <int> myVector;
	myVector.push_back(3);
	myVector.push_back(4);
	myVector.push_back(5);
	myVector.push_back(6);

	for (unsigned int i=0;i<myVector.size();i++){
		cout<<myVector[i]<<" "<<flush;
	}

	//myVector.begin()..begins at index 0
	cout<<endl;
	myVector.insert(myVector.begin(),4);

	for (unsigned int i=0;i<myVector.size();i++){
			cout<<myVector[i]<<" "<<flush;
		}
	myVector.insert(myVector.begin()+1,4);
	cout<<endl;
	for (unsigned int i=0;i<myVector.size();i++){
				cout<<myVector[i]<<" "<<flush;
			}
	cout<<endl;

	myVector.erase(myVector.begin()+2);
	for (unsigned int i=0;i<myVector.size();i++){
				cout<<myVector[i]<<" "<<flush;
			}
	cout<<endl;
	cout<<myVector.empty()<<endl;
	myVector.clear();
	cout<<myVector.empty()<<endl;

	return 0;
}
