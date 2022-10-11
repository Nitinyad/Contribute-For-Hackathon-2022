#include<iostream>
using namespace std;

class Complex{
int a,b;
public:
void setNumber(int n1,int n2) { a=n1; b=n2; }
//sum complex is allowed to do anything with my private members
friend Complex sumComplex(Complex o1,Complex o2);

void printnumber(){
    cout<<"your number"<<a<<" + "<<b<<"i"<<endl;

}
};
Complex  sumComplex(Complex o1,Complex o2){
    Complex o3;
    o3.setNumber((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
int main(){
    Complex c1 ,c2,sum;
    c1.setNumber(3,4);
    c2.setNumber(2,5);
    c1.printnumber();
    c2.printnumber();
    sum=sumComplex(c1,c2);
    sum.printnumber();
    
}
// properties of friend functions
// 1. not in scope of class
// 2.since it is not in the scope of the class ,it cannot be called from the object of that class .
// c1.sumcomplex==invalid value
//3. can be invoked withot help of any object
//4. usuaally contains the objects as arguments to
// 5.it cannot acess the members directly by names and need objects name member to acess any number.