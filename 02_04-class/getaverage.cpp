#include <iostream>
using namespace std;

class getaverage{
      public :
        char *id;
        float course[5];
        float calcavg()
        {
            float avg=0.00;
            for(int i=0;i<5;i++)
            avg+=course[i];
            return (avg/5);
        }
};

int main()
{
    getaverage somrat;
    cout<<"Enter id : "<<endl;
    cin>>somrat.id;
    cout<<endl<<"Enter 5 score : "<<endl;
    for(int i=0;i<5;i++)
    cin>>somrat.course[i];
    cout<<"Average for : "<<somrat.id<<" is "<<somrat.calcavg();
}
