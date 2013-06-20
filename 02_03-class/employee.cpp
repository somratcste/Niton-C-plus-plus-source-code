#include <iostream>
using namespace std;
class employee{
     private :
         char *emp_name;
         int emp_joinyear;
         float emp_salary;
     public :
         employee(char* name,int year, float salary);
     private :
         int workedyear();
         void printinfo();
};
employee::employee(char* name,int year, float salary){
       emp_name=name;
       emp_joinyear=year;
       emp_salary=salary;
       printinfo();
}
int employee::workedyear(){
       int current_year=2013;
       int yeardifference;
       yeardifference=current_year-emp_joinyear;
       return (yeardifference);
}
void employee::printinfo(){
       cout<<"Name : "<<emp_name<<endl;
       cout<<"Joid date : "<<emp_joinyear<<endl;
       cout<<"Salary : "<<emp_salary<<endl;
       cout<<"worked : "<<workedyear()<<endl;
       cout<<endl<<endl<<endl<<endl;
}
int main()
{
    employee ram("ram",1997,12500);
    employee sam("sam",1987,75489);
    employee jadu("jadu",1978,48000);
    employee madhu("madhu",1983,87898);
}
