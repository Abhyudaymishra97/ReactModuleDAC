/*
    C. Basic C++ Object-Oriented Programming :

        C2. Write a C++ program to implement a class called BankAccount that has private member variables for account number and balance. Include member functions to deposit and withdraw money from the account.
*/

#include <iostream>

class BankAccount 
{
    /*Private Members*/
    private:
    int accountNumber;
    double balance;

    /*Public Members*/
    public:
    BankAccount(int accNum, double initialBalance) {
        accountNumber = accNum;
        balance = initialBalance;
    }

    //Deposite Func.
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited $" << amount << " successfully. New balance: $" << balance << std::endl;
        } else {
            std::cout << "Invalid deposit amount. Please enter a positive value." << std::endl;
        }
    }

    //Withdraw Func.
    void withdraw(double amount) 
    {
        if (amount > 0 && amount <= balance) 
        {
            balance -= amount;
            std::cout << "Withdrawn $" << amount << " successfully. New balance: $" << balance << std::endl;
        } 
        else if (amount > balance) 
        {
            std::cout << "Insufficient funds. Cannot withdraw $" << amount << "." << std::endl;
        } 
        else 
        {
            std::cout << "Invalid withdrawal amount. Please enter a positive value." << std::endl;
        }
    }

    double getBalance() const {
        return balance;
    }
};

int main() {
    BankAccount account1(123456, 1000.0);

    account1.deposit(500.0);
    account1.withdraw(200.0);
    account1.withdraw(1500.0);

    std::cout << "Final balance: $" << account1.getBalance() << std::endl;

    return 0;
}

/*  OUTPUT

    Deposited $500 successfully. New balance: $1500
    Withdrawn $200 successfully. New balance: $1300
    Insufficient funds. Cannot withdraw $1500.     
    Final balance: $1300
*/