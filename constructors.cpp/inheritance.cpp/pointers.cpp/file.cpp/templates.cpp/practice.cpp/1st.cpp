#include<iostream>
using namespace std;

class employee{
    char name[30];
    int age;
    public:
    void getdata(void){
        cout<<"enter the name"<<endl;
        cin>>name;
        cout<<"Enter Age"<<endl;
        cin>>age;
    }
    void printdata(void){
        cout<<"name is"<<name<<endl;
        cout<<"age is "<<age<<endl;
    }
};




int main(){
     int size;
     cout<<"enter the size of array"<<endl;
     cin>>size;
 employee manager[size];
 cout<<"Enter Details"<<endl;
  for (int i=0;i<size;i++){
    cout<<"enter detalis for"<<i+1<<"customer"<<endl;
    manager[i].getdata();
  }
  for(int i=0;i<size;i++){
    cout<<"detalis output is"<<i+1<<"customer"<<endl;
    manager[i].printdata();
  }
}