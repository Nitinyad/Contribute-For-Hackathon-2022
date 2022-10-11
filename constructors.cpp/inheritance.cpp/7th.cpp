#include <iostream>
using namespace std;

//create 2 classes 
//1.simple calculator
// 2.scientific calaulator 

class simplecalculator {
  protected:
  int a,b;
  public:
  void set_numbers(void) { 
cout<<"enter the value of a"<<' '<<endl;
cin>>a;
cout<<"enter the value of b"<<' '<<endl;
cin>>b;

  }
  int simple_cal(void );
  void display(void){
    cout<<"displaying"<<endl;
    cout<<"value of a"<<a<<endl;
    cout<<"value of a"<<b<<endl;

  }
};
 
 
int  simplecalculator :: simple_cal(){
  
    int c;
    int d;
  cout<<"enter the operation numbers you want to perform"<<' '<<endl;
  cout<<"enter 1 for addition"<<endl;
  cout<<"enter 2 for subtraction"<<endl;
  cout<<"enter 3 for multiplication"<<endl;
  cout<<"enter 4 for division"<<endl;

  cin>>c;
  switch(c){
    case 1: 
    cout<<"the addition is happening"<<endl;
    d=a+b;
    cout<<"the d is happening"<<d<<endl;
   
    break;
     case 2: 
    cout<<"the subtraction is happening"<<endl;
    d=a-b;
 cout<<"the subtraction is happening"<<d<<endl;
    break;
 case 3: 
    cout<<"the multiplication is happening"<<endl;
    d=a*b;
cout<<"the multiplication is happening"<<d<<endl;
    break;
     case 4: 
    cout<<"the divison is happening"<<endl;
    d=a/b;
 cout<<"the divison is happening"<<d<<endl;
    break;
    default:
    cout<<"nothing"<<endl;
    break;
     
  }
}
class scientificcalculator {
  protected:
  int c,d;
  public:
  void set_numbers(void) { 
cout<<"enter the value of a"<<' '<<endl;
cin>>c;
cout<<"enter the value of b"<<' '<<endl;
cin>>d;

  }
  int simple2_cal(void );
  void display(void){
    cout<<"displaying"<<endl;
    cout<<"value of a"<<c<<endl;
    cout<<"value of a"<<d<<endl;

  }
};

 

int main(){
    simplecalculator s1;
 s1.set_numbers() ;
      s1.simple_cal();
    //  s1.display();
      


    return 0;
}