#include <iostream>
#include <algorithm>
#include <vector>

class Span {
	std::vector<int> _a;
	unsigned int _N;
	Span();

	public:
		class TooManyIntsException : public std::exception {
		public:
			TooManyIntsException();
			virtual ~TooManyIntsException() throw();
			TooManyIntsException(const TooManyIntsException &);
			TooManyIntsException & operator = (const TooManyIntsException &);
			virtual const char* what() const throw() {
				return ("You gave me too many ints.");
			}
		};
		class NoSpanException : public std::exception {
		public:
			NoSpanException();
			virtual ~NoSpanException() throw();
			NoSpanException(const NoSpanException &);
			NoSpanException & operator = (const NoSpanException &);
			virtual const char* what() const throw() {
				return ("There are not enough ints to span.");
			}
		};
		Span(unsigned int N);
		~Span();
		Span(const Span &);
		Span & operator = (const Span & rhs);
		void addNumber(int);
		int shortestSpan();
		int longestSpan();
		void addRange(int, int);
};
