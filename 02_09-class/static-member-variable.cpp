#include <iostream>
using namespace std;
class sample
{
    static int totobj;
    public :
     sample (){totobj++;}
     ~sample(){totobj--;}
     static void printinfo(){cout<<endl<<"Totla object : "<<totobj<<endl;}

};

int sample::totobj=0;
int main()
{
    sample s1,s2,s3,s4,s5;
    sample::printinfo();
}
