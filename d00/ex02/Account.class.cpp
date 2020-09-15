#include <iostream>
#include <iomanip>
#include <ctime>
#include "Account.class.hpp"

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;
int		Account::_checkAmountCallCount = 0;

Account::Account(int initial_deposit) :
	_accountIndex(_nbAccounts++),
	_amount(initial_deposit),
	_nbDeposits(0),
	_nbWithdrawals(0)
{
	_totalAmount += _amount;
	_displayTimestamp();
	std::cout << "index:" <<_accountIndex
		<< ";amount:" << _amount
		<< ";created" << std::endl;
}

Account::Account() :
	_accountIndex(_nbAccounts++),
	_amount(0),
	_nbDeposits(0),
	_nbWithdrawals(0)
{
	_totalAmount += _amount;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
		<< ";amount:" << _amount
		<< ";created" << std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
		<< ";amount:" << _amount
		<< ";closed" << std::endl;
}

int		Account::getNbAccounts(){return _nbAccounts;}
int		Account::getTotalAmount(){return _totalAmount;}
int		Account::getNbDeposits(){return _totalNbDeposits;}
int		Account::getNbWithdrawals(){return _totalNbWithdrawals;}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts
		<< ";total:" << _totalAmount
		<< ";deposits:" << _totalNbDeposits
		<< ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
		<< ";p_amount:" << _amount
		<< ";deposit:" << deposit
		<< ";amount:" << _amount + deposit
		<< ";nb_deposits:" << ++_nbDeposits << std::endl;
	_amount += deposit;
	_totalNbDeposits++;
	_totalAmount += deposit;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	if (withdrawal > _amount)
	{
		std::cout << "index:" << _accountIndex
			<< ";p_amount:" << _amount
			<<";withdrawal:refused" << std::endl;
		return false;
	}
	else
	{
		std::cout << "index:" << _accountIndex
			<< ";p_amount:" << _amount
			<< ";withdrawal:" << withdrawal
			<< ";amount:" << _amount - withdrawal
			<< ";nb_withdrawals:" << ++_nbWithdrawals << std::endl;
		_amount -= withdrawal;
		_totalNbWithdrawals++;
		_totalAmount -= withdrawal;
		return true;
	}
}

int		Account::checkAmount() const
{
	_checkAmountCallCount++;
	return _amount;
}

void	Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
		<< ";amount:" << _amount
		<< ";deposits:" << _nbDeposits
		<< ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
	time_t		rawtime;
	struct tm	*date;
	std::string	datestr;
	rawtime = time(&rawtime);
	date = localtime(&rawtime);
	std::cout <<
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
