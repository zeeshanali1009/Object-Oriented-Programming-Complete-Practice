#include <iostream>
using namespace std;
class batsmen
{
	public :
		 virtual void intro () = 0;
};
class babar : public batsmen 
{
	void intro ()
	{
		cout << "\n\n\n--------------Babar Azam---------------" << endl;
		cout << "I am babar Azam and i am a Pakistani player. " << endl;
	}	
};
class Virat : public batsmen 
{
	void intro ()
	{
		cout << "\n\n\n--------------Virat Kholi---------------" << endl;
		cout << "I am Virat Kholi and i am an Indian player. " << endl;
	}	
};
int main()
{
	int user_choice ;
	do
	{
	cout << "-----------Players-----------" << endl;
	cout << "1.Player 1 Intro." << endl;
	cout << "1.Player 2 Intro." << endl;
	cout << "\nEnter your choice."<< endl;
	cin >> user_choice ;
	batsmen* bat ;
	babar bab ;
	Virat vir ;
	switch (user_choice )
	{
		case 1 :
	
	bat = &bab;
	bat->intro();
	break ;
	    case 2 :
    bat = &vir;
	bat->intro(); 
	}
  }
  while (user_choice != 2 );
	
	
	
	return 0 ;
}
