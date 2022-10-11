#include <iostream>
using namespace std;

// format declartion
class Complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumrealcomplex(Complex, Complex);
     int sumcompcomplex(Complex, Complex);
};

class Complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    // friend int calculator ::sumrealcomplex(Complex, Complex);
    //  friend int calculator ::sumcompcomplex(Complex, Complex);
     friend class calculator;
    void printnumber()
    {
        cout << "your number" << a << " + " << b << "i" << endl;
    }
};
int calculator::sumrealcomplex(Complex o1, Complex o2)
{

    return (o1.a + o2.a);
}
int calculator::sumcompcomplex(Complex o1, Complex o2)
{

    return (o1.b+ o2.b);
}
int main()
{
    Complex o1, o2;
    o1.setNumber(9, 10);
    o2.setNumber(2, 6);
    calculator calc;
    int res = calc.sumrealcomplex(o1, o2);
    cout << "the sum of real part of o1 and o2 is" << res << endl;
    int resc = calc.sumcompcomplex(o1, o2);
       cout << "the sum of real part of o1 and o2 is" << resc<< endl;


    return 0;
}