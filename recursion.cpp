//============================================================================
// Name        : recursion.cpp
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
}
void Print(){
	Node *temp = head;
	while (temp!=NULL){
		cout<<temp->data<<" "<<flush;
		temp = temp->next;
	}
}
void Reverse(Node *p){
	if(p->next == NULL){
		head = p;
		return;
	}
	Reverse(p->next);
	Node*q = p->next;
	q->next =p;
	p->next = NULL;
}



int main() {
	head= NULL;
	Insert(2);
	Insert(4);
	Insert(6);
	Insert(5);
	Print();
	Reverse(head);
	cout<<endl;
	cout<<"Enter a position \n"<<endl;
	Print();

	return 0;
}
