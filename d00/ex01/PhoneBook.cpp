#include <cstdio>
#include <iostream>
#include "PhoneBook.hpp"


void	add(PhoneBook arr[8], int *i) {
	puts("Input first name");
	std::cout<<">> ";
	fflush(stdout);

	const int buffsz = 988;
	static char response[buffsz];
	fgets(response, buffsz, stdin);
	arr[*i].firstname = response;
	arr[*i].firstname.pop_back();

	puts("Input last name");
	std::cout<<">> ";
	fflush(stdout);

	fgets(response, buffsz, stdin);
	arr[*i].lastname = response;
	arr[*i].lastname.pop_back();

	puts("Input nickname");
	std::cout<<">> ";
	fflush(stdout);

	fgets(response, buffsz, stdin);
	arr[*i].nickname = response;
	arr[*i].nickname.pop_back();

	puts("Input login");
	std::cout<<">> ";
	fflush(stdout);

	fgets(response, buffsz, stdin);
	arr[*i].login = response;
	arr[*i].login.pop_back();

	puts("Input postal address");
	std::cout<<">> ";
	fflush(stdout);

	fgets(response, buffsz, stdin);
	arr[*i].postal = response;
	arr[*i].postal.pop_back();

	puts("Input email address");
	std::cout<<">> ";
	fflush(stdout);

	fgets(response, buffsz, stdin);
	arr[*i].email = response;
	arr[*i].email.pop_back();

	puts("Input phone number");
	std::cout<<">> ";
	fflush(stdout);

	fgets(response, buffsz, stdin);
	arr[*i].phone = response;
	arr[*i].phone.pop_back();

	puts("Input birthday date");
	std::cout<<">> ";
	fflush(stdout);

	fgets(response, buffsz, stdin);
	arr[*i].birthday = response;
	arr[*i].birthday.pop_back();

	puts("Input favorite meal");
	std::cout<<">> ";
	fflush(stdout);

	fgets(response, buffsz, stdin);
	arr[*i].meal = response;
	arr[*i].meal.pop_back();

	puts("Input underwear color");
	std::cout<<">> ";
	fflush(stdout);

	fgets(response, buffsz, stdin);
	arr[*i].underwear = response;
	arr[*i].underwear.pop_back();

	puts("Input darkest secret");
	std::cout<<">> ";
	fflush(stdout);

	fgets(response, buffsz, stdin);
	arr[*i].secret = response;
	arr[*i].secret.pop_back();

	(*i)++;
	if((*i) == 8)
		*i = 0;
}

void	search(PhoneBook arr[8]) {
	for(int i = 0; i < 8; i++) {
		if (arr[i].firstname.size() != 0) {
			std::cout << "         " << i << "|";
			if (arr[i].firstname.size() <= 10) {
				for (unsigned long int j = 10; j != arr[i].firstname.size(); j--)
					std::cout << " ";
				std::cout << arr[i].firstname << "|";
			}
			else {
				std::cout << arr[i].firstname.substr (0, 9) << ".|";
			}
			if (arr[i].lastname.size() <= 10) {
				for (unsigned long int j = 10; j != arr[i].lastname.size(); j--)
					std::cout << " ";
				std::cout << arr[i].lastname << "|";
			}
			else {
				std::cout << arr[i].lastname.substr (0, 9) << ".|";
			}
			if (arr[i].nickname.size() <= 10) {
				for (unsigned long int j = 10; j != arr[i].nickname.size(); j--)
					std::cout << " ";
				std::cout << arr[i].nickname;
			}
			else {
				std::cout << arr[i].nickname.substr (0, 9) << ".";
			}
			puts("");
		}
	}
	if (arr[0].firstname.size() != 0) {
		puts("Give me an index");
		std::cout<<">> ";
		fflush(stdout);

		const int buffsz = 3;
		static char response[buffsz];
		fgets(response, buffsz, stdin);
		if (response[0] < '0' || response[0] > '7')
			puts("You absolute baboon. Now we have to start at the beginning. I hope you're happy.");
		else {
			int resint = response[0] - '0';
			if (arr[resint].firstname.size() != 0)
				std::cout << "first name = " << arr[resint].firstname << std::endl << "last name = " << arr[resint].lastname << std::endl << "nickname = " << arr[resint].nickname << std::endl << "login = " << arr[resint].login << std::endl << "postal address = " << arr[resint].postal << std::endl << "email address = " << arr[resint].email << std::endl << "phone number = " << arr[resint].phone << std::endl << "birthday date = " << arr[resint].birthday << std::endl << "favorite meal = " << arr[resint].meal << std::endl << "underwear color = " << arr[resint].underwear << std::endl << "darkest secret = " << arr[resint].secret << std::endl;
			else
				puts("Unbelievable. You had less than 10 options and you still managed to screw it up. Disappointment.");
		}
	}
	else
	{
		puts("Nothing Yet! Try adding an entry!");
	}

}

int		jump( const char *rs, PhoneBook arr[8], int *i) {
	if (!strcmp("EXIT\n", rs)) return 0;
	else if (!strcmp("ADD\n", rs)) add(arr, i);
	else if (!strcmp("SEARCH\n", rs)) search(arr);
	else puts("ya dingus!!! That ain't a command!");
	return 1;
}

int prompt(PhoneBook arr[8], int *i) {
	puts("Choose an option: ");
	puts("ADD");
	puts("SEARCH");
	puts("EXIT");
	std::cout<<">> ";
	fflush(stdout);

	const int buffsz = 10;
	static char response[buffsz];
	fgets(response, buffsz, stdin);

	return jump(response, arr, i);
}

int	main() {
	int	i = 0;
	PhoneBook arr[8];
	while(prompt(arr, &i));
	puts("Goodbye. Thank you for using this Shitty PhoneBook");
	return 0;
}
