#include <iostream>
using namespace std;

class shape {
public:
    virtual void area() = 0;     // Pure virtual function
    virtual void display() = 0;  // Pure virtual function
};

class rectangle : public shape {
public:
    int length, breadth;

    rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    void area() override {
        cout << "Calculating Rectangle Area..." << endl;
    }

    void display() override {
        cout << "Area of Rectangle = " << length * breadth << endl;
    }
};

class circle : public shape {
public:
    float radius;

    circle(float r) {
        radius = r;
    }

    void area() override {
        cout << "Calculating Circle Area..." << endl;
    }

    void display() override {
        cout << "Area of Circle = " << 3.14 * radius * radius << endl;
    }
};

int main() {
    shape* s1 = new rectangle(5, 7);
    s1->area();
    s1->display();

    shape* s2 = new circle(3.9f);
    s2->area();
    s2->display();

    delete s1;
    delete s2;

    return 0;
}
//**shape* shape1;
//shape* shape2;
//circle c(5.0);
//rectangle r(3, 4);
//shape1 =&c;
//shape2 =&r;
//shape1->area();
//shape1->display();
//cout<<endl;
//shape2->area();
//shape2->display();