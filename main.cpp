#include <iostream>
#include <string>
#include "Stack.h"

int main() {
	StackInterface<std::string>* ptr = new Stack<std::string>;
	std::string str = "";
	std::cout << "Enter a string: ";
	for (int ix = 0; ix < 4; ++ix) {
		std::cin >> str;
		std::cout << ptr->push(str) << std::endl;
		
	}
	std::cout << ptr->peek();
}
