#include <iostream>
using namespace std;
class bowler;
class batsmen
{
	int average ;
	public :
		batsmen()
		{
			average = 0;
		}
		private :
	void dispalyAverage()
	{
		cout << "I am a batsman and my average is " << average << endl;
	}
	friend void friendfunc(bowler , batsmen);
};
class bowler
{
	int wickets ;
	public :
		bowler()
		{
			wickets = 0 ;
		}
	void dispalyWickets()
	{
		cout << "I am a bowler and I have taken wickets : " << wickets << endl;
	}
	friend void friendfunc(bowler a , batsmen b);
};
 void  friendfunc(bowler a , batsmen b)
{
	cout << "Bowler Record : " << endl;
	a.dispalyWickets();
	cout << "Batsmen Record : " << endl;
	b.dispalyAverage();
}
int main()
{
	batsmen x ;
	bowler y ;
    friendfunc( y ,  x);
	return 0 ;
}
