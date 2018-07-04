//============================================================================
// Name        : template.cpp
// Author      : Shubhit Chouhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
template<class f>
	f abc(f a, f b, f c){
		return a+b*c;
	}

int main() {

	cout<< abc(2.7,36.7,4.6)<<endl;
	return 0;
}
