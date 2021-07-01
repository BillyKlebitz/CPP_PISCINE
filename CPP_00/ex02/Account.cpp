# include "Account.hpp"


int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp(void)
{
		std::chrono::system_clock::time_point now = std::chrono::system_clock::now();
			time_t	tt = std::chrono::system_clock::to_time_t(now);
				tm local_tm = *localtime(&tt);
					std::cout << std::put_time(&local_tm, "[%Y%m%d_%H%M%S] ");
}

Account::Account( void ){
	

	return;
};


Account::Account( int initial_deposit ){
	
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
	this->_amount = initial_deposit;
	this->_accountIndex = this->_nbAccounts;	
	this->_displayTimestamp();
	std::cout 
		<< "index:"	<< this->_accountIndex 
		<< ";amount:"<< this->_amount
		<< ";created"<< std::endl; 
	
	this->_nbAccounts++;
	this->_totalAmount += this->_amount;;
	return;
}

Account::~Account( void ){
	this->_displayTimestamp();
	std::cout 
		<< "index:"	<< this->_accountIndex 
		<< ";amount:"<< this->_amount
		<< ";closed"<< std::endl; 
	return;
}

bool	Account::makeWithdrawal( int withdrawal ){

	this->_displayTimestamp();
	std::cout 
		<< "index:"	<< this->_accountIndex 
		<< ";p_amount:"<< this->_amount
		<< ";withdrawal:";
	if (withdrawal > this->_amount)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	this->_amount -= withdrawal;
	_totalAmount -= withdrawal;
	this->_nbWithdrawals++;
	_totalNbWithdrawals++;	
	std::cout	<< withdrawal
				<<";amount:" << this->_amount
				<<";nb_withdrawals:" << this->_nbWithdrawals
				<< std::endl;
	return (true);
}

void	Account::makeDeposit( int deposit ){

	this->_displayTimestamp();
	std::cout 
		<< "index:"	<< this->_accountIndex 
		<< ";p_amount:"<< this->_amount;
	this->_amount += deposit;
	_totalAmount += deposit;
	this->_nbDeposits++;
	_totalNbDeposits++;
	std::cout
		<< ";deposit:"<< deposit
		<< ";amount:"<< this->_amount
		<< ";nb_deposits:" << this->_nbDeposits
		<< std::endl;
}
	
void	Account::displayAccountsInfos( void ){

	_displayTimestamp();
	std::cout	<< "accounts:" << _nbAccounts 
				<< ";total:" << _totalAmount 
				<< ";deposits:" << _totalNbDeposits 
				<< ";withdrawals:" << _totalNbWithdrawals
				<< std::endl; 
}

void	Account::displayStatus( void ) const{

	this->_displayTimestamp();
	std::cout 
		<< "index:"	<< this->_accountIndex 
		<< ";amount:"<< this->_amount
		<< ";deposits:" << this->_nbDeposits
		<< ";withdrawals:" << this->_nbWithdrawals
		<< std::endl;
		
		
}
