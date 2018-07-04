//============================================================================
// Name        : reverse.cpp
// Author      : Shubhit Chouhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
};
Node *head;
void Insert(int data){
	Node *temp = new Node();
	temp->data = data;
	temp->next = NULL;
	Node *curr = head;
	Node *prev = NULL;
	if(head == NULL){
		head = temp;
	}else{
		while(curr!=NULL){
			prev = curr;
			curr= curr->next;
		}
		prev->next = temp;
		delete curr;
	}
}
void Print(){
	Node *temp = head;
	while (temp!= NULL){
		cout<<temp->data <<" "<<flush;
		temp = temp->next;
	}

}

void Reverse(){
	Node *prev,*curr,*next;
	curr = head;
	prev = NULL;
	while(curr!=NULL){
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}

	head = prev;
}

int main() {
	head = NULL;
	Insert(2);
	Insert(6);
	Insert(9);
	Insert(5);
	Print();
	Reverse();
	cout<<endl;
	Print();
	return 0;
}
