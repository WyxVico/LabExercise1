# Lab Exercise 1: Bank Account ADT

C++ implementation of the BankAccount abstract data type for DSA Lab Exercise 1.

## Files
- `BankAccount.h`: class declaration and public interface.
- `BankAccount.cpp`: constructors, deposit, withdrawal, balance query and display.
- `main.cpp`: demonstration using an array of three accounts and a const reference parameter.
- `LabExercise1.dev`: Dev-C++ project file.

## Build and run
Open `LabExercise1.dev` in Dev-C++ and compile and run the project.

Alternatively, with g++:

```sh
g++ -Wall -Wextra -pedantic main.cpp BankAccount.cpp -o BankAccount
```

Run `./BankAccount` on Linux/macOS or `.\BankAccount.exe` on Windows.

## Expected behavior
The program displays three accounts, deposits $150 into Alice's account, withdraws $300 from Bob's account, and displays Alice's updated balance of $650.

The implementation rejects non-positive deposits, invalid withdrawals and withdrawals exceeding the available balance. Negative initial balances become zero.