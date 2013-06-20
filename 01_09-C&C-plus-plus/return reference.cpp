#include <iostream>
using namespace std;
int& largevalue(int array[],int n)
{
    int i,currentindex=0;
    for(i=1;i<n;++i)
     if(array[currentindex]<array[i])
       currentindex=i;
    return array[currentindex];
}
int main()
{
    int iarray[5]={56,78,43,22,44};
    cout<<"Large element : "<<largevalue(iarray,5)<<endl;
}
