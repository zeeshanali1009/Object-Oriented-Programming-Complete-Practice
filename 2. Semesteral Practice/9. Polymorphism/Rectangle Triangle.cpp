#include <iostream>
using namespace std;

class Shape 
{
    public:
        double length;
        double breadth;

        void get_data()
        {
            cout << "Enter length: ";
            cin >> length;
            cout << "Enter breadth: ";
            cin >> breadth;
        }

        virtual void display_area() = 0;
};

class Rectangle : public Shape
{
    public:
        void display_area() override
        {
            cout << "Area of Rectangle: " << (length * breadth) << endl;
        }
};

class Triangle : public Shape
{
    public:
        void display_area() override
        {
            cout << "Area of Triangle: " << (0.5 * length * breadth) << endl;
        }
};

int main()
{
	Shape* shape ;
    Rectangle rectangle;
    shape = &rectangle ;
    cout << "Enter data for rectangle:" << endl;
    shape->get_data();
    shape->display_area();

    Triangle triangle;
    shape = &triangle ;
    cout << "Enter data for triangle:" << endl;
    shape->get_data();
    shape->display_area();
 

    return 0;
}

