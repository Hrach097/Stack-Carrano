/* @file Stack.h */

#ifndef  _STACK
#define _STACK

#include "StackInterface.h"
const int MAX_STACK = 3;

template <typename ItemType>
class Stack : public StackInterface<ItemType> {

private:
	ItemType items[MAX_STACK];
	int top;	

public:
	Stack();
	bool isEmpty() const override ;
	bool push(const ItemType& newElement) override;
	bool pop() override;
	ItemType peek() const override ;
};

#include "Stack.cpp"

#endif
