#include<iostream>
using namespace std;

class class_2;
class class_1{
 int value1;
 public:
 void setdata(int data1){
    value1=data1;
 }
 void display(){
    cout<<"for 1"<<value1<<endl;
 }
 friend void exchange(class_1 &,class_2 &);

};

class class_2{
 int value2;
 public:
 void setdata(int data2){
    value2=data2;
 }
 void display(){
    cout<<"for 2"<<value2<<endl;
 }
  friend void exchange(class_1 &,class_2 &);
};

void exchange(class_1 & x,class_2 & y){
    int temp=x.value1;
    x.value1=y.value2;
    y.value2=temp;

}

int main(){
    class_1 c1;
    class_2 c2;
    c1.setdata(100);
    c2.setdata(200);

    cout<<"displaying the values"<<endl;

    c1.display();
    c2.display();

    exchange(c1,c2);
      cout<<"exchanging the values"<<endl;
    c1.display();
    c2.display();

}