#include <iostream>

#include "../file_system/FileSystem.h"

using namespace std;

class File : public FileSystem {
private:
    string name;

public:

    // constructor
    File(string _name) {
        name = _name;
    }

    // method to print file name
    void ls(int space = 0) override {
        for(int i = 0; i < space; i++) {
            cout << "    ";
        }
        cout << "File: " << name << endl;
    }
};