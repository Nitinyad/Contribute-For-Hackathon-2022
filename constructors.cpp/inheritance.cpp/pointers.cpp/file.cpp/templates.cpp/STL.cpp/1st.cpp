#include <iostream>
#include <vector>
using namespace std;

/*
Introduction of STL in C++

*/
template <class T>
void display(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        // cout<<v.at(i)<<" ";
    }
    cout << endl;
}
int main()
{    int size=5; 
     vector<int> vec1; //zero element interger vector
vector<char> vec2(4); // 4-element character vector 
vector<char> vec3(vec2);  //4-element char vector from vec2
vector<int> vec4(4,3); //6 element of 3 vectors
//  display(vec1);
//  vec2.push_back('6');
//   display(vec2);
//   display(vec3);
  display(vec4);
 
   
    // cout << "Enter the size of vector" << endl;
    // cin >> size;

    // for (int i = 0; i < size; i++)
    // {
    //     int element;
    //     cout << "Enter a element to add to this vector" << endl;
    //     cin >> element;
    //     vec1.push_back(element);
    // }
    // vec1.pop_back();
    // display(vec1);
    // vector <int>:: iterator iter=vec1.end();
// vec1.insert(iter,100,566);
    display(vec1);

}
