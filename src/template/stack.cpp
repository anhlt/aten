#include "stack.h"
#include <stdexcept>

template <typename T>
void Stack<T>::push(T const& elem){
	elems.push_back(elem);
}

template <typename T>
void Stack<T>::pop() {
	if(elems.empty()){
		throw out_of_range("Empty Stack");
	}
	elems.pop_back();
}

template <typename T>
T Stack<T>::top() const{
	if(elems.empty()){
		throw out_of_range("Empty Stack");
	}
	return elems.back();
}


template class Stack<int>;

