/*Make a Circle class.
a.	It has three attributes radius, the x and the y coordinates of its center.
b.	Make a no argument constructor to initialize it's attributes to 0, and a three argument constructor  to initialize with the  fixed values given by user.
c.	Make void setValues(float, float, float) functions to set x, y and radius.
d.	Make float area() function, and a float circumference() function to return area and circumference.
e.	Make void print() function to display x , y coordinates and radius of a circle.
Call these functions in main() to test their working.*/
#include <iostream>
using namespace std;
class Circle 
{
	public :
	int Radius;
	int x_Coordinate ;
	int y_Coordinate;
Circle ()
	{
	Radius = 0 ;
	x_Coordinate = 0 ;
	y_Coordinate = 0 ;	
	}
	Circle (int a ,int b ,int c )
	{
	Radius = a ;
	x_Coordinate = b  ;
	y_Coordinate = c ;
	}
	void setRadius(int a )
	{
	     Radius = a ;	
	}
		void setx_Coordinate(int b )
	{
	     x_Coordinate = b ;	
	}
		void sety_Coordinate(int c )
	{
	     y_Coordinate = c ;	
	}
	public :
	float Area ;
	float Area_of_Circle ()
	{
		Area = 3.14 * (Radius* Radius);
		return Area ;
	}
	float Circumference ;
	float Circumference_of_Circle ()
	{
		Circumference = 2 * 3.14 * Radius ;
		return Circumference ;
	}
	public :
	void Print ()
	{
		cout << "Area of the circle is " << Area << endl;
		cout << "Circumference of the circle is " << Circumference << endl;
	}
};
int main ()
{
	int a , b ,c ;
	cout << "Enter the radius of the circle " << endl;
	cin >> a ;
	cout << "Enter the x coordinate of the circle " << endl;
	cin >> b ;
	cout << "Enter the y coordinate of the circle " << endl;
	cin >> c ;
	Circle C (a, b , c ) ;
	C.Area_of_Circle();
	C.Circumference_of_Circle();
	C.Print();
}
