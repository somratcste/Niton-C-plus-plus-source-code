#include <iostream>
using namespace std;
int x;
void changex()
{
    x=20;
}
int main()
{
    int x;
    x=10;
    changex();
    cout<<"Value of x is : "<<x<<endl;
}
