#include "span.hpp"

int main()
{
		Span sp = Span(5);

		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		try {sp.addRange(1, 100);}
		catch (Span::TooManyIntsException & e){
			std::cout << e.what() << std::endl;
		}
		Span span = Span(10000);
		try {std::cout << span.shortestSpan() << std::endl;}
		catch (Span::NoSpanException & e) {
			std::cout << e.what() << std::endl;
		}
		span.addNumber(-1);
		try {std::cout << span.shortestSpan() << std::endl;}
		catch (Span::NoSpanException & e) {
			std::cout << e.what() << std::endl;
		}
		span.addRange(0, 9999);
		std::cout << span.shortestSpan() << std::endl;
		std::cout << span.longestSpan() << std::endl;
}
