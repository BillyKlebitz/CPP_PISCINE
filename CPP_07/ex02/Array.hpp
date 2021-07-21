#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>

template< class T >
class	Array{
	private:
		unsigned int _size;
		T	*_array;
	public:
		Array(): _size(0), _array(new T[0]){};
		Array(unsigned int size): _size(size), _array(new T[size]){};
		Array & operator=(Array & src)
		{
			unsigned int i = -1;
			delete this->array;
			this->size = src.size();
			this->array = new T[this->size];
			while(++i < this->size)
				this->array[i] = src[i];
		};
		Array(Array & src){*this=src;};
		T & operator[](unsigned int number){
			if (number >= this->_size)
				throw std::exception();
			return _array[number];
		};
		unsigned int size(){return this->_size;};
		virtual ~Array(){delete this->_array;};
};

#endif
