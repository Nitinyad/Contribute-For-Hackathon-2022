#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:

    Complex(int, int); // Constructor declaration

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
Complex ::Complex(int x,int y) // ----> This is a parametrized constructor as it takes no parameters
{
    a = x;
    b = y;
    // cout<<"Hello world";
}



int main (){
    //implicit call
    Complex a(4,6);
    a.printNumber(); 
    //explicity call
    Complex b=Complex(5,7);
    b.printNumber(); 

    return 0;
}