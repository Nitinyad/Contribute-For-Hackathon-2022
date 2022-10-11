#include<iostream>
#include<fstream>
using namespace std;

/*
the useful classes for working with files in c++ are:
1.fstreambase
2.ifstream->derived from fstreambase
3.ofstream->derived from f streambase

in order to work with files 
there are two ways to open file 
1.using constructor
2.using the members function open() of the class

*/


int main(){
    // string st = "Harry bhai";
    // // Opening files using constructor and writing it
    // ofstream out("sample60.txt"); // Write operation
    // out<<st;
    string st2;
    // Opening files using constructor and reading it
    ifstream in("sample60.txt"); // Read operation
    in>>st2;
    getline(in, st2);  
    cout<<st2;

    return 0;
}

