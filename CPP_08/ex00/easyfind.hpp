#include <algorithm>
#include <iostream>
#include <list>

template< typename T>
typename T::const_iterator easyfind(T const & array,int second){
	return std::find(array.begin(), array.end(), second);
}
