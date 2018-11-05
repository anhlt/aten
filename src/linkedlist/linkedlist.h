#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_ 

struct node
{
	int item;
	node * next;
	node(int, node* t);
};

int count(node * p);
void print_linkedlist(node *p);
void join(node * x, node * t);


#endif