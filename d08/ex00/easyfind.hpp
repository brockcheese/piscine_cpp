#include <iostream>
#include <algorithm>
#include <vector>

template< typename T >
int easyfind(T t, int i) {
	typename T::iterator itbegin = t.begin();
	typename T::iterator itend = t.end();
	for (typename T::iterator it = itbegin; it < itend; ++it)
		if (*it == i)
			return *it;
	throw std::exception();
}
