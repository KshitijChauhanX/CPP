#include <iostream>
using namespace std;
class binary
{
    string s;
    void chk_bin(void); // this member function can only be accessed by the member functions of this class 

public:
    void read(void);

    void onescomp(void);
    void display(void);
};
void binary::read(void)
{
    cout << "Enter Binary Number: ";
    cin >> s;
}
void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); ++i)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect Binary Format" << endl;
            exit(0);
        }
    }
}
void binary::onescomp(void)
{
    for (int i = 0; i < s.length(); ++i)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary::display(void)
{
    chk_bin(); // Nesting of member functions (no need to use dot operator to access it inside main(), works when display is called in the program)
    cout << "Your Binary: " << endl;
    for (int i = 0; i < s.length(); ++i)
    {
        cout << s.at(i);
    }
    cout << "\n";
}
int main()
{
    binary num;
    num.read();
    num.display(); // calls chk_bin automatically as it has been nessted inside this member function (hiding implementation details)
    num.onescomp();
    num.display();
}