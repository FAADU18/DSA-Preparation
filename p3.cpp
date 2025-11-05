#include<iostream>
using namespace std;
class Rectangle {
    public:
     int length,breath;
     Rectangle(int l,int b){
         length = l;
         breath = b;
        //  int  area =  l* b ; 
    }
     void print(){
        cout<<"Area of rectangle is = "<<length*breath;
     }
};
int main(){
    Rectangle r(2,3);
    r.print();
}