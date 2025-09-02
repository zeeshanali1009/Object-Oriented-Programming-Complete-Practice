#include <iostream>
using namespace std;
class Game
{
	public :
		 virtual void attack () = 0;
};
class Player : public Game 
{
	void attack ()
	{
		cout << "\n\n\n--------------Player Attack---------------" << endl;
		cout << "I am a player and i am gonna win the game. " << endl;
	}	
};
class Enemy : public Game 
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
	Game* game ;
	Player play ;
	Enemy Enem ;
	switch (user_choice )
	{
		case 1 :
	
	game = &play;
	game->attack();
	break ;
	    case 2 :

	game = &Enem;
	game->attack();
	}
  }
  while (user_choice != 2 );
	
	
	
	return 0 ;
}
