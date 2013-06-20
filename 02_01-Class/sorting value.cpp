#include <iostream>
using namespace std;
//function to sort the array
void getsortedarray(int a[])
{
    int i,j,temp;
    for(i=0;i<5;i++)
        for(j=i+1;j<5;j++){
            if(a[i]>a[j]){
                 temp=a[i];
                 a[i]=a[j];
                 a[j]=temp;
            }
        }
    //print the sorted array
    for (i=0;i<5;i++)
       cout<<a[i]<<" ";
}
//function to get largest value
int getlargestvalue(int a[])
{
    int i,getlarge;
    getlarge=a[0];
    for(i=0;i<5;i++){
      if(a[i]>getlarge)
            getlarge=a[i];
    }
    return (getlarge);
}
int main()
{
    int i,a[5];
    cout<<"Enter five integer : "<<endl;
    for(i=0;i<5;i++)
       cin>>a[i];
    cout<<endl<<endl<<"Your entered integer are : "<<endl;
    for(i=0;i<5;i++)
       cout<<a[i]<<" ";
    cout<<endl<<"After sorting  : "<<endl;
    getsortedarray(a);
    cout<<endl<<endl<<"The largest value is : "<<getlargestvalue(a);
}
