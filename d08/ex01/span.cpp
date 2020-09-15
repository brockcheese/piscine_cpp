#include "span.hpp"

Span::TooManyIntsException::TooManyIntsException() {}

Span::TooManyIntsException::~TooManyIntsException() throw(){}

Span::TooManyIntsException::TooManyIntsException(const TooManyIntsException &tmie) {
	*this = tmie;
}

Span::TooManyIntsException & Span::TooManyIntsException::operator= (const TooManyIntsException &) {
	return (*this);
}

Span::NoSpanException::NoSpanException() {}

Span::NoSpanException::~NoSpanException() throw() {}

Span::NoSpanException::NoSpanException(const NoSpanException &tmie) {
	*this = tmie;
}

Span::NoSpanException & Span::NoSpanException::operator= (const NoSpanException &) {
	return (*this);
}

Span::Span () {}

Span::Span (unsigned int N) :
	_N(N)
{}

Span::~Span() {}

Span::Span (const Span &s) {
	*this = s;
}

Span & Span::operator= (const Span &rhs) {
	if (this != &rhs)
		_a = rhs._a;
	return (*this);
}

void Span::addNumber(int num) {
	if (_a.size() == _N)
		throw TooManyIntsException();
	else
		_a.push_back(num);
}

void Span::addRange(int s, int e) {
	int range = abs(e - s);
	for(int i = 0; i < range; i++) {
		if (s <= e)
			addNumber(s++);
		else
			addNumber(s--);
	}
}

int Span::shortestSpan() {
	int span = INT_MAX;
	if (_a.size() < 2)
		throw NoSpanException();
	else {
		std::vector<int> a = _a;
		std::sort (a.begin(), a.end());
		for (unsigned int i = 1; i < a.size(); i++)
			if (span > a[i] - a[i - 1])
				span = a[i] - a[i - 1];
		return span;
	}
}

int Span::longestSpan() {
	if (_a.size() < 2)
		throw NoSpanException();
	else {
		std::vector<int> a = _a;
		std::sort (a.begin(), a.end());
		return (a.back() - a.front());
	}
}

