//
//  Account.cpp
//  AccountProject
//
//  Created by Admin on 2/10/15.
//  Copyright (c) 2015 Admin. All rights reserved.
//

#include "Account.h"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Setter Definitions

Account::Account() // Constructor for class Account
{
    myInitialAccountBalance = 0.0;
    myFinalAccountBalance = 0.0;
    myAccountNumber = "01234567";
    myCustomFirstName = "FistName";
    myCustomLastName = "LastName";
    myTransferAmount = 0.0;
}

void Account::setFirstName (string firstName)
{
    if(firstName == "")
    {
        myFirstName  = "Unknown";
    }
    else
    {
        myFirstName = firstName;
    }
}

void Account::setLastName (string lastName)
{
    if(lastName == "")
    {
        myLastName  = "Unknown";
    }
    else
    {
        myLastName = lastName;
    }
}

void Account::setCustomFirstName(istream& in)
{
    string newMyFirstName;
    
    // Prompt and read inputs
    cout << "Please enter your first name: " << endl;
    in >> newMyFirstName;
    
    // Update attribute
    myCustomFirstName = newMyFirstName;
}


void Account::setCustomLastName(istream& in)
{
    string newMyLastName;
    
    // Prompt and read inputs
    cout << "Please enter your last name: " << endl;
    in >> newMyLastName;
    
    // Update attribute
    myCustomLastName = newMyLastName;
}

void Account::setAccountNumber(string accountNumber)
{
    if(accountNumber == "")
    {
        myAccountNumber  = "Unknown";
    }
    else
    {
        myAccountNumber = accountNumber;
    }
    
}

void Account::setPrimaryAccountBalance(double newAccountBalance)
{
    if (newAccountBalance < 0.0)
    {
        myInitialAccountBalance = 0.0;
    }
    else if (newAccountBalance > 0.0)
    {
        myInitialAccountBalance = newAccountBalance;
    }
}

void Account::setTransferAmount(istream& in)
{
    const double TRANSFER_FEE = 2.00;
    double newTransferAmount;
    
    cout << setiosflags(ios::fixed) << setiosflags(ios::showpoint) << setprecision(2);
    
    cout << "Welcome to AccountTrans!\nThis money transfer system charges $2.00 service cost" <<endl;
    
    // Validate that account balance is greater than $0.00
    if (myInitialAccountBalance < 2.0)
    {
        cerr << "Your account balance is less than $2.00. You cannot transfer any funds" << endl;
    }
    
    // Prompt user to enter the amount of money they want to transfer
    cout << "Please enter the amount of money you would like to transfer: " <<endl;
    in >> newTransferAmount;
    
    // The amount to transfer must be positive. Change it to positive if needed.
    newTransferAmount = fabs(newTransferAmount);
    
    // Ensure that transfer is cancelled if customer does not have enough money.
    while (myInitialAccountBalance < newTransferAmount + TRANSFER_FEE)
    {
        cout << "The amount of money you have requested to transfer, $" << newTransferAmount << "\n" << "is more than your available balance and the transfer fee." <<endl;
        cout << "Please request a lesser amount of money to transfer." <<endl;
        cout << "Please enter the amount of money you would like to transfer: " <<endl;
        in >> newTransferAmount;
        
    }
    
    // Update the value
    myTransferAmount = newTransferAmount;
    
    cout << "You have elected to transfer $" << myTransferAmount << ". This will transfer will cost a total of $" << newTransferAmount + TRANSFER_FEE <<endl;
    
    if (myInitialAccountBalance >= newTransferAmount + TRANSFER_FEE)
    {
        cout<<"Transfer Successful?: True"<<endl;
        ;
    }
    else
    {
        cout<<"Transfer Successful?: False"<<endl;;
    }
}

void Account::calculateDecrementedAccountBalance()
{
    myFinalAccountBalance = myInitialAccountBalance - myTransferAmount;
}

void Account::calculateIncrementedAccountBalance(double transferAmount)
{
    myTransferAmount = transferAmount;
    myFinalAccountBalance = myInitialAccountBalance + myTransferAmount;
}

// Getter Definitions

string Account::getFirstName()
{
    return myFirstName;
}

string Account::getLastName()
{
    return myLastName;
}

string Account::getAccountNumber()
{
    return myAccountNumber;
}

double Account::getTransferAmount()
{
    return myTransferAmount;
}

double Account::getAccountBalance()
{
    return myInitialAccountBalance;
}

double Account::getIncrementedAccountBalance()
{
    return myFinalAccountBalance;
}

double Account::getDecrementedAccountBalance()
{
    return myFinalAccountBalance;
}
