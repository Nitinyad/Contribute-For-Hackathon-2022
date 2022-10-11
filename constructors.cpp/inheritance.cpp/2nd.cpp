#include <iostream>
using namespace std;

// single inheritance
class base
{
    int data1; // private
public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};
void base ::setdata(void)
{
    data1 = 10;
    data2 = 20;
}
int base::getdata1()
{
    return data1;
}

int base::getdata2()
{
    return data2;
}

class dervied : public base
{
    // class is being derived publicaly
    int data3;

public:
    void process();
    void display();
};

void dervied ::process()
{
    data3 = data2 * getdata1();
}
void dervied::display()
{
    cout << "value of data 1" << ' ' << getdata1() << endl;
    cout << "value of data 1" << ' ' << data2 << endl;
    cout << "value of data 1" << ' ' << data3 << endl;
}

int main()
{
    dervied der;
    der.setdata();
    der.process();
    der.display();
    return 0;
}