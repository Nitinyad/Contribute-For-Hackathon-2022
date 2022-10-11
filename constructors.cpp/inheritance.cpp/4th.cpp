#include<iostream>
using namespace std;


class base{
   protected: //only for inheritance hai private par inheritance ke liye use kar sakte h 
   int a;
   private:
   int b;

};
// for a protected member
                         //public derivation   //private derivation   // protected derivatiom 
// 1.private members:      no in herite          no in herite           no in herite
// 2.protected members:     protected             private               protected
// 3.public members :    public                   private               protected

class derived : protected base {

};



int main(){
 base b;
 derived d;
//  cout<<d.a; // Will not work since a is protected in both base as well as derived class
    return 0;
}
