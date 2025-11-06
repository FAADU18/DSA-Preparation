#include<iostream>
using namespace std;
class Parent{

    public:
    virtual void add() = 0;//data abstraction

    virtual void display() = 0;
};
class child : public Parent{
    public:
    void add() override{ //THis function is over riding the next class
        cout<<4+7<<endl;
    }
    void display() override{
        cout<<"Parent calss";
    }
};
int main(){
    Parent *p = new child();
    p->add();
    p->display();
    return 0;
}
