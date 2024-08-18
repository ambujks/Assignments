#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class BankAccount 
{
private:
    string accountHolderName;
    string accountNumber;
    double balance;
public:

    BankAccount(string name, string accNumber, double initialBalance) 
    {
        accountHolderName = name;
        accountNumber = accNumber;
        balance = initialBalance;
    }

    void deposit(double amount) 
    {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }
    
    void withdraw(double amount) 
    {
        if (amount > 0 && amount <= balance) 
        {
            balance -= amount;
            cout << "Withdrawn: $" << amount << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient funds." << endl;
        }
    }
     
    void checkBalance() const 
    {
        cout << "Current Balance: $" << balance << endl;
    }
    
    void displayAccountDetails() const 
    {
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
    }
   
    void saveToFile() const 
    {
        ofstream file("accounts.txt", ios::app);
        if (file.is_open()) 
        {
            file << accountHolderName << "," << accountNumber << "," << balance << endl;
            file.close();
            cout << "Account details saved to file." << endl;
        } else 
        {
            cout << "Unable to open file." << endl;
        }
    }
};
int main() {
   
    BankAccount myAccount("John Doe", "123456789", 500.00);
   
    myAccount.displayAccountDetails();
    cout << endl;
    
    myAccount.deposit(150.00);
    myAccount.checkBalance();
    cout << endl;
    myAccount.withdraw(100.00);
    myAccount.checkBalance();
    cout << endl;
   
    myAccount.saveToFile();
    
    myAccount.displayAccountDetails();
    return 0;
}