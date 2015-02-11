//
//  Account.h
//  AccountProject
//
//  Created by Admin on 2/10/15.
//  Copyright (c) 2015 Admin. All rights reserved.
//

#ifndef __Account__
#define __Account__

#include <stdio.h>


#include <iostream>
using namespace std;

// Declarations of the class Account's attributes and methods
class Account
{
    // Private contains the class attributes, which are class variables
private:
    string myAccountNumber; // variable to store the account number
    string myCustomFirstName; // variable to store the name of the customer. This is a string type variable.
    string myCustomLastName;
    string myFirstName;
    string myLastName;
    double myInitialAccountBalance; // variable to store the account balance
    double myFinalAccountBalance; // variable to store the account balance after transfer of funds
    double myTransferAmount;
    
    // Public contains the class methods
public:
    Account(); // Declaration of the constructor of the class Account
    
    // Setter Methods
    void setCustomFirstName(istream& in);
    void setCustomLastName(istream& in);
    void setAccountNumber (string accountNumber);
    void setPrimaryAccountBalance(double newAccountBalance);
    void setTransferAmount(istream& in);
    void setFirstName (string firstName);
    void setLastName (string lastName);
    void calculateDecrementedAccountBalance();
    void calculateIncrementedAccountBalance(double transferAmount);
    
    // Getter Methods
    string getFirstName();
    string getLastName();
    double getAccountBalance();
    double getIncrementedAccountBalance();
    double getDecrementedAccountBalance();
    string getAccountNumber();
    double getTransferAmount();
    
};
#endif /* defined(__Account__) */
