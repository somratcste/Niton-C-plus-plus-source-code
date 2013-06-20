#include <iostream>
using namespace std;
class sample{
   public :
      sample(){cout<<endl<<"message from constructor"<<endl;}
      ~sample(){cout<<endl<<"message from destructor"<<endl;}
};
void funa()
{
    cout<<endl<<"Creating object in funa()"<<endl;
    sample samp;//creating object in class of sample
}

int main()
{
    cout<<"Creating sample object in main"<<endl;
    sample samp;//constructor is calling here
    cout<<endl<<"Calling funa()."<<endl;
    funa();
    cout<<endl<<"funa is called"<<endl;
           //destructor is calling here.
}
