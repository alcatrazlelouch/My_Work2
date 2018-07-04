//============================================================================
// Name        : rEverse.cpp
// Author      : Shubhit Chouhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<stack>
using namespace std;
struct Node{
	int data;
	Node *next;
};
Node *head;

void Reverse(){
	if(head==NULL)return ;
	stack< Node* > S;
		Node *temp = head;
		while(temp!=NULL){
			S.push(temp);
			temp= temp->next;
		}
		temp = S.top();
		head = temp;
		S.pop();
		while(!S.empty()){
			temp->next = S.top();
			S.pop();
			temp=temp->next;
		}
		temp->next = NULL;


}



int main(){
	return 0;
}
