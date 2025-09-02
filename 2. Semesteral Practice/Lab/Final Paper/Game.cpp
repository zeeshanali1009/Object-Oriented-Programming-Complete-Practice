/*Design a game where different characters (e.g., Player, Enemy) can interact with each other. 
Implement a base class Character with a virtual method attack(). Derive classes like Player and Enemy from Character, 
each having its own attack behavior.
Use polymorphism to make different characters attack each other.*/
#include <iostream>
using namespace std;
class Chracter
{
	public :
		void virtual attack ()
		{
			cout << "I am a base class attack method.\n\n" << endl;
		}
};
class Player : public Chracter 
{
	void attack ()
	{
		cout << "\n\n\n--------------Player Attack---------------" << endl;
		cout << "I am a player and i am gonna win the game. " << endl;
	}	
};
class Enemy : public Chracter 
{
	void attack ()
	{
		cout << "\n\n\n--------------Enemy Attack---------------" << endl;
		cout << "I am an enemy of the player.\nand I am gonna try my best to defeat the player. " << endl;
	}	
};
int main()
{
	int user_choice ;
	do
	{
	cout << "-----------Game-----------" << endl;
	cout << "1.Player Attack functionality." << endl;
	cout << "2.Enemy Attack functionality." << endl;
	cout << "\nEnter your choice."<< endl;
	cin >> user_choice ;
	Chracter* chrac ;
	Player play ;
	Enemy Enem ;
	switch (user_choice )
	{
		case 1 :
	
	chrac = &play;
	chrac->attack();
	break ;
	    case 2 :

	chrac = &Enem;
	chrac->attack();
	}
  }
  while (user_choice != 2 );
	
	
	
	return 0 ;
}
