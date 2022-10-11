#include<iostream>
#include<vector>
#include<list>
using namespace std;

int main(){
list<int> lis1;
list<int> lis2(7); //list of 7 size empty data
lis1.push_back(5);
lis1.push_back(7);
lis1.push_back(9);
lis1.push_back(11);
lis1.push_back(12);


list <int> :: iterator iter;
iter=lis1.begin();
cout<<*iter<<" ";
iter++;
cout<<*iter<<" ";




}