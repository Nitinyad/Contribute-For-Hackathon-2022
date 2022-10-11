#include <iostream>
using namespace std;


class base1{
public:
void greet(){
    cout<<"How are you"<<endl;
}

};




class base2{
public:
void greet(){
    cout<<"fuck you"<<endl;
}
};

class derived: public base1 ,public base2
{int a;
public:
void greet(){
    base1::greet();

}


};

class b  {
   public:
   void say(){
    cout<<"hello world"<<endl;
   }
};
class d:public b  {
   public:
   void say(){
    cout<<"hello country"<<endl;
   }
};





int main() {
    //ambiguity 1
// base1 b1;
// base2 b2;
// b1.greet();
// b2.greet();
// derived der;
// der.greet();
// //ambiguity 2
b B;
B.say();
d D;
D.say();




return 0;

}