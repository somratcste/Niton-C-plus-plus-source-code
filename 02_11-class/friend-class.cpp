#include <iostream>
using namespace std;
class a{
   int prva1;
   public :
   a(){prva1=0;}
   void getprva1(int x){prva1=x;}
   friend class b;//declare class  b as a friend
   //as a result we can use all the private variable or function
   //by the class b
};

class b{
     int prvb1;
     public :
      b(){prvb1=0;}
      void getprvb1(a &x){//getting reference of object a1
      prvb1=x.prva1+25;
      x.prva1=50;
      }
      void showprvb1(a x){
       cout<<endl<<"value of prva1 is : "<<x.prva1<<endl;
       cout<<endl<<"value of prvb1 is : "<<prvb1<<endl;
      }
};
int main()
{
    a p;
    b q;//creating object
    p.getprva1(30);
    q.getprvb1(p);
    q.showprvb1(p);
}
