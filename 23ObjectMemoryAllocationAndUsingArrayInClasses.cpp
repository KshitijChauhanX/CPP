#include <iostream>
using namespace std;

// Member functions have common memory for all the objects
// Data members of different objects have different memory

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter()
    {
        counter = 0;
    }
    void setPrice()
    {
        cout << "Enter ID of item: ";
        cin >> itemId[counter];
        cout << "Enter Price of item: ";
        cin >> itemPrice[counter];
        counter++;
    }
    void displayPrice()
    {
        for (int i = 0; i < counter; i++)
        {
            cout << "Price of item with ID: " << itemId[i] << " is " << itemPrice[i];
        }
    }
};

int main()
{
    Shop dukaan;
    dukaan.setPrice();
    return 0;
}