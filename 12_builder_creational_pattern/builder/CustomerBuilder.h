#include <iostream>
#include <string>

#include "./Builder.h"
#include "../product/Customer.h"

using namespace std;

#ifndef CUSTOMERBUILDER_H_
#define CUSTOMERBUILDER_H_

class CustomerBuilder : public Builder {
private:
    Customer *customer;

public:

    CustomerBuilder() {
        customer = new Customer();
    }

    // methods to set values

    CustomerBuilder* setFirstName(string _firstName) {
        customer->firstName = _firstName;
        return this;
    }
    CustomerBuilder* setLastName(string _lastName) {
        customer->lastName = _lastName;
        return this;
    }
    CustomerBuilder* setMiddleName(string _middleName) {
        customer->middleName = _middleName;
        return this;
    }
    CustomerBuilder* setPrimaryEmail(string _primaryEmail) {
        customer->primaryEmail = _primaryEmail;
        return this;
    }
    CustomerBuilder* setSecondaryEmail(string _secondaryEmail) {
        customer->secondaryEmail = _secondaryEmail;
        return this;
    }
    CustomerBuilder* setPrimaryMobileNumber(string _primaryMobileNumber) {
        customer->primaryMobileNumber = _primaryMobileNumber;
        return this;
    }
    CustomerBuilder* setSecondaryMobileNumber(string _secondaryMobileNumber) {
        customer->secondaryMobileNumber = _secondaryMobileNumber;
        return this;
    }

    // method to get object of type Customer
    Customer* build() {
        return customer;
    }
};

#endif