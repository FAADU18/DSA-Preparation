#include <iostream>
#define pi 3.141
using  namespace std;
class circle{
    public:
    int radius;
    circle(int r){
        radius = r;
    }
    void print(){
        cout<<"Area of circle is = "<<pi * radius * radius;
    }
};
int main(){
    circle c(4);
    c.print();
    return 0;
}