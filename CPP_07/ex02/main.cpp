#include "Array.hpp"

int main(){

	Array<int> j(5);
  	j[0] = 0; 
  	j[1] = 1; 
  	j[2] = 2; 
  	j[3] = 3; 
  	j[4] = 4; 

	std::cout << j[2] << std::endl;
	
}
