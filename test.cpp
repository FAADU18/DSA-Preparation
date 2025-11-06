#include <iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"enter the value"<<endl;
    cin>>a;
    cin>>b;
    int c = a*b;
    cout<<"Product "<<c<<endl;
    try{
        if(b == 0){
            throw "Division not allowed";
        }
        int d = a/b;
        cout<<"Divi "<<d<<endl;
    }
    catch(const char* msg){
        cout<<"Logic Error";
    }
    return 0;

}