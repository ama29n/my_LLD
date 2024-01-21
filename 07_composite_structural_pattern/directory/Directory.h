#include <bits/stdc++.h>

#include "../file_system/FileSystem.h"

using namespace std;

class Directory : public FileSystem {
private:
    vector<FileSystem *> list;
    string name;

public:

    // constructor
    Directory(string _name) {
        name = _name;
    }

    // method to print directory name and contituent elements
    void ls(int space = 0) override {
        for(int i = 0; i < space; i++) {
            cout << "    ";
        }
        cout << "Directory: " << name << endl;
        for(auto it : list) {
            it->ls(space + 1);
        }
    }

    // method to add file/directory to directory
    void add(FileSystem *element) {
        list.push_back(element);
    }
};