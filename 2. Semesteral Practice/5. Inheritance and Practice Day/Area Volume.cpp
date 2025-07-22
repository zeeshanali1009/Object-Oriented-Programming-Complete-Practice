#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;
    double area;

public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    void calculateArea() {
        area = length * width;
    }

    double getArea() {
        return area;
    }
};

class Box : public Rectangle {
private:
    double height;
    double volume;

public:
    Box(double l, double w, double h) : Rectangle(l, w) {
        height = h;
    }

    void calculateVolume() {
        volume = getArea() * height;
    }

    double getVolume() {
        return volume;
    }
};

int main() {
    double l, w, h;
    cout << "Enter the length: ";
    cin >> l;
    cout << "Enter the width: ";
    cin >> w;
    cout << "Enter the height: ";
    cin >> h;

    Rectangle rectangle(l, w);
    rectangle.calculateArea();
    cout << "Area: " << rectangle.getArea() << endl;

    Box box(l, w, h);
    box.calculateArea();
    box.calculateVolume();
    cout << "Volume: " << box.getVolume() << endl;

    return 0;
}

