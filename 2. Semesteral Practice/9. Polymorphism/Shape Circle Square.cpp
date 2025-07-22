#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing a shape." << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle." << endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing a square." << endl;
    }
};

int main() {
    Circle C;
    Square S;

    Shape* shape1 = &C;  // Pointers to objects of Circle and Square
    shape1->draw();

    Shape* shape2 = &S;
    shape2->draw();

    return 0;
}

