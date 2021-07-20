#include <stdio.h>
#include <iostream>

typedef struct Data{

	int a;
	int b;
} Data;

uintptr_t serialize(Data* ptr){
	
	return(reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw){

	return(reinterpret_cast<Data*>(raw));
}

int main(){

	Data *bob = new Data;
	uintptr_t bobinfo;
	Data *res;	

	bob->a = 1;
	bob->b = 2;
	bobinfo = serialize(bob);
	res = deserialize(bobinfo);
	std::cout << res->a << std::endl
				<< res->b << std::endl;
	return 0;
}
