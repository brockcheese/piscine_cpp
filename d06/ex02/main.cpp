#include "ex02.hpp"

Base * generate(void){
	srand(time(NULL));
	int i = rand() % 3;
	Base *ans;
	if (i == 0)
		ans = new A();
	else if (i == 1)
		ans = new B();
	else
		ans = new C();
	return ans;
}

void identify_from_pointer( Base * p ) {
	try {
		A a;
		a = dynamic_cast<A &>(*p);
		puts("A");
	}
	catch (std::bad_cast &bc) {
		try {
			B b;
			b = dynamic_cast<B &>(*p);
			puts("B");
		}
		catch (std::bad_cast &cc) {
			try {
				C c;
				c = dynamic_cast<C &>(*p);
				puts("C");
			}
			catch(std::bad_cast &dc) {
				puts("This is none of them.");
			}
		}
	}
}

void identify_from_reference( Base & p ) {
	try {
		A a;
		a = dynamic_cast<A &>(p);

		puts("A");
	}
	catch (std::bad_cast &bc) {
		try {
			B b;
			b = dynamic_cast<B &>(p);
			puts("B");
		}
		catch (std::bad_cast &cc) {
			try {
				C c;
				c = dynamic_cast<C &>(p);
				puts("C");
			}
			catch(std::bad_cast &dc) {
				puts("This is none of them.");
			}
		}
	}
}

int main() {
	Base* ans = generate();
	identify_from_pointer(ans);
	identify_from_reference(*ans);
	delete ans;
}
