#include "Decrement.hpp"
#include "Dpleft.hpp"
#include "Dpright.hpp"
#include "Increment.hpp"
#include "Output.hpp"
#include "Comma.hpp"

int main(int argc, char **argv) {
	std::queue<Instruction*> q;
	if (argc == 2) {
		char array[30000] = {0};
		char *ptr = array;
		std::ifstream ifile(argv[1]);
		std::string buffer;
		std::string full = "";
		while (std::getline(ifile, buffer))
			full += buffer;
		Dpright *dpr = new Dpright();
		Dpleft *dpl = new Dpleft();
		Increment *inc = new Increment();
		Decrement *dec = new Decrement();
		Output *out = new Output();
		Comma *com = new Comma();
		for (size_t i = 0; i < full.size(); i++) {
			switch (full[i]) {
				case '>':{
					ptr++;
					q.push(dpr);
					break;
				}
				case '<':{
					ptr--;
					q.push(dpl);
					break;
				}
				case '+':{
					++*ptr;
					q.push(inc);
					break;
				}
				case '-':{
					--*ptr;
					q.push(dec);
					break;
				}
				case '.':{
					q.push(out);
					break;
				}
				case ',':{
					q.push(com);
					break;
				}
				case '[':{
					if (*ptr == 0){
						int count = 0;
						while (count != 0 || full[++i] != ']') {
							if (full[i] == '[')
								count++;
							else if (full[i] == ']')
								count--;
						}
					}
					break;
				}
				case ']':{
					if (*ptr != 0) {
						int count2 = -1;
						while (count2 != 0 || full[i] != '[') {
							if (full[i] == ']')
								count2++;
							else if (full[i] == '[')
								count2--;
							i--;
						}
					}
					break;
				}
			}
		}
		ifile.close();
		char array2[30000] = {0};
		char *ptr2 = array2;
		while (!q.empty()) {
			Instruction* tmp = q.front();
			tmp->execute(&ptr2);
			q.pop();
		}
		delete(dpr);
		delete(dpl);
		delete(dec);
		delete(com);
		delete(out);
		delete(inc);
	}
}
