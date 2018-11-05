#include <iostream>
#include <vector>
#include <string>
#include "linkedlist/linkedlist.h"

using namespace std;

int main(int argc, char const *argv[])
{
	/* code */
	int i, N = atoi(argv[1]), M = atoi(argv[2]);
	node * t = new node(1, 0);
	node * p = new node(1, 0);
	p->next = p;
	t->next = t;
	node * x = t;
	node * y = p;
	for(i = 2; i < N; i++){
		x = (x->next = new node(i, t));
		cout << "Current x->item: " << x->item << endl;
	}
	cout << "Total node in circular linkedlist: " << count(t) << endl;
	print_linkedlist(t);

	for(i = 2; i < M; i++){
		y = (y->next = new node(i, p));
		cout << "Current y->item: " << y->item << endl;
	}
	cout << "Total node in circular linkedlist: " << count(p) << endl;
	print_linkedlist(p);

	join(t, p);


	cout << x->item << endl;


	while(cin.get() != '\n')
		continue;
	return 0;
}