#include <iostream>
using namespace std;
class a{
    private :
       int x,y;//private variable is defined here
    public :
       void addxy();
};
void a::addxy()
{
    x=y=5;//access private variable by using public function
    cout<<"x+y = "<<x+y<<endl;
}

int main()
{
    a obj;
    obj.addxy();
}
