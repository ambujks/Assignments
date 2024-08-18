/*
Write a C++ program that incorporates the concept you’ve learned in recent classes. You may take inspiration from the C++ Bank Management System project covered on Project Day.

Note: Specify any new classes, methods, or features you implement. Use comments to explain the purpose and functionality of your additions.
*/
#include<iostream>
#include<string>
#include<vector>
using namespace std;
class BankAccount 
{
    private:
        string accountHolderName;
        int accountNumber;
        double balance;

    public:        
        BankAccount(string name, int accNum, double initialBalance = 0) 
        {
            accountHolderName = name;
            accountNumber = accNum;
            balance = initialBalance;
        }

        void deposit(double amount) 
        {
            if (amount > 0) 
            {
                balance += amount;
                cout << "Deposited: " << amount << ". New Balance: " << balance << endl;
            } else 
            {
                cout << "Invalid deposit amount!" << endl;
            }
        }

        void withdraw(double amount) {
            if (amount > 0 && amount <= balance) {
                balance -= amount;
                cout << "Withdrawn: " << amount << ". Remaining Balance: " << balance << endl;
            } else {
                cout << "Insufficient balance or invalid withdrawal amount!" << endl;
            }
        }

        void displayInfo() {
            cout << "Account Holder: " << accountHolderName << endl;
            cout << "Account Number: " << accountNumber << endl;
            cout << "Balance: " << balance << endl;
        }
};


class Bank 
{
    private:
        vector<BankAccount> accounts;  
    public:
        void createAccount(string name, int accNum, double initialDeposit = 0) 
        {
            BankAccount newAccount(name, accNum, initialDeposit);
            accounts.push_back(newAccount);
            cout << "Account created successfully for " << name << endl;
        }

        BankAccount* findAccount(int accNum) 
        {
            for (auto &acc : accounts)  
            {
                if (accNum == acc.accountNumber) 
                {
                    return &acc;
                }
            }
            return nullptr;  
        }

        void depositToAccount(int accNum, double amount) 
        {
            BankAccount* account = findAccount(accNum);
            if (account) 
            {
                account->deposit(amount);
            } else 
            {
                cout << "Account not found!" << endl;
            }
        }

        void withdrawFromAccount(int accNum, double amount) 
        {
            BankAccount* account = findAccount(accNum);
            if (account) 
            {
                account->withdraw(amount);
            } else 
            {
                cout << "Account not found!" << endl;
            }
        }

        void displayAccountInfo(int accNum) 
        {
            BankAccount* account = findAccount(accNum);
            if (account) 
            {
                account->displayInfo();
            } else 
            {
                cout << "Account not found!" << endl;
            }
        }
};

int main() 
{
    Bank myBank;

    myBank.createAccount("Alice", 101, 500.00);
    myBank.createAccount("Bob", 102, 1000.00);

    myBank.depositToAccount(101, 200.00);

    myBank.withdrawFromAccount(102, 150.00);

    myBank.displayAccountInfo(101);
    myBank.displayAccountInfo(102);

    return 0;
}
