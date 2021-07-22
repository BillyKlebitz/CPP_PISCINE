#include "span.hpp"

Span::Span(unsigned int N){
	
	n = N;	
}

Span & Span::operator=(Span const & src){
	
	this->n = src.n;
	numbers.clear();	
	std::copy(src.numbers.begin(), src.numbers.end(), std::back_inserter(this->numbers));
	return *this;
}

Span::Span(Span const & src){

	*this = src;
}

Span::~Span(){

}

void Span::addNumber(int number){
	
	if (numbers.size() < n)
		numbers.push_back(number);
}

long Span::shortestSpan(){

	if (numbers.size() < 2)
		throw (std::exception());
	long res = std::abs(numbers[1] - numbers[0]);
	for (unsigned long i = 1; i < numbers.size(); i++)
			res = std::abs(numbers[i] - numbers[i-1]) < res ? std::abs(numbers[i] - numbers[i-1]) : res;
	return res;

}

long Span::longestSpan(){

	if (numbers.size() < 2)
		throw (std::exception());
	long res = std::abs(numbers[1] - numbers[0]);
	for (unsigned long i = 1; i < numbers.size(); i++)
			res = std::abs(numbers[i] - numbers[i-1]) > res ? std::abs(numbers[i] - numbers[i-1]) : res;
	return res;
}
