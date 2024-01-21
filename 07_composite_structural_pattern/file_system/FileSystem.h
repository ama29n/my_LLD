#include <string>

#ifndef FILESYSTEM_H_
#define FILESYSTEM_H_

using namespace std;

class FileSystem {
public:

    // method to print file/directory name
    virtual void ls(int) = 0;
};

#endif