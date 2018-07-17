/* @file Stack.cpp */

#include <cassert>
#include "Stack.h"

template <typename ItemType>
Stack<ItemType>::Stack() : top(-1) {

}

template <typename ItemType>
bool Stack<ItemType>::isEmpty() const {
	return top < 0;	
}

template <typename ItemType>
bool Stack<ItemType>::push(const ItemType& newElement) {
	bool result = false;
	if(++top < MAX_STACK ) {
		items[top] = newElement;
		result = true;
	}

	return result;
}

template <typename ItemType>
bool Stack<ItemType>::pop() {
	bool result = false;
	if( !isEmpty() ) {
		--top;
		result = true;
	}
	return result;
}

template <typename ItemType>
ItemType Stack<ItemType>::peek() const {
	assert(!isEmpty());

	return items[top];
}


