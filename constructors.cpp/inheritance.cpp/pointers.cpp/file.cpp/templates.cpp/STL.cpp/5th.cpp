#include<iostream>
#include<vector>
#include<string.h>
#define NAMESIZE 40
using namespace std;

class Emplyeemaster{
    private:
    char name[NAMESIZE];
    int id;
    public:
     Emplyeemaster(){
        strcpy(name,"");
        id=0;
     }
      Emplyeemaster(char name[NAMESIZE],int id):id(id)
      {
  
      }
};