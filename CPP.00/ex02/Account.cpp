#include "Account.hpp"
#include <iostream>
#include <ctime>

Account::Account( int initial_deposit ){
    this->_accountIndex = _nbAccounts;
    this->_nbAccounts += 1;
    this->_amount = _amount + initial_deposit;
    this->_totalAmount = _totalAmount + initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;

    std::cout << "[] " << "index:" << _accountIndex << ";amount:" << _amount << ";created"<< std::endl;
}

Account::~Account(){
    std::cout << "[] " << "index:" << _accountIndex   << ";amount:" <<  _amount << ";closed" << std::endl;
    return ;
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void	Account::displayStatus( void ) const{
    std::cout << "[---] " << "index:" << _accountIndex << ";amount:" << _amount << ";deposite:" << _nbDeposits << ";withdrawls:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void ){
}

void	Account::displayAccountsInfos( void ){
    std::cout << "[....] " << getNbAccounts() << getTotalAmount() << getNbDeposits() << getNbWithdrawals() << std::endl;
}

int		Account::checkAmount( void ) const{
    return 0;
}

void	Account::makeDeposit( int deposit ){
    _totalAmount += deposit;
    _nbDeposits += 1;
    _totalNbDeposits += 1;
    std::cout << "[d] " << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposits:" << deposit << ";amount:" << _amount + deposit << ";nb_deposits:" << _nbDeposits << std::endl;
    _amount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal ){
    if (withdrawal > _amount){
        std::cout << "[w] " << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawls:refused" << std::endl;
        return false;
    }
    else{
        _nbWithdrawals += 1;
        _totalNbWithdrawals += 1;
        _totalAmount -= withdrawal;
        std::cout << "[w] " << "index:" << _accountIndex << ";p_amount:" <<  _amount << ";withdrawls:" << withdrawal << ";amount:" << _amount - withdrawal << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
        _amount -= withdrawal;
        return true;
    }
    return 0;
}


int	Account::getNbAccounts( void ){
    std::cout << "accounts:";
    return _nbAccounts;
}

int	Account::getTotalAmount( void ){
    std::cout << ";total:";
    return _totalAmount;
}

int	Account::getNbDeposits( void ){
    std::cout<<";deposits:";
    return _totalNbDeposits;
} 

int	Account::getNbWithdrawals( void ){
    std::cout<<";withdrawals:";
    return _totalNbWithdrawals;
}


