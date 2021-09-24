#include "Account.hpp"
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
	return (_totalNbDeposits);
}

void	Account::displayAccountsInfos( void )
{
	 
}

Account::Account( int initial_deposit )
{
	_amount = initial_deposit;
	_accountIndex = _nbAccounts;
	_nbAccounts++;
}

Account::~Account( void )
{
	_nbAccounts--;
	
}

void	Account::makeDeposit( int deposit )
{
	if (deposit > 0)
	{
		_totalAmount += deposit;
		_totalNbDeposits++;
	}
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (withdrawal > 0)
	{
		_totalAmount -= withdrawal;
		_totalNbWithdrawals += withdrawal;
		return (1);
	}
	return (0);
}

int		Account::checkAmount( void ) const
{
	return (_totalAmount);
}

void	Account::displayStatus( void ) const
{

}

void	Account::_displayTimestamp( void )
{
	
}

