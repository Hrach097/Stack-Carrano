/* @file StackInterface.h */

#ifndef _STACK_INTERFACE
#define _STACK_INTERFACE

template <typename ItemType>
class StackInterface {

public:	
	/* Sees wheather stack is empty.
	 @return true if stack is empty, false if stack has at least one lement
	 */ 

	virtual bool isEmpty() const = 0;
	
	/* Adds a new element to the top of the Stack
	 * @post If the operation was successfull
	 * @param new element which has to be added
	 * @return True if operation  was succcessfull, false if not
	 */	
	
	virtual bool push(const ItemType& newElement) = 0;
	
	/* Removes element from the top
	 * @post If the operation was successfull, element was deleted
	 * @return True if operation was successfull, false if not 
	 */

	virtual bool pop() = 0;
	
	/*Return the element which is on the top of the stack
	 @pre The stack is not empty
	 @post  The top of the stack has been returned
	 @return The top element of the stack
	 */

	virtual ItemType peek() const = 0;

};

#endif
