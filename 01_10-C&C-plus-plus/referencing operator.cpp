#include <iostream>
using namespace std;
int main()
{
    int i;
    int& ref_i=i;
    cout<<"Address of i : "<<&i<<endl;
    cout<<"Address of ref_i : "<<&ref_i<<endl;
}
