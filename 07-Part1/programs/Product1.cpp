#include "../classes/DynArr.h"
#include <iostream>

#define COUT std::cout
#define ENDL std::endl

void printArray( DynArr<int>& theArray ){
	
	COUT << "[";
	
	for(unsigned int iter = 0; iter < theArray.length(); iter++){
		
		COUT << theArray[iter];
		
		if( iter < theArray.length() - 1 ){
			
			COUT << ",";
		}
	}
	
	COUT << "]";
	
}


int main(){
	
	int numVals = 5;
	
	// Create first array
	DynArr<int> array1( numVals );
	
	array1[0] = 1; 	array1[1] = 2;
	array1[2] = 3; 	array1[3] = 4;
	array1[4] = 5;
	
	printArray(array1);
	COUT << ENDL;
	
	// Create second array
	DynArr<int> array2;
	
	array2.push_back(1); 	array2.push_back(2);
	array2.push_back(3); 	array2.push_back(4);
	
	printArray(array2);
	COUT << ENDL;
	
	// Create third array 
	
	DynArr<int> array3( numVals + 1);
	
	array3[0] = 22; array3[1] = 18;
	array3[2] = 5; 	array3[3] = 33;
	array3[4] = 9;	array3[5] = 101;
	
	printArray(array3);
	COUT << ENDL;
	
	return 0;
}