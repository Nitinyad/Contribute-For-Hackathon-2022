#include<iostream>
using namespace std;

class shop {
 int id;
 float price;
 public:
 void setup(int a,float b){
    id=a;
    price=b;
 }
 void getdata(void){
    cout<<"code of this item is"<<id<<endl;
    cout<<"the price of id is"<<price<<endl;
 }

};
int main()
{  int size=3;
int p; float q;
//  int *ptr=size; 
    shop *ptr=new shop[size];
    shop *temp=ptr;
    int i;

for(int i=0;i<size;i++){
    cout<<"the id and price of item"<<i+1;
    cin>>p>>q;
    ptr->setup(p,q);
    ptr++;}
    for (i=0;i<size;i++){
     cout<<"item number"<<i+1<<endl;;
     temp->getdata();
     temp++;
    }
}
 

