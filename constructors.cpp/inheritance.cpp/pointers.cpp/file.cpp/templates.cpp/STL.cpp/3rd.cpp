#include<iostream>
#include<vector>
#include<list>
#include<map>
#include<string>
using namespace std;
// map  is a associative array
int main(){
 map<string,int> marksMap;
 marksMap["harshit"]=99;
 marksMap["har"]=9;
 marksMap["varma"]=1;
 marksMap.insert({{"himani",198},{"dikhsa",197}});
 map<string,int> ::iterator iter;
 for (iter=marksMap.begin();iter!=marksMap.end();iter++)
 {
    cout<<(*iter).first<<" "<<(*iter).second<<"\n";
 }


    // cpp reference map

}