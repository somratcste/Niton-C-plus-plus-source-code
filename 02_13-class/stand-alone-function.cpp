#include <iostream>
using namespace std;
class B;
class A{
   int prva1;
   public :
   A(){prva1=0;}
   void getprva1(int x){prva1=x;}
   friend void showprvvalue(A a,B b);//declared as a friend function

};
class B{
   int prvb1;
   public :
   B(){prvb1=0;}
   void getprvb1(int x){prvb1=x;}
   friend void showprvvalue(A a, B b);
};
void showprvvalue(A a ,B b)
{
    cout<<endl<<"value of prva1 is : "<<a.prva1<<endl;
    cout<<endl<<"value of prvb1 is : "<<b.prvb1<<endl;
}
int main()
{
    A a1;
    B b1;
    a1.getprva1(50);
    b1.getprvb1(702);
    showprvvalue(a1,b1);
}
