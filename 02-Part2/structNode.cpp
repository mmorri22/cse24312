/**********************************************
* File: structNode.cpp
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* Taking the code from voidFunc and putting it into
* a C++ struct. voidFunc is the same code, but at 
* a lower level of abstraction. This level is closer
* to object-oriented programming, but does not 
* implement any data hiding.
*
* Also, shows an example of the use of the "this" keyword
*
* Lecture 02 - Part 2 - Slides 27-28
**********************************************/

#include <iostream>
#include <cstdlib>

#define COUT std::cout
#define ENDL std::endl

struct Node{
	
	/* Struct Members */
	double theDbl;
	float theFloat;
	int theInt;
	
	/* Constructor */
	Node(double dblIn, float floatIn, int intIn ) 
		: theDbl( dblIn ), theFloat( floatIn ), theInt( intIn ) {}
		
	
	/* Struct methods */
	void printNodeValues(){
		
		COUT << "-----------------------------" << ENDL;
		COUT << "Initial address of 'this': " << this << ENDL << ENDL;	

		COUT << "Double:  " << this->theDbl << "\t at address " << &(this->theDbl) << ENDL;
		COUT << "Float:  " << this->theFloat << "\t at address " << &(this->theFloat) << ENDL;
		COUT << "Integer:  " << this->theInt << "\t at address " << &(this->theInt) << ENDL;
		
	}
	
};

int main(void){
	
	Node node1( -0.625, 1.5625, 131 );
	Node node2( -34.77, 44.96, 1842 );
	
	COUT << "Node 1 is at address " << &node1 << ENDL;
	node1.printNodeValues();
	COUT << ENDL;
	
	COUT << "Node 2 is at address " << &node2 << ENDL;
	node2.printNodeValues();
	
	return 0;
	
}