/*Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a 50 cent toll. Mostly they do, but sometimes a car 
goes by without paying. The tollbooth keeps track of the number of cars that have gone by, and of the total amount of money collected.
Model this tollbooth with a class called tollBooth. The two data items are a type unsigned int to hold the total number of cars, 
and a type double to hold the total amount of money collected. A constructor initializes both of these to 0.
A member function called payingCar() increments the car total and adds 0.50 to the cash total.
Another function, called nopayCar(), increments the car total but adds nothing to the cash total.
Finally, a member function called display() displays the two totals. Make appropriate member functions const.
Include a program to test this class. This program should allow the user to push one key to count a paying car,
and another to count a nonpaying car. Pushing the Esc key should cause the program to print out the total cars and total cash and then exit.*/
#include <iostream>
using namespace std;
class toolbooth
{
	public :
	unsigned int Number_of_PayingCars ;
	unsigned int Number_of_NonPayingCars ;
	double Cash_Collected ;
	toolboth()
	{
	Number_of_PayingCars = 0 ;
	Number_of_NonPayingCars = 0 ;
	Cash_Collected = 0 ;	
	}
	public :
	void Paying_Cars()
	{
		Number_of_PayingCars = Number_of_PayingCars + 1 ;
		Cash_Collected = Cash_Collected + 0.50 ;
		cout << "\nYou have successfully added a paying car\n " << endl;
	}
	void Non_Paying_Cars()
	{
		Number_of_NonPayingCars = Number_of_NonPayingCars + 1 ;
		cout << "You have successfully added a non paying car\n " << endl;
	}
	void Display_Record ()
	{
		cout << "There are " << Number_of_PayingCars << " cars which have paid the cash in the toolbooth" << endl;
		cout << "They have paid " << Cash_Collected <<  " cents in the toolbooth " << endl;
		cout << "There are " << Number_of_NonPayingCars << " cars which do not have paid the cash in the toolbooth" << endl;
	}
};
int main()
{
	toolbooth t ;
    int user_choice ;
    
    while (true)
    {
    	cout << "\n-----------------------------Toolbooth Menu------------------------------" << endl;
    cout << "This is toolbooth system in which we would show you the records of the followign cars :\n1.Paying Cars\n2.Non Paying Cars" << endl;
    cout << "\n\nSelect your respective option so we may proceed further" << endl;
	cout << "Press 1 to count a paying car " << endl;
	cout << "Press 2 to count non paying car " << endl;
	cout << "Press 3 to dispaly all the record for different cars " << endl;
	cin >> user_choice ;
	switch(user_choice)
	{
		case 1:
			system("cls");
		t.Paying_Cars();
		break;
		case 2:
			system("cls");
		t.Non_Paying_Cars();
		break;
		case 3:
			system("cls");
	   	t.Display_Record();
	}
}
}	

