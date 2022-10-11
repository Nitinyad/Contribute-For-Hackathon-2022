#include<iostream>
using namespace std;
//this pointer

class A{
int a;
public:
  void setdata(int a)
{
 this->a=a;

}
void getdata(){
    cout<<"the value of a is "<<' '<<a<<endl;
}
};




int main(){
 A a;
 a.setdata(4);
 a.getdata();
 
 }