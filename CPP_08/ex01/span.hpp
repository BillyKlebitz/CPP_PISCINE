#ifndef SPAN_HPP
#define SPAN_HPP
#include <vector>

class Span{

	public:
		Span(unsigned int N);
		Span(Span const & src);
		Span & operator=(Span const & src);
		~Span();
		void addNumber(int number);
		template <class Iterator>
		void addNumber(Iterator begin, Iterator end){
			if (end - begin < n)
				std::copy(begin, end, std::back_inserter(this->numbers));
			else
				throw std::exception();
		}	
		long shortestSpan();
		long longestSpan();
	private:
		unsigned int n;
		std::vector<int> numbers;

};

#endif
