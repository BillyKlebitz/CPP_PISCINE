#include "span.hpp"
#include <iostream>

int main()
{
	Span sp = Span(64000);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
 	std::vector<int> range(50000, 10);
	range[1234] = 21;
	sp.addNumber(range.begin(), range.end());
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << range[1234] << ' ' << range[1233] << std::endl;
}
