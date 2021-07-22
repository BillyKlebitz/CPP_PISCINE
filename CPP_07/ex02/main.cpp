#include "Array.hpp"

int main(){
	
	//int * a = new int();
	//std::cout << *a << std::endl;
	Array<int> j(5);
  	j[0] = 0; 
  	j[1] = 1; 
  	j[2] = 2; 
  	j[3] = 3; 
  	j[4] = 4; 

	try{		
		std::cout << j[0] << std::endl;
	}
	catch(std::exception){
		std::cout << "out of limits friend" << std::endl;
	}
}
