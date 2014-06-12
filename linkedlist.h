#ifndef linkedlist_h
#define linkedlist_h

#include <iostream>
#include <string>
using namespace std;

/* This class creates a circular doubly linked list with head and dummy head node.
Data can be removed and inserted
*/

class linkedlist{
public:
	
	//default constructor creates linked list and initializes head
	//@pre none
	//@post linkedlist with a head and dummy head node
	linkedlist();

	//destructor
	//@pre linked list 
	//@post all new items are deleted
	~linkedlist();

	//adds provided data to list
	//@pre linkedlist with at least head and dummy head node
	//@post data inserted incrementally
	void insert(int newItem);

	//removes provided data from list
	//@pre linkedlist with at least one data node
	//@post node is removed and gap is closed
	void remove(int dataItem);

	//@pre none
	//@post prints linked list
	void print();

private:

		//creates linked list node structure
		struct Node{
			int item;
			Node *next;
			Node *prev;
		};

		//pointers for head/dummy head and current
		Node *listHead;
		Node *curr;
};
#endif