#include "serialize.hpp"

void * serialize( void ){
	char* ans = new char[20];
	char randarr[8];
	int in;
	char randarr2[8];

	srand(time(NULL));
	for(int i = 0; i < 8; i++) {
		in = (rand() % 62);
		if (in < 10)
			randarr[i] = in + '0';
		else if (in >= 10 && in <= 35)
			randarr[i] = in + '7';
		else
			randarr[i] = in + '<';
		in = (rand() % 62);
		if (in < 10)
			randarr2[i] = in + '0';
		else if (in >= 10 && in <= 35)
			randarr2[i] = in + '7';
		else
			randarr2[i] = in + '=';
	}
	in = (rand() % INT_MAX);
	*(reinterpret_cast<unsigned long long *>(ans)) = *(reinterpret_cast<unsigned long long* >(randarr));
	*(reinterpret_cast<int *>(ans + 8)) = in;
	*(reinterpret_cast<unsigned long long *>(ans + 12)) = *(reinterpret_cast<unsigned long long *>(randarr2));
	return ans;
}

Data * deserialize( void * raw ){
	Data* ans = new Data;
	char *rawchar;

	rawchar = reinterpret_cast<char *>(raw);
	ans->s1 = "";
	ans->s2 = "";
	for(int i = 0; i < 8; i++) {
		ans->s1 += rawchar[i];
		ans->s2 += rawchar[i + 12];
	}
	ans->n = *(reinterpret_cast<int *>(rawchar + 8));
	return (ans);
}
