#include<iostream>
using namespace std;
class Employee{
    int id;
    float sal;
   public:
   Employee(){

    cout<<"this is no argument constructor"<<endl;

    }
    Employee(int empId,float empSal){
        id= empId;
        sal=empSal;
        cout<<"this is parameterized constructor"<<endl; 
    }
    void display(){
        cout<<"Employee ID \n"<<id<<"Employee salary \n"<<sal<<endl;
    }
    void setSal(float newSal){
        sal= newSal;
    }
    float getSal()const{
        return sal;
    }
};
int main()
{
    Employee e1(101,30000);
    e1.display();
    e1.setSal(40000);
}
