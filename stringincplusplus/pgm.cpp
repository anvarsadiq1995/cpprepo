/*
 * pgm.cpp
 *
 *  Created on: Nov. 25, 2020
 *      Author: anwar
 */
#include <iostream>
int main() { // request name

	std::cout << "enter your name" << std::endl;
	// declare name
	std::string name;
	std::getline(std::cin, name);
	std::cout << "good morning " << name << std::endl << "your name has " << name.size()
			<< "characters";
	return 0;
}
