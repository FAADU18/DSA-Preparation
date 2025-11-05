#include <iostream>
using namespace std;
class car{
    public:
     string brand;
     int speed;
     
     void accelerater(){
         cout<<brand<<" Is moving at the "<<speed<<"km/h";
     }
};
int main() {
    car c;
    c.brand = "BMW";
    c.speed = 200;
    c.accelerater();
    return 0;
}