#include <iostream>
#include <string>

#ifndef BUILDER_H_
#define BUILDER_H_

using namespace std;

class Builder {
public:
    virtual Builder* setFirstName(string firstName) = 0;
    virtual Builder* setLastName(string lastName) = 0;
    virtual Builder* setMiddleName(string middleName) = 0;
    virtual Builder* setPrimaryEmail(string primaryEmail) = 0;
    virtual Builder* setSecondaryEmail(string secondaryEmail) = 0;
    virtual Builder* setPrimaryMobileNumber(string primaryMobileNumber) = 0;
    virtual Builder* setSecondaryMobileNumber(string secondaryMobileNumber) = 0;
};

#endif