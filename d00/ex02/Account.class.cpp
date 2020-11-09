#include <iostream>
#include <iomanip>
#include <ctime>
#include "Account.class.hpp"

//initialize global variables

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;
int		Account::_checkAmountCallCount = 0;

//Constructor with an initial_deposit passed

Account::Account(int initial_deposit) :
	_accountIndex(_nbAccounts++), //initialize account index
	_amount(initial_deposit), //initialize ammount to deposit
	_nbDeposits(0), //initialize number of deposits to 0
	_nbWithdrawals(0) //initialize number of withdrawals to 0
{
	_totalAmount += _amount; //add amount to total amount
	_displayTimestamp(); //displays the current timestamp
	std::cout << "index:" <<_accountIndex //prints account data
		<< ";amount:" << _amount
		<< ";created" << std::endl;
}

//default constructor

Account::Account() :
	_accountIndex(_nbAccounts++), //initialize account index
	_amount(0), //initialize ammount to 0
	_nbDeposits(0), //initialize number of deposits to 0
	_nbWithdrawals(0) //initialize number of withdrawals to 0
{
	_totalAmount += _amount; //add amount to total amount
	_displayTimestamp(); //displays the current timestamp
	std::cout << "index:" << _accountIndex //prints account data
		<< ";amount:" << _amount
		<< ";created" << std::endl;
}

//default destructor

Account::~Account()
{
	_displayTimestamp(); //displays the current timestamp
	std::cout << "index:" << _accountIndex //prints account data
		<< ";amount:" << _amount
		<< ";closed" << std::endl;
}

int		Account::getNbAccounts(){return _nbAccounts;} //returns the number of accounts
int		Account::getTotalAmount(){return _totalAmount;} //returns the total amount of an account
int		Account::getNbDeposits(){return _totalNbDeposits;} //returns the number of deposits
int		Account::getNbWithdrawals(){return _totalNbWithdrawals;} //returns the number of withdrawals

//display overall info about the accounts

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp(); //displays the current timestamp
	std::cout << "accounts:" << _nbAccounts //print account data
		<< ";total:" << _totalAmount
		<< ";deposits:" << _totalNbDeposits
		<< ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

//makes a deposit into an account

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp(); //displays the current timestamp
	std::cout << "index:" << _accountIndex //print deposit data
		<< ";p_amount:" << _amount
		<< ";deposit:" << deposit
		<< ";amount:" << _amount + deposit
		<< ";nb_deposits:" << ++_nbDeposits << std::endl;
	_amount += deposit; //add deposit to money in account
	_totalNbDeposits++; //increment the total number of deposits
	_totalAmount += deposit; //add deposit to total amount
}

//makes a withdrawal from an account

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp(); //displays the current timestamp
	if (withdrawal > _amount) //refuse withdrawal if requested amount exceeds current amount
	{
		std::cout << "index:" << _accountIndex
			<< ";p_amount:" << _amount
			<<";withdrawal:refused" << std::endl;
		return false; //return false if failed
	}
	else
	{
		std::cout << "index:" << _accountIndex //print withdrawal data
			<< ";p_amount:" << _amount
			<< ";withdrawal:" << withdrawal
			<< ";amount:" << _amount - withdrawal
			<< ";nb_withdrawals:" << ++_nbWithdrawals << std::endl;
		_amount -= withdrawal; //subtract withdrawn money from account
		_totalNbWithdrawals++; //increment the total number of withdrawals
		_totalAmount -= withdrawal; //subtract withdrawn money from total amount
		return true; //return true
	}
}

//checks the amount in an account

int		Account::checkAmount() const
{
	_checkAmountCallCount++; //increments the check amount call count
	return _amount; //return current amount in account
}

//displays the status of an account

void	Account::displayStatus() const
{
	_displayTimestamp(); //displays the current timestamp
	std::cout << "index:" << _accountIndex //prints data on account
		<< ";amount:" << _amount
		<< ";deposits:" << _nbDeposits
		<< ";withdrawals:" << _nbWithdrawals << std::endl;
}

//displays the timestamp of the account

void	Account::_displayTimestamp( void )
{
	time_t		rawtime;
	struct tm	*date;
	std::string	datestr;
	rawtime = time(&rawtime); //stores raw time data
	date = localtime(&rawtime); //initializes date as a tm struct
	std::cout << //prints the timestamp
		"["						<<
		std::to_string(1900 + date->tm_year)						<<
		((std::to_string(date->tm_mon).length() < 2) ? "0" : "")	<<
		std::to_string(date->tm_mon)								<<
		((std::to_string(date->tm_mday).length() < 2) ? "0" : "")	<<
		std::to_string(date->tm_mday)								<<
		"_"															<<
		((std::to_string(date->tm_hour).length() < 2) ? "0" : "")	<<
		std::to_string(date->tm_hour)								<<
		((std::to_string(date->tm_min).length() < 2) ? "0" : "")	<<
		std::to_string(date->tm_min)								<<
		((std::to_string(date->tm_sec).length() < 2) ? "0" : "")	<<
		std::to_string(date->tm_sec)								<<
		"]"															<<
	std::flush;
}
