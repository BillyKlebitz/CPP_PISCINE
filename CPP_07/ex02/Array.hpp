#include <iostream>

template< class T >
class	Array{
	public:
		Array();
		Array(unsigned int size);
		Array(Array & src);
		Array & operator=(Array & src);
		T & operator[](unsigned int number);
		unsigned int size();
		virtual ~Array();

	private:
		T	*array;
		unsigned int size;
};


Array::Array()
{

	size = 0;
	array = 0;
}

Array::Array(unsigned int size){
	
	array = new T[size];
	this->size = size;
}

unsigned int Array::size(){

	return this->size;	
}

Array & Array::operator=(Array & src){
	
	unsigned int i = 0;
	
	delete this->array;
	this->size = src.size();
	this->array = new T[src_size];
	while(i < this->size){
		this->array[i] = src[i];
		i++;
	}
}

Array(Array & src){
	*this = src;
}

T & Array::operator[](unsigned int number){

		if (number >= this->size)
			throw std::exception;
		return array[number];
}
