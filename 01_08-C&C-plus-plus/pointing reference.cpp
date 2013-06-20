#include <iostream>
using namespace std;
void showvalue(int &x,int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main()
{
    int p,q;
    p=7;
    q=5;
    showvalue(p,q);
    cout<<"p : "<<p<<endl<<"q : "<<q<<endl;
}
