#include <iostream>
#include <stack>
#include <vector>

template<typename T>
class MutantStack : public std::stack<T> {
		std::vector<T> _mutant;
		unsigned int _size;

	public:
		MutantStack() : std::stack<T>(), _size(0){};
		~MutantStack() {};
		MutantStack(const MutantStack &ms) : std::stack<T>(ms){ *this = ms; }
		MutantStack & operator= (const MutantStack &rhs) {
			if (this != &rhs){
				_mutant = rhs._mutant;
				_size = rhs._size;
			}
			return *this;
		}

		typedef typename std::vector<T>::iterator iterator;
		typedef typename std::vector<T>::const_iterator const_iterator;

		iterator begin() {return _mutant.begin();}
		iterator end() {return _mutant.end();}
		void push(T x) {_size++; _mutant.push_back(x);};
		void pop() {_size--; _mutant.pop_back();}
		T top() {return _mutant.back();}
		unsigned int size() { return _size;}
};
