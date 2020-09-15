#include <vector>
#include <iostream>
#include <stack>
#include "Token.hpp"
#include "Num.hpp"
#include "Op.hpp"

std::vector<Token*> tokenize(std::string expr) {
	std::vector<Token*> tv;
	int begin;
	for(size_t i = 0; i < expr.size(); i++) {
		if (isdigit(expr[i])) {
			begin = i;
			while (isdigit(expr[++i]))
				;
			int num = std::stoi(expr.substr(begin, i-- - begin));
			Num *n = new Num(num);
			tv.push_back(n);
		}
		else if (expr[i] == '+' || expr[i] == '-' || expr[i] == '/' || expr[i] == '*') {
			Op *o = new Op(expr[i]);
			tv.push_back(o);
		}
		else if (expr[i] == '(') {
			Token *t = new Token("ParOpen");
			tv.push_back(t);
		}
		else if (expr[i] == ')') {
			Token *u = new Token("ParClose");
			tv.push_back(u);
		}
	}
	std::cout << "Tokens:";
	int j = 0;
	for (std::vector<Token *>::iterator it = tv.begin(); it != tv.end(); it++) {
		if (tv[j]->getIdentity() == "Num")
			std::cout << " " << (*(dynamic_cast<Num *>(tv[j])));
		else if (tv[j]->getIdentity() == "Op")
			std::cout << " " << (*(dynamic_cast<Op *>(tv[j])));
		else
			std::cout << " " << *(tv[j]);
		j++;
	}
	puts("");
	return tv;
}

int prec(Token *c) {
	if (c->getIdentity() == "Op") {
		Op *op = dynamic_cast<Op *>(c);
		if (op->getC() == '*' || op->getC() == '/')
			return 2;
		else if (op->getC() == '+' || op->getC() == '-')
			return 1;
	}
	return -1;
}

std::vector<Token*> polandize(std::vector<Token*> tv) {
	std::stack<Token*> st;
	Token *t = new Token("N");
	st.push(t);
	std::vector<Token*> tvtemp;
	int j = 0;
	for(std::vector<Token *>::iterator it = tv.begin(); it != tv.end(); it++) {
		if (tv[j]->getIdentity() == "Num") {
			tvtemp.push_back(tv[j]);
			tv.erase(it);
			it--;
		}
		else if (tv[j]->getIdentity() == "ParOpen") {
			st.push(tv[j]);
			tv.erase(it);
			it--;
		}
		else if (tv[j]->getIdentity() == "ParClose") {
			while(st.top()->getIdentity() != "N" && st.top()->getIdentity() != "ParOpen") {
				Token* c = st.top();
				st.pop();
				tvtemp.push_back(c);
			}
			if(st.top()->getIdentity() == "ParOpen") {
				Token* c = st.top();
				st.pop();
				delete c;
			}
		}
		else {
			while(st.top()->getIdentity() != "N" && prec(tv[j]) <= prec(st.top())) {
				Token* c = st.top();
				st.pop();
				tvtemp.push_back(c);
			}
			st.push(tv[j]);
		}
		j++;
	}
	while(st.top()->getIdentity() != "N") {
		Token* c = st.top();
		st.pop();
		tvtemp.push_back(c);
	}
	std::cout << "Postfix :";
	j = 0;
	for (std::vector<Token *>::iterator it = tvtemp.begin(); it != tvtemp.end(); it++) {
		if (tvtemp[j]->getIdentity() == "Num")
			std::cout << " " << (*(dynamic_cast<Num *>(tvtemp[j])));
		else if (tvtemp[j]->getIdentity() == "Op")
			std::cout << " " << (*(dynamic_cast<Op *>(tvtemp[j])));
		else
			std::cout << " " << *(tvtemp[j]);
		j++;
	}
	puts("");
	return tvtemp;
}

void stackify(std::vector<Token*> tv) {
	int j = 0;
	std::stack<Token*> ts;
	for(std::vector<Token *>::iterator it = tv.begin(); it != tv.end(); it++) {
		if (tv[j]->getIdentity() == "Num") {
			ts.push(tv[j]);
			std::cout << "I " << (*(dynamic_cast<Num *>(tv[j]))) << " | OP Push		| ST " << (*(dynamic_cast<Num *>(tv[j]))->getNum()) << "]" << std::endl;
		}
		if (tv[j]->getIdentity() == "Op") {
			ts.push(tv[j]);
		}
		j++;
	}
}

int main(int argc, char **argv) {
	if (argc != 2) {
		puts("usage: ./ex04 [Valid Mathematical Expression]");
		return 0;
	}
	std::vector<Token*> tv = tokenize(argv[1]);
	std::vector<Token*> newtv = polandize(tv);
	stackify(newtv);
}
