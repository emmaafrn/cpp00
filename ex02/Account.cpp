#include "Account.hpp"
#include <ctime>
#include <iostream>

	int Account::_nbAccounts = 0;
	int Account::_totalAmount = 0;
	int Account::_totalNbDeposits = 0;
	int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

Account::Account( int initial_deposit )
{
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_amount = initial_deposit;
	_totalAmount += _amount;
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_displayTimestamp();
	std::cout<< "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account( void )
{
	_nbAccounts--;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	if (deposit > 0)
	{
		_amount += deposit;
		_nbDeposits++;
		_totalAmount += deposit;
		_totalNbDeposits++;
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";p_amount:" << (_amount - deposit) << ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
	}

}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (withdrawal > 0 && _amount > withdrawal)
	{
		_amount -= withdrawal;
		_nbWithdrawals++;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount + withdrawal << ";withdrawal:" << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return (1);
	}
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:" << "refused" << std::endl;
	return (0);
}

int		Account::checkAmount( void ) const
{
	return (_totalAmount);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
	time_t		timer;
	struct tm	*the_time;

	time(&timer);
	the_time = localtime(&timer);
	std::cout << "[" << (the_time->tm_year + 1900) << the_time->tm_mday << (the_time->tm_mon + 1) << "_" << the_time->tm_hour<< the_time->tm_min << the_time->tm_sec << "] ";
}

