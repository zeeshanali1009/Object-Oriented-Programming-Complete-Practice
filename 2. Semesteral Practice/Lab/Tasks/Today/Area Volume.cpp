#include <iostream>
using namespace std;

class Rectangle {
protected:
    double length;
    double width;

public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    double calculate_area() {
        return length * width;
    }
};

class Box : public Rectangle {
private:
    double height;

public:
    Box(double l, double w, double h) : Rectangle(l, w) {
        height = h;
    }

    double calculate_volume() {
        return length * width * height;
    }
};

int main() {
    double length, width, height;
    
    cout << "Enter length: ";
    cin >> length;
    
    cout << "Enter width: ";
    cin >> width;
    
    cout << "Enter height: ";
    cin >> height;
    
    Box my_box(length, width, height);
    
    cout << "Area of the base rectangle: " << my_box.calculate_area() << endl;
    cout << "Volume of the box: " << my_box.calculate_volume() << endl;

    return 0;
}

