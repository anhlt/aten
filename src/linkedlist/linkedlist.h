#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_ 

struct node
{
	int item;
	node * next;
	node(int, node* t);
};

#endif