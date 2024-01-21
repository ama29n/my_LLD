#include <bits/stdc++.h>

#include "file/File.h"
#include "directory/Directory.h"
#include "file_system/FileSystem.h"

using namespace std;

int main() {
    Directory *d1 = new Directory("user");
    Directory *d2 = new Directory("bin");
    Directory *d3 = new Directory("local");

    File *f1 = new File("logs.txt");
    File *f2 = new File("work.cpp");
    File *f3 = new File("cake.java");

    d1->add(d2);
    d1->add(d3);
    d1->add(f1);

    d3->add(f2);
    d3->add(f3);

    d1->ls();
}