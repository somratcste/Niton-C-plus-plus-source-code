#include <iostream>
using namespace std;
class sortedlargest{
       private :
         int i,j,temp,getlarge,a[5];
       public :
       //class constructor
       sortedlargest(){
          cout<<"Enter five integer : "<<endl;
          for(int i=0;i<5;i++)
              cin>>a[i];
              getsortedarray();
              getlargestvalue();

       }
       private :
       //function to sort the array
       void getsortedarray(){
            for(i=0;i<5;i++)
                for(j=i+1;j<5;j++){
                   if(a[i]>a[j]){
                       temp=a[i];
                       a[i]=a[j];
                       a[j]=temp;
                   }
                }
        //print the sorted array
        cout<<endl<<"After sorting : "<<endl;
        for(i=0;i<5;i++)
        cout<<a[i]<<" ";
       }
       //function to get the largest value
       void getlargestvalue(){
       getlarge=a[0];
       for(i=0;i<5;i++){
          if(a[i]>getlarge)
             getlarge=a[i];
       }
       cout<<endl<<"The largest value is : "<<endl<<getlarge;
       }

};
int main()
{
    sortedlargest SL;//constructor function is call in this
    //destructor function is call
}
