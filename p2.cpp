#include <iostream>
using namespace std;
class student{
    public:
     string name;//instance variable
     int age;
     student(string n, int a)//student() is a default constructor
     {
        //used when local variable and instance variable have same name (this->)
         this->name = n;
         this->age = a;
     }
     void display(){
         cout<<"Name: "<<name<<", Age: "<<age<<endl;
     }    
};
int main() {
    student s("Alice", 21);
    s.display();
    return 0;
}