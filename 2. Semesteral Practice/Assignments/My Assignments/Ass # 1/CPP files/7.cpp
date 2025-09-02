/*Create a class Rectangle with attributes length and width
a.	Make a no argument constructor to initialize attributes to 1
b.	Also make a two argument constructor.
c.	Make member functions that calculate and return the perimeter and the area of the rectangle.
d.	Also, provide void set( int l, int w) and void get() functions for the length and width attributes. 
e.	Make a Draw function that draws a rectangle using a character * on console.
*********
*       *
*       *
*********
P = 2 (l+w )
A = l*w 
*/
#include <iostream>
using namespace std;
class Rectangle 
{
	public:
	int length ;
	int width ;
    Rectangle (int l , int w )
    {
    	length = l ;
    	width = w ;
	}
void set_Length ( int a )
{
	length = a ;
}

void set_Width ( int b )
{
	width = b ;
}
int Perimeter ;
int  Perimeter_of_Rectangle ()
{
	Perimeter = 2 * (length + width);
	return Perimeter ;
}
int Area ;
int  Area_of_Rectangle ()
{
	Area = (length * width);
	return Area ;
}
void Display ()
{
    cout << "Perimeter of the rectangle is = " << Perimeter << endl;
    cout << "Area of the rectangle is = " << Area << endl;

    // Output rectangle shape using "*"
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < width; j++) 
		{
                cout << "*";
        }
        cout << endl;
    }
}

};
int main ()
{
	int l , w ;
	cout << "Please Enter the length for the rectangle " << endl;
	cin >> l;
	cout << "Please Enter the width for the rectangle " << endl;
	cin >> w;
   Rectangle R(l , w ) ;
   R.Perimeter_of_Rectangle ();
   R.Area_of_Rectangle ();
   R.Display();
}
