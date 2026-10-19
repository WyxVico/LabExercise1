#include <iostream>
#include "BankAccount.h"

// Receive an account by const reference
void printAccountSummary(const BankAccount& account) {
    std::cout << "\n[Summary via Const Reference Parameter]\n";
    account.display();
}

int main() {
    // Create an array containing three accounts
    BankAccount accounts[3] = {
        BankAccount("ACC-101", "Alice Smith", 500.0),
        BankAccount("ACC-102", "Bob Jones", 1200.50),
        BankAccount("ACC-103", "Charlie Brown", 250.75)
    };

    std::cout << "=== INITIAL ACCOUNT STATES ===\n";

    // Display each account
    for (int i = 0; i < 3; ++i) {
        accounts[i].display();
    }

    std::cout << "\n=== PERFORMING TRANSACTIONS ===\n";

    accounts[0].deposit(150.0);
    accounts[1].withdraw(300.0);

    printAccountSummary(accounts[0]);

    return 0;
}
