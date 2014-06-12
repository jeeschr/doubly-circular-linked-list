#include "linkedlist.h"
#include <iostream>
#include <string>

using namespace std;

linkedlist::linkedlist(){

	listHead = new Node;
	listHead->next = listHead;
	listHead->prev = listHead;
}

linkedlist::~linkedlist(){

	curr = listHead->next;
	Node *temp;

	while(curr!=listHead){
		temp = curr->next;
		delete curr;
		curr=temp;
	}
}

void linkedlist::insert(int newItem){

	Node *n = new Node;
	n->item = newItem;
	
	curr = listHead->next;

	while(curr != listHead && newItem > curr->item)
		curr = curr->next;
	n->next = curr;
	n->prev = curr->prev;
	curr->prev = n;
	(n->prev)->next = n;
}

void linkedlist::remove(int dataItem){

	curr = listHead->next;

	while(curr->item != dataItem)
		curr = curr->next;
	(curr->prev)->next = curr->next;
	(curr->next)->prev = curr->prev;
}
void linkedlist::print(){

	curr = listHead->next;

	do{
		cout << curr->item << endl;
		curr = curr->next;
	} while(curr != listHead);

	cout << endl;
}