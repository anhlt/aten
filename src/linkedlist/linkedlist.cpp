#include "linkedlist.h"
#include <iostream>
using namespace std;

node::node(int x, node* t){
	item = x;
	next = t;
}

int count(node *p) {

	int count = 1;
	node * t = p->next;
	while(t != p){
		count++;
		t = t->next;
	}

	return count;
}

void join(node * x, node * t){
	cout << "Function" << endl;
	print_linkedlist(x);
	print_linkedlist(t);
	node * next_x = x->next;
	node * end_of_t = t->next;

	while(end_of_t->next != t) end_of_t = end_of_t->next;
	x->next = t;
	cout << "x->next->item: " << x->next->item << endl;
	cout << end_of_t->item << endl;
	end_of_t->next = next_x;
	print_linkedlist(x);

}

void print_linkedlist(node *p){
	node * t = p;
	cout << "linkedlist: " << endl;
	do{
		cout << t->item << " -> ";
		t = t->next;
	} while(p != t);
	cout << endl << "------" << endl;
}