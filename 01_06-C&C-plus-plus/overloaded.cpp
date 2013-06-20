#include <iostream>
using namespace std;
int addxy(int x, int y)
{
    return x+y;
}
float addxy(float x,float y)
{
    return x+y;
}
double addxy(double x, double y)
{
    return x+y;
}
int main()
{
    cout<<"Integer x+y : "<<addxy(5,5)<<endl;
    cout<<"Float x+y : "<<addxy(5.899,4.589)<<endl;;
    cout<<"Double x+y : "<<addxy(90.488595,8.958584);
}
