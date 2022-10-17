#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream out;
    out.open("SampleFile62.txt");
    out<<"I am the greatest.\n";
    out<<"Pirate King.";
    out.close();

    ifstream in;
    string st,st2;
    in.open("SampleFile62.txt");
    in>>st>>st2;
    cout<<st<<st2;

    while(in.eof()==0){
        getline(in,st);
        cout<<st<<endl;
    }
    in.close();
    return 0;
}