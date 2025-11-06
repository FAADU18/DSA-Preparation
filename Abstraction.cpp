#include<iostream>
using namespace std;
class Parent{

    protected:
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
    child c;
    c.add();
    c.display();
    return 0;
}