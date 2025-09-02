/*3. Write a class Player that contains attributes for the players's name, average and
team. Write three functions to input, change and display these attributes. Also
write a constructor that asks for input to initialize all the attributes.*/
#include <iostream>
using namespace std;
class Player 
{
	string Name ;
	float Average ;
	string Team;
	public :
		Player ()
		{
			cout << "Default Constructor " << endl;
		}
    Input (string n , float a , string t)
    {
       Name = n;
       Average = a ;
       Team = t ;
	}
	void Change (string NewName , float NewAverage ,string NewTeam)
	{
	Name = NewName ;
	Average = NewAverage ;
	Team = NewTeam ;	
	}
	void Output ()
	{
		cout << "Name " << Name <<endl;
       cout << "Average " << Average << endl;
       cout << "Team " << Team << endl;
	}
}; 
int main()
{
	char user_choice ;
	string Na ;
	float Av ;
	string Te ;
	cout << "Enter your Name " << endl;
	cin >> Na ;
	cout << "Enter your average " << endl;
	cin >> Av ;
	cout << "Enter your team " << endl;
	cin >> Te ;
    cout << "You are now changing the values " << endl;
	string x ,z ;
	float y ;
	cout << "Enter your Name again " << endl;
	cin >> x  ;
	cout << "Enter your average again" << endl;
	cin >> y  ;
	cout << "Enter your team again" << endl;
	cin >> z  ;
	Player P;
	P.Input (Na , Av , Te) ;
	P.Change (x , y , z );
    P.Output ();
	
}


