#include<iostream>
using namespace std;

class animal{
    public:
    void display(){
       cout<<"Call from parent\n"; 
    }
};
class dog:public animal{
    public:
    void sound(){
        cout<<"Bark ";
    }
};
int main(){
    dog d;
    d.display();
    d.sound();
    return 0;
}