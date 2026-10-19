#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <iostream>
#include <string>

class BankAccount {
	private:
		std::string accountNumber;
		std::string accountHolder;
		double balance;
		
	public:
		// Constructors
		BankAccount();
		BankAccount(std::string accNum,
		            std::string holder,
					double initialBalance);
	    
	    // Destructor
	     // Destructor
    ~BankAccount();

    // Transactions
    void deposit(double amount);
    bool withdraw(double amount);

    // Read-only functions
    double getBalance() const;
    void display() const;
};

#endif

