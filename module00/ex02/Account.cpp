#include "Account.hpp"
#include <iostream>
#include <iomanip>      // std::get_time
#include <ctime>        // struct std::tm


void	Account::_displayTimestamp( void )
{
	std::cout << "[time_stamp] ";
}


Account::Account(int init_dep)
{
	static int i = 0;
	this->_accountIndex = i;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_amount = init_dep;
	this->_displayTimestamp();

	_nbAccounts++;
	_totalAmount = _totalAmount + init_dep;
	
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created\n";
	i++;
}

Account::Account()
{
	std::cout << "Default constructor\n";
}


Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed\n";
}

////////////////////////////////////////////////////////////////////
// GENERAL INFO
int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}
int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}
int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}
int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}
// DISPLAY STATISTICS IN ONE LINE
void	Account::displayAccountsInfos( void )
{
	std::cout << "\n";
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals() << ";\n\n";


	// HOW TO NOW ACCESS EACH INDIVIDUAL OBJECT ?????
	// std::cout << " ..... individual amount:" << Account::arr[0]->_amount << ";\n";

}
////////////////////////////////////////////////////////////////////


void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << ";\n";
}


// DEPOSITING //////////////////////////////////////////////////////
void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	std::cout << "deposit:" << deposit << ";";
	_amount = _amount + deposit;
	this->_nbDeposits++;
	std::cout << "amount:" << _amount << ";";
	std::cout << "nb_deposits:" << _nbDeposits << ";\n";
	_totalNbDeposits++;
	_totalAmount += deposit;
}
////////////////////////////////////////////////////////////////////


// WITHDRAWING /////////////////////////////////////////////////////
bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	std::cout << "withdrawal:";
	if (withdrawal <= _amount)
	{
		std::cout << withdrawal << ";";
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		_totalAmount -= withdrawal;
		_amount = _amount - withdrawal;
	}
	else
	{
		//_nbWithdrawals--;
		std::cout << "refused" << "\n";
		return (0);
	}
	std::cout << "amount:" << _amount << ";";
	std::cout << "nb_withdrawals:" << _nbWithdrawals << ";\n";


	return (1);
}


// MY ADDED FUNCTIONS ////////////////////////

void displayAccounts(Account *arr)
{
	int i = 0;
	while (i < 8)
	{
		arr[i].displayStatus();
		i++;
	}
}




////////////////////////////////////////////////////////////////////



int Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;


int main()
{
	Account *arr[8];

	int amounts[8] = {42, 54, 957, 432, 1234, 0, 754, 16576};
	int	deposits[8] = {5, 765, 564, 2, 87, 23, 9, 20};
	int withdrawals[8] = {999, 34, 657, 4, 76, 999, 657, 7654};


	// INITIALIZE OBJECTS
	int i = 0;
	while (i < 8)
	{
		arr[i] = new Account(amounts[i]);
		i++;
	}
	std::cout << "\n";

	// GENERAL STATS
	Account::displayAccountsInfos();


	displayAccounts(*arr);
	std::cout << "\n";

	// DEPOSITING
	std::cout << "	DEPOSITING: \n";
	i = 0;
	while (i < 8)
	{
		arr[i]->makeDeposit(deposits[i]);
		i++;
	}

	std::cout << "\n";

	// GENERAL STATS
	Account::displayAccountsInfos();
	i = 0;
	while (i < 8)
	{
		arr[i]->displayStatus();
		i++;
	}

	std::cout << "\n";

	// WITHDRAWING
	std::cout << "	WITHDRAWALS: \n";
	i = 0;
	while (i < 8)
	{
		arr[i]->makeWithdrawal(withdrawals[i]);
		i++;
	}

	std::cout << "\n";

	// GENERAL STATS
	Account::displayAccountsInfos();
	i = 0;
	while (i < 8)
	{
		arr[i]->displayStatus();
		i++;
	}


	// CLOSING
	std::cout << "\n";
	i = 0;
	while (i < 8)
	{
		delete arr[i];
		i++;
	}
}
