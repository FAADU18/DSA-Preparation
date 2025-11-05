#include<iostream>
using namespace std;
class student{
    public:
      string name;
      student(string n){
        cout<<"Constructor  called for"<<name<<endl;
      }
     ~student(){
        cout<<"Distructor called for "<<name<<endl;
     }
};
int main(){
    student s1("Anup");
    cout<<"Inside main Function "<<endl;
    return 0;
}