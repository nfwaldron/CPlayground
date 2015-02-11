#include <iostream>
#include "Account.h"
#include <iomanip>
#include <cmath>
using namespace std;

int main ()
{
    double transferAmount;
    
    
    Account account1;
    Account account2;
    
    // Set the Name, Account Number, and Account Balance of the object account1
    account1.setFirstName("John");
    account1.setLastName("Wilson");
    account1.setAccountNumber("100-01");
    account1.setPrimaryAccountBalance(100.00);
    
    // Prompt user to enter the amount of money the want to be transferred from their account
    account1.setTransferAmount(cin);
    
    // Calculate the Account Balance of the object account1 after the money transfer
    account1.calculateDecrementedAccountBalance();
    
    // Get the amount of money transferred from the object and store in a variable in the main program
    // so that the value can be utilized as in input in class methods from other objects.
    transferAmount = account1.getTransferAmount();
    
    // Set the Name, Account Number, and Account Balance of the object account2
    account2.setFirstName("Steve");
    account2.setLastName("Wilson");
    account2.setAccountNumber("2002-2");
    account2.setPrimaryAccountBalance(200.00);
    
    // Calculate the incremented account balance of account2
    account2.calculateIncrementedAccountBalance(transferAmount);
    
    // Display a summary of the transaction
    cout << endl;
    cout << "SUMMARY OF TRANSACTION"<<endl;
    cout << "-----------------------" <<endl;
    cout << "Lender Information" <<endl;
    cout << "Account: " << account1.getAccountNumber() <<endl;
    cout << "Account Holder Name: " <<account1.getFirstName() <<endl;
    cout << "Initial Account Balance: " <<account1.getAccountBalance() <<endl;
    cout << "Transfer Amount: " << transferAmount << endl;
    cout << "Current Account Balance: " <<account1.getDecrementedAccountBalance() <<endl;
    cout << "------------------------" <<endl;
    cout << "Recipient Information" <<endl;
    cout << "Account: " << account2.getAccountNumber() <<endl;
    cout << "Account Holder Name: " <<account2.getFirstName() <<endl;
    cout << "Initial Account Balance: " <<account2.getAccountBalance() <<endl;
    cout << "Transfer Amount: " << transferAmount << endl;
    cout << "Current Account Balance: " <<account2.getIncrementedAccountBalance() <<endl;
}