#include<iostream>
using namespace std;
class calculation{
    public:
    void calsi(int a,int b){
        cout<<a+b<<endl;
    }
    void calsi(int a, float b){
        cout<<a*b<<endl;
    }
    void calsi(){
        cout<<4/2<<endl;
    }

};
int main(){

    calculation c;
    c.calsi(3,7);
    c.calsi(3,8.9f);
    c.calsi();
    return 0;
}