#ifndef ITER_HPP
#define ITER_HPP

template< typename T >
void	iter(T const *array, unsigned int len,void func(T const & x)){
	
	unsigned int	j=0;
	while(j < len){
		func(array[j]);
		j++;
	}
}
#endif
