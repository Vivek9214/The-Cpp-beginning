#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void Shop::setPrice(void)
{
    cout << "Enter Id of your item no :" << endl;
    cin >> itemId[counter];
    cout << "Enter price of the item:";
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        /* code */
        cout << "The Price of item with Id " << itemId[i]<<endl;
        cout << "The Price of item: " << itemPrice[i];
    }
}
int main()
{
    Shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.displayPrice();
    return 0;
}