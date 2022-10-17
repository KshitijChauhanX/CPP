#include<iostream>
#include<fstream>

/* The useful classes for working with files in C++
        1. fstreambase
        2. ifstream  -> derived from fstreambase
        3. ofstream  -> derived from fstreambase
*/

/* In order to work with files in C++, we need to open it. There are 2 main ways to open a file in C++
        1. using the constructor
        2. using the member function open() of the class 
*/

using namespace std;

int main(){

    //opening files using constructor and reading it

    //ofstream out("SampleFile60.txt"); //any name can be put in place of in and out

    //opening files using constructor and writing it

    //string boy="Super boy Kshitij";

    //out<<boy;

    ifstream in("SampleFile60.txt"); //we can choose any name for the constructor

    string boy2;

    //in>>boy2; //Put the content of the file into the given string. Only the characters before space will be put inside the string 

    //cout<<boy2<<endl; 

    getline(in, boy2); //we can put strings with spaces in between using getline.
    cout<<boy2<<endl;

    getline(in, boy2); //works with spaces but not with enter in between
    cout<<boy2<<endl;

    return 0;
}