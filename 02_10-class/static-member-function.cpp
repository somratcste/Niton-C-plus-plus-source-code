#include <iostream>
using namespace std;
class sample{
    public :
     static int totobj;
     static void printinfo()
     {
         cout<<endl<<"Totla obect is : "<<totobj<<endl;
     }
};

int sample::totobj=0;
int main()
{
    sample::totobj=0;
    sample::printinfo();
}
