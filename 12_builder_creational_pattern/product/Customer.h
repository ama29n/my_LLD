#include <iostream>
#include <string>

using namespace std;

#ifndef CUSTOMER_H_
#define CUSTOMER_H_

class Customer {
public:
    string firstName;
    string lastName;
    string middleName;
    string primaryEmail;
    string secondaryEmail;
    string primaryMobileNumber;
    string secondaryMobileNumber;

    Customer() {
        firstName = "undefined";
        lastName = "undefined";
        middleName = "undefined";
        primaryEmail = "undefined";
        secondaryEmail = "undefined";
        primaryMobileNumber = "undefined";
        secondaryMobileNumber = "undefined";
    }

    // method to print the details
    void print() {
        cout << "First Name: " + firstName + "\n" 
            + "Middle Name: " + middleName + "\n" 
            + "Last Name: " + lastName + "\n" 
            + "Primary Email: " + primaryEmail + "\n" 
            + "Secondary Email: " + secondaryEmail + "\n" 
            + "Primary Mobile Number: " + primaryMobileNumber + "\n" 
            + "Secondary Mobile Number: " + secondaryMobileNumber + "\n";
    }
};

#endif