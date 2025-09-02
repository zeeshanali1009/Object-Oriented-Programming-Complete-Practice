#include <iostream>
using namespace std;
class Volume_of_Object 
{
	public :
		int length ;
		int width ;
		int height;
		
		//cout << result  << endl;
};
int main()
{
	Volume_of_Object V1;
	cout << "Enter the value of length " << endl;
	cin >> V1.length ;
	cout << "Enter the value of width " << endl;
	cin >> V1.width ;
	cout << "Enter the value of height " << endl;
	cin >> V1.height ;
	int result ;
	result = V1.length * V1.width * V1.height ;
	cout <<"Volume is " << result  << endl;
}

