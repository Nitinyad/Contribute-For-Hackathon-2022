#include<iostream>
using namespace std;

/*
 syntax for intiailization list in consrtuctor
 constructor(arguement _list):intilization -section
 {
    assignment+other code;

 }

class test{
    int a,b;
    public:
    test(int i,int j) :a(i),b(j){
        constructor-body;
    }
}

*/
class test{
    int a,b;
    public:
    test(int i,int j) :a(i),b(j+a){
       cout<<" constructor executed"<<endl;
       cout<<" value of a is "<<a<<endl;
       cout<<" value of b is "<<b<<endl;

    }
};

int main(){
 test t(3,4);

}