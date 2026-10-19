
#include "BankAccount.h"
#include <iostream>

//Default constructor
BankAccount::BankAccount()
    : accountNumber("0000"),
	  accountHolder("N/A"),
	  balance(0.0){
}

//Parameterized constructou
BankAccount::BankAccount(std::string accNum,
                        std:: string holder,
						double initialBalance)
	: accountNumber(accNum),
	  accountHolder(holder){
	  	if (initialBalance >= 0.0){
	  	balance = initialBalance; 
	   }else{
	  	balance = 0.0;
	  }
}

// Destructor
BankAccount::~BankAccount() {
}

// Deposit money
void BankAccount::deposit(double amount) {
    if (amount > 0) {
        balance += amount;
        std::cout << "Deposited $" << amount
                  << " successfully.\n";
    } else {
        std::cout << "Invalid deposit amount!\n";
    }
}

// Withdraw money
bool BankAccount::withdraw(double amount){
	if (amount > 0 && balance >= amount){
		balance -= amount;
		std::cout << "Withdrew $" << amount
		          << " successfully.\n";
		return true;
		}else{
			std::cout << "Withdrawal failed: Insufficient funds or invalid amount.\n";
			return false;
		}
} 

//Return the current balance
double BankAccount::getBalance() const {
     return balance;
}

//Display account information
void BankAccount::display() const{
     std::cout<<"-----------------------\n";
	 std::cout << "Account Number : " << accountNumber << "\n";
    std::cout << "Account Holder : " << accountHolder << "\n";
    std::cout << "Current Balance: $" << balance << "\n";
    std::cout << "----------------------------\n";
	}
