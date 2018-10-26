#ifndef STACK_H_
#define STACK_H_
#include <vector>
#include <iostream>
using namespace std;

template <typename T>
class Stack
{
	private:
		std::vector<T> elems ;

	public:
		void push(T const&);
		void pop();
		T top() const;
     	bool empty() const {      // return true if empty.
     		std::cout << "Hello";
         	return elems.empty();
      	}
 };

#endif