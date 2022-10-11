#include<iostream>
using namespace std;

template <class T1,class T2>
class test{
 T1 a;
 T2 b;
 public:
 void setdata(T1 x,T2 y){
    a=x;
    b=y;
 }
 void sum(){
    float s=(a+b)/2.0;
    cout<<"the sum is = "<<s<<endl;
    
     }
     void display(){
        sum();
        cout<<"the value of a is ="<<a<<endl;
        cout<<"the value of b is = "<<b<<endl; 
     }
};

int main(){
    int c;float d;
    test<int ,float > test1;
    // test<int ,float> test2;
    cout<<" Enter the two numbers "<<endl;
    cin>>c>>d;
    test1.setdata(c,d);
    // test2.setdata(c,d);
     test1.display();
}