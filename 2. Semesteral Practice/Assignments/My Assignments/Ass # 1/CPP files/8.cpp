#include<iostream>
using namespace std;

class Time
{
	int hours, mins, secs;

public:
	Time();
	Time(int h, int m, int s);
	void display();
	void sthour(int ho);
	void stminu(int mi);
	void stsec(int sec);
	void stTime(int hou, int min, int se);
	int hour();
	int min();
	int sec();
	void Tick();
	int Add(Time t1, Time t2);
};

Time::Time()
{
	hours = 0;
	mins = 0;
	secs = 0;
}

Time::Time(int h, int m, int s)
{
	hours = h;
	mins = m;
	secs = s;
}

void Time::display()
{
	cout << hours << ":" << mins << ":" << secs << endl;
}

void Time::sthour(int ho)
{
	hours = ho;
}

void Time::stminu(int mi)
{
	mins = mi;
}

void Time::stsec(int sec)
{
	secs = sec;
}

void Time::stTime(int hou, int min, int se)
{
	hours = hou;
	mins = min;
	secs = se;
}

int Time::hour()
{
	return hours;
}

int Time::min()
{
	return mins;
}

int Time::sec()
{
	return secs;
}

void Time::Tick()
{
	secs++; 

	if (secs >= 60)
	{
		secs = 0;
		mins++; 

		if (mins >= 60)
		{
			mins = 0;
			hours++; 

			if (hours >= 24)
				hours = 0; 
		}
	}
}
int Time::Add(Time t1,Time t2)
{
	int h = t1.hour() + t2.hour();
	int m = t1.min() + t2.min();
	int s = t1.sec() + t2.sec();

	if (s >= 60)
	{
		m += s / 60;
		s %= 60;
	}

	if (m >= 60)
	{
		h += m / 60;
		m %= 60;
	}

	h %= 24; // To ensure the hours do not exceed 24

	cout << "Sum: " << h << ":" << m << ":" << s << endl;
}


int main()
{
	int ho, mi, sec;
	Time T1;
	T1.display();

	Time T2(10, 3, 6);
	T2.display();

	cout << "Enter Hours: ";
	cin >> ho;

	cout << "Enter Minutes: ";
	cin >> mi;

	cout << "Enter Seconds: ";
	cin >> sec;

	T1.sthour(ho);
	T1.stminu(mi);
	T1.stsec(sec);

	T1.display();

	T1.Tick(); 
	cout << "After ticking: ";
	T1.display();
	
	Time T3;
	T3.Add(T1,T2);

	return 0;
}
