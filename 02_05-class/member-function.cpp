#include <iostream>
using namespace std;
class sample{
   public :
     void funa()
     {
         cout<<"This is function A"<<endl;
     }
     void funb()
     {
         cout<<endl<<"Funb is calling from function A"<<endl;
         funa();
     }
};
int main()
{
    sample samp;
    samp.funa();
    samp.funb();
}
