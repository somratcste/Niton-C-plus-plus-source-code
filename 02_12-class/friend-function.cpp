#include <iostream>
using namespace std;
//forward reference
class A;
//declare class b;
class B{
   int prvb1;
   public :
   B(){prvb1=0;}
   void getprvb1(int x){prvb1=x;}
   void showprvb1(A a);
};

//declare class a
class A{
   int prva1;
   public :
   A(){prva1=0;}
   void getprva1(int x){prva1=x;}
   friend void B::showprvb1(A a);//creating friend function
};

void B::showprvb1(A a)
{
    cout<<endl<<"value from a1 is : "<<a.prva1<<endl;
    cout<<endl<<"value from b1 is : "<<prvb1<<endl;
}
int main()
{
    A a1;
    B b1;
    a1.getprva1(30);
    b1.getprvb1(502);
    b1.showprvb1(a1);
}
