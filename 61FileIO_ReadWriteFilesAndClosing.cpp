#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ofstream data_out("SampleFile61.txt"); //connecting our file with data_out stream

    //Creating a string variable to accept input and filling it into the file
    string name;
    cout<<"Enter your Name: ";
    cin>>name;

    data_out<<"My name is "+name; //writing string into the file. Takes values before space.

    data_out.close(); //cloases the stream and the link between file and program breaks

    ifstream data_in("SampleFile61.txt");
    string content; 
    data_in>>content;
    cout<<content; //prints values before space or enter in file

    data_in.close();

    return 0;
}