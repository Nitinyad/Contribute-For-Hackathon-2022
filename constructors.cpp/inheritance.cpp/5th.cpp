#include<iostream>
using namespace std;

class student {
protected:
int roll_no;
public:
void set_rollno(int );
void get_rollno(void);



};


class exam :public student{
    protected: 
    float maths;
    float phy;
    public:
    void set_marks(float,float);
    void get_marks(void);
};



void exam :: set_marks(float p,float q){
    maths=p;
    phy=q;
}
void exam :: get_marks(){
    cout<<"maths marks is"<<' '<<maths<<endl;
    cout<<"your physics marks is "<<' '<<phy<<endl;
}

void  student ::  set_rollno(int r ){
    roll_no=r;
}
void  student :: get_rollno(void){
    cout<<"the roll no "<<' ' <<roll_no<<endl;;
}


class result : public exam{
 float percentage;
 public:
 void display(){
    get_rollno();
    get_marks();
    cout<<"your percentage is"<<(maths+phy)/2<<endl;

    }



};


int main(){
     result harry;
     harry.set_rollno(420);
     harry.set_marks(94.0,90.0);
     harry.display();


    return 0;
}