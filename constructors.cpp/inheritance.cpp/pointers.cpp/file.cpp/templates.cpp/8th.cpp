#include <iostream>
using namespace std;

template <class T>

void display(T x)
{
    cout << "display the function 1 " << x << endl;
}
void display(int x)
{
    cout << "display the function 2" << x << endl;
}

int main()
{
    display("whbjasdbs");
    display(100);
    return 0;
}
