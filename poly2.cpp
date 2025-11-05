#include<iostream>
using namespace std;
class parent{
    public:
    void display(){
        cout<<"Hello";
    }
};
class child:public parent{
    public:
    void display(){
        cout<<"Over Ride Hello";
    }
};
int main(){
    child c;
    c.display();
    return 0;
}