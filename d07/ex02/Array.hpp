#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept>
#include <iostream>
#include <string>

template< typename T >
class Array {
	T* _a;
	int _size;

public:
	class OutOfLimitsException : public std::exception {
		public:
			virtual ~OutOfLimitsException() throw() {};
			virtual const char* what() const throw() {
				return ("This index is out of the limits.");
			}
	};
	Array() : _size(0) {
		_a = new T[0];
	}
	Array(unsigned int n) : _size(n){
		_a = new T[n];
		for(unsigned int i = 0; i < n; i++)
			_a[i] = *(new T());
	}
	Array(Array<T> const & a) : _a(a._a), _size(a._size) {
		*this = a;
	}
	Array<T> & operator = (Array<T> const & rhs) {
		_size = rhs.size();
		_a = new T[rhs.size()];
		for (int i = 0; i < rhs.size(); i++)
			_a[i] = rhs._a[i];
		return (*this);
	}
	T & operator [](int index) {
		if (index >= size() || index < 0)
			throw OutOfLimitsException();
		else
			return _a[index];
	}
	int	size() const {
		return _size;
	}
};

#endif
