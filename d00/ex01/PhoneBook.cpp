#include <cstdio>
#include <iostream>
#include "PhoneBook.hpp"

//add contact to phonebook

void	add(PhoneBook arr[8], int *i) {
	puts("Input first name"); //print input prompt
	std::cout<<">> ";
	fflush(stdout); //flush output stream

	const int buffsz = 988; //initialize buffer length 
	static char response[buffsz]; //initialize buffer
	fgets(response, buffsz, stdin); //store input
	arr[*i].firstname = response; //store value as input
	arr[*i].firstname.pop_back(); //removes newline charater

	puts("Input last name"); //print input prompt
	std::cout<<">> ";
	fflush(stdout); //flush output stream

	fgets(response, buffsz, stdin); //store input
	arr[*i].lastname = response; //store value as input
	arr[*i].lastname.pop_back(); //removes newline character

	puts("Input nickname"); //print input prompt
	std::cout<<">> ";
	fflush(stdout); //flush output stream

	fgets(response, buffsz, stdin); //store input
	arr[*i].nickname = response; //store value as input
	arr[*i].nickname.pop_back(); //removes newline character

	puts("Input login"); //print input prompt
	std::cout<<">> ";
	fflush(stdout); //flush output stream

	fgets(response, buffsz, stdin); //store input
	arr[*i].login = response; //store value as input
	arr[*i].login.pop_back(); //removes newline character

	puts("Input postal address"); //print input prompt
	std::cout<<">> ";
	fflush(stdout); //flush output stream

	fgets(response, buffsz, stdin); //store input
	arr[*i].postal = response; //store value as input
	arr[*i].postal.pop_back(); //removes newline character

	puts("Input email address"); //print input prompt
	std::cout<<">> ";
	fflush(stdout); //flush output stream

	fgets(response, buffsz, stdin); //store input
	arr[*i].email = response; //store value as input
	arr[*i].email.pop_back(); //removes newline character

	puts("Input phone number"); //print input prompt
	std::cout<<">> ";
	fflush(stdout); //flush output stream

	fgets(response, buffsz, stdin); //store input
	arr[*i].phone = response; //store value as input
	arr[*i].phone.pop_back(); //removes newline character

	puts("Input birthday date"); //print input prompt
	std::cout<<">> ";
	fflush(stdout); //flush output stream

	fgets(response, buffsz, stdin); //store input
	arr[*i].birthday = response; //store value as input
	arr[*i].birthday.pop_back(); //removes newline character

	puts("Input favorite meal"); //print input prompt
	std::cout<<">> ";
	fflush(stdout); //flush output stream

	fgets(response, buffsz, stdin); //store input
	arr[*i].meal = response; //store value as input
	arr[*i].meal.pop_back(); //removes newline character

	puts("Input underwear color"); //print input prompt
	std::cout<<">> ";
	fflush(stdout); //flush output stream

	fgets(response, buffsz, stdin); //store input
	arr[*i].underwear = response; //store value as input
	arr[*i].underwear.pop_back(); //removes newline character

	puts("Input darkest secret"); //print input prompt
	std::cout<<">> ";
	fflush(stdout); //flush output stream

	fgets(response, buffsz, stdin); //store input
	arr[*i].secret = response; //store value as input
	arr[*i].secret.pop_back(); //removes newline character

	(*i)++; //increase index of phonebook
	if((*i) == 8) //if index is at the end reset to 0
		*i = 0;
}

//search phonebook for specific contact

void	search(PhoneBook arr[8]) {
	for(int i = 0; i < 8; i++) {
		if (arr[i].firstname.size() != 0) { //if the contact exists
			std::cout << "         " << i << "|"; //print contact
			if (arr[i].firstname.size() <= 10) {
				for (unsigned long int j = 10; j != arr[i].firstname.size(); j--)
					std::cout << " "; //pads the word with spaces
				std::cout << arr[i].firstname << "|";
			}
			else { //ends the word with a . if too long
				std::cout << arr[i].firstname.substr (0, 9) << ".|";
			}
			if (arr[i].lastname.size() <= 10) {
				for (unsigned long int j = 10; j != arr[i].lastname.size(); j--)
					std::cout << " "; //pads the word with spaces
				std::cout << arr[i].lastname << "|";
			}
			else { //ends the word with a . if too long
				std::cout << arr[i].lastname.substr (0, 9) << ".|";
			}
			if (arr[i].nickname.size() <= 10) {
				for (unsigned long int j = 10; j != arr[i].nickname.size(); j--)
					std::cout << " "; //pads the word with space
				std::cout << arr[i].nickname;
			}
			else { //ends the word with a . if too long
				std::cout << arr[i].nickname.substr (0, 9) << ".";
			}
			puts(""); //prints newline
		}
	}
	if (arr[0].firstname.size() != 0) {
		puts("Give me an index"); //prompts the user for a phonebook index
		std::cout<<">> ";
		fflush(stdout); //flush the output stream

		const int buffsz = 3; //initializes the buffer size
		static char response[buffsz]; //declares buffer
		fgets(response, buffsz, stdin); //stores input string
		if (response[0] < '0' || response[0] > '7') //print error message
			puts("You absolute baboon. Now we have to start at the beginning. I hope you're happy.");
		else {
			int resint = response[0] - '0'; //stores requested integer
			if (arr[resint].firstname.size() != 0) //prints contact if it exists
				std::cout << "first name = " << arr[resint].firstname << std::endl << "last name = " << arr[resint].lastname << std::endl << "nickname = " << arr[resint].nickname << std::endl << "login = " << arr[resint].login << std::endl << "postal address = " << arr[resint].postal << std::endl << "email address = " << arr[resint].email << std::endl << "phone number = " << arr[resint].phone << std::endl << "birthday date = " << arr[resint].birthday << std::endl << "favorite meal = " << arr[resint].meal << std::endl << "underwear color = " << arr[resint].underwear << std::endl << "darkest secret = " << arr[resint].secret << std::endl;
			else //print error message 
				puts("Unbelievable. You had less than 10 options and you still managed to screw it up. Disappointment.");
		}
	}
	else
	{ //if there are no contacts
		puts("Nothing Yet! Try adding an entry!");
	}

}

//jump to the proper function depending on input

int		jump( const char *rs, PhoneBook arr[8], int *i) {
	if (!strcmp("EXIT\n", rs)) return 0; //if exiting the program return 0
	else if (!strcmp("ADD\n", rs)) add(arr, i); //add name to phonebook
	else if (!strcmp("SEARCH\n", rs)) search(arr); //search name in book
	else puts("ya dingus!!! That ain't a command!"); //print error message
	return 1; //return 1 if not exiting
}

//prompt the user for a command

int prompt(PhoneBook arr[8], int *i) {
	puts("Choose an option: "); //print prompt message
	puts("ADD");
	puts("SEARCH");
	puts("EXIT");
	std::cout<<">> ";
	fflush(stdout); //flush the ouput stream

	const int buffsz = 10; //initialize buffer size
	static char response[buffsz]; //create char array for input
	fgets(response, buffsz, stdin); //get input string

	return jump(response, arr, i); //return to main
}

//phonebook that can store 8 contacts

int	main() {
	int	i = 0; 
	PhoneBook arr[8]; //declares PhoneBook array with 8 contacts
	while(prompt(arr, &i)); //plays the prompt
	//print an exit prompt to end the program
	puts("Goodbye. Thank you for using this Shitty PhoneBook");
	return 0; //stop the program
}
