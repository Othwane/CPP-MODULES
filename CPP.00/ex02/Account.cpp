#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ){
    _accountIndex = _nbAccounts;
    _nbAccounts += 1;
    _amount = _amount + initial_deposit;
    _totalAmount = _totalAmount + initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created"<< std::endl;
}

Account::~Account(){
    _displayTimestamp();
    std::cout << "index:" << _accountIndex   << ";amount:" <<  _amount << ";closed" << std::endl;
    return ;
}

void	Account::displayStatus( void ) const{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount;
    std::cout << ";deposite:" << _nbDeposits << ";withdrawls:" << _nbWithdrawals << std::endl;
}

void timeV(tm tm, int x){
    if(x == 0)
        std::cout << tm.tm_year + 1900;
    else if (x == 1){
        if (tm.tm_mon < 10)
            std::cout << '0';
        std::cout << tm.tm_mon;
    }
    else if (x == 2){
        if (tm.tm_mday < 10)
            std::cout << '0';
        std::cout << tm.tm_mday << '_';
    }
    else if (x == 3){
        if (tm.tm_hour < 10)
            std::cout << '0';
        std::cout << tm.tm_hour;
    }
    else if (x == 4){
        if (tm.tm_min < 10)
            std::cout << '0';
        std::cout << tm.tm_min;
    }
    else if (x == 5){
        if (tm.tm_sec < 10)
            std::cout << '0';
        std::cout << tm.tm_sec;
    }
}

void	Account::_displayTimestamp( void ){
    time_t now = time(NULL);
    struct  tm ltime;

    ltime = *localtime(&now);

    std::cout << "[" ;
    for (int i = 0; i < 6; i++){
        timeV(ltime, i);
    }
    std::cout << "]";
}

void	Account::displayAccountsInfos( void ){
    _displayTimestamp();
    std::cout << getNbAccounts() << getTotalAmount() << getNbDeposits() << getNbWithdrawals() << std::endl;
}

int		Account::checkAmount( void ) const{
    return this->_amount;
}

void	Account::makeDeposit( int deposit ){
    _totalAmount += deposit;
    _nbDeposits += 1;
    _totalNbDeposits += 1;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposits:" << deposit;
    std::cout << ";amount:" << _amount + deposit << ";nb_deposits:" << _nbDeposits << std::endl;
    _amount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal ){
    if (withdrawal > _amount){
    _displayTimestamp();
        std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawls:refused" << std::endl;
        return false;
    }
    else{
        _nbWithdrawals += 1;
        _totalNbWithdrawals += 1;
        _totalAmount -= withdrawal;
        _displayTimestamp();
        std::cout << "index:" << _accountIndex << ";p_amount:" <<  _amount << ";withdrawls:" << withdrawal << ";amount:" << _amount - withdrawal;
        std::cout << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
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


