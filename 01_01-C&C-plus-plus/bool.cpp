#include <iostream>
using namespace std;
int main()
{
    //c++ new feature bool type
    //this program compile on code:blocks or dev c++
    bool getresult;
    //bool type create true or false for expression
    int x,y,z;
    x=5;
    y=10;
    z=15;
    getresult=x>y;
    cout<<"Result of getresult = X>Y : "<<getresult<<endl;

    getresult=y<z;
    cout<<"Result of getresult = Y<Z : "<<getresult<<endl;

    getresult=x+z-y;
    cout<<"Result of getresult = X+Z-Y : "<<getresult<<endl;

    x=x+z-y;
    cout<<"Result of X=X+Z-Y : "<<x<<endl;
    getresult=true;
    cout<<"Result of Getresult = true : "<<getresult<<endl;

    getresult=false;
    cout<<"Result of Getresult = false : "<<getresult<<endl;

}
