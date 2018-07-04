//============================================================================
// Name        : reversing.cpp
// Author      : Shubhit Chouhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
};

Node *head;
void Print(Node *p){
	if(p==NULL)return;
	cout<<p->data<<" "<<flush;
	Print(p->next);
}

void Insert(int data){
	Node* temp1 = new Node();
	temp1->data = data;
	temp1->next = NULL;
	Node*curr = head;
	Node *prev = NULL;
	if(head==NULL){
		head = temp1;
	}else{
		while(curr!=NULL){
			prev = curr;
			curr= curr->next;
		}
		prev->next = temp1;
	}


int main()
{
	head = NULL;
	Insert(2);
	Insert(8);
	Insert(6);
	Insert(4);
	Print(head);
	cout<<endl;
	Print(head);
	return 0;
}
