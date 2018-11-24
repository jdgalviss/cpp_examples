/*A virtual function is a member function that you expect to be 
redefined in derived classes. When you refer to a derived class 
object using a pointer or a reference to the base class, you can 
call a virtual function for that object and execute the derived 
class's version of the function.
*/
#include "virtual_member_function.hpp"

int main()
{
    const string status = "salary"; //options: hourly or salary
    string level;
    
    //assign an manager to e1
    level = "salary";
    Employee *e1; //e1 is now a pointer to Employee object
    
    if(status != level)
    {
        e1 = new Employee(); //we define an hourly employee
    }
    else
    {
        e1 = new Manager(); //we define a salaried employee
    }  
    
    e1->setPayRate(12000.00);

    cout<<"e1 pay: $"<<e1->calcWeeklyPay();
    
    //assign an employee to e2
    level = "hourly";
    Employee *e2; //e1 is now a pointer to Employee object
    
    if(status != level)
    {
        e2 = new Employee(); //we define an hourly employee
    }
    else
    {
        e2 = new Manager(); //we define a salaried employee
    }  
    
    e2->setPayRate(10.00);
    cout<<"\ne2 pay: $"<<e2->calcWeeklyPay();
    
    return 0;
}