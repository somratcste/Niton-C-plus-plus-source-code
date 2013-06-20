#include <iostream>
using namespace std;
int main()
{
    int i;
    i=10;
    for(int j=0;j<i;j++)//creat variable in any place for need
    {
        int k;//this varible works only at this loop
        k=j*j;
        cout<<k<<endl;
    }
    double k;//this variable works in main function
    k=3.1416;
    cout<<endl<<k<<endl;
}
