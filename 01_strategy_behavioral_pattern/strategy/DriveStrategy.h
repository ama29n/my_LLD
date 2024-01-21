
// "header guards" or "include guards." 
// These guards are used to prevent issues that can arise when a header file is included multiple times in source code file. 

// #ifndef MYFILE_H_      -> If not defined 
//                           In this case, it suggests that this is a guard for a header file named "myfile.h."

// #define MYFILE_H_      -> This line defines the identifier MYFILE_H_ if it hasn't been defined already.
//                           When the preprocessor encounters this line, it sets the identifier MYFILE_H_ to a non-zero 
//                           value (typically 1). This effectively marks the header file as "included."

// #endif                 -> If MYFILE_H_ was not defined previously, this #endif closes the #ifndef block, 
//                           and the code within the block is included in the source code.
//                           If MYFILE_H_ was defined previously, this #endif effectively excludes the code within 
//                           the block from being included again, preventing duplication and potential issues.

#ifndef DRIVESTRATEGY_H_
#define DRIVESTRATEGY_H_

class DriveStrategy {
public:
    virtual void drive() = 0;
};

#endif
