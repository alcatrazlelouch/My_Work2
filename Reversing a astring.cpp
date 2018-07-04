//============================================================================
// Name        : Reversing.cpp
// Author      : Shubhit Chouhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include<iostream>
using namespace std;

int main(){

	char text[]="hello";
	int len = sizeof(text)-1;

	char *pStart = text;
	char *pEnd = text+len-1;

	while(pStart<pEnd){
		char save = *pStart;
		*pStart=*pEnd;
		*pEnd = save;

		pStart++;
		pEnd--;
	}

	cout<<text<<endl;

	cout<<"============================"<<endl;


	int i =0;

	for(;i<len/2;i++){
		char save = text[i];
		text[i] = text[len-i-1];
		text[len-i-1] = save;
	}

	cout<<text<<endl;
	return 0;
}
