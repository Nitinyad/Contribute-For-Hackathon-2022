#include <iostream>
#include <string>
using namespace std;

class shop
{
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void initcounter(void)
    {
        counter = 0;
    }
    void setprice(void);
    void dispalyprice(void);
};

void shop::setprice(void)
{
    cout << "Enter ID of your item no" << counter + 1 << endl;
    cin >> itemid[counter];
    cout << "Enter Price of your item" << endl;
    cin >> itemprice[counter];
    counter++;
}

void shop::dispalyprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "price of item with id" << itemid[i] << "is" << itemprice[i] << endl;
    }
}

int main()
{
    shop dukkan;
    dukkan.initcounter();
    dukkan.setprice();
    dukkan.setprice();
    dukkan.setprice();
    dukkan.dispalyprice();
}