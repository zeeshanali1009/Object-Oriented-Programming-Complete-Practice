#include <iostream>
#include <string>
using namespace std;

class dayType {
	private:
		string day;
	public:
		dayType(string d)
		{
			day = d;
		}
		
		void setday(string d)
		{
			day = d;
		}
		
		void Print_day()
		{
			cout << "Day: " << day << endl;
		}
		
		string getday()
		{
			return day;
		}
		
		string Next_Day()
		{
			if (day == "Sunday")
			{
				return "Monday";
			}
			else if (day == "Monday")
			{
				return "Tuesday";
			}
			else if (day == "Tuesday")
			{
				return "Wednesday";
			}
			else if (day == "Wednesday")
			{
				return "Thursday";
			}
			else if (day == "Thursday")
			{
				return "Friday";
			}
			else if (day == "Friday")
			{
				return "Saturday";
			}
			else if (day == "Saturday")
			{
				return "Sunday";
			}
			else
			{
				return "Please give appropriate input";
			}
		}
		
		string Previous_Day()
		{
			if (day == "Sunday")
			{
				return "Saturday";
			}
			else if (day == "Monday")
			{
				return "Sunday";
			}
			else if (day == "Tuesday")
			{
				return "Monday";
			}
			else if (day == "Wednesday")
			{
				return "Tuesday";
			}
			else if (day == "Thursday")
			{
				return "Wednesday";
			}
			else if (day == "Friday")
			{
				return "Thursday";
			}
			else if (day == "Saturday")
			{
				return "Friday";
			}
			else
			{
				return "Please give appropriate input";
			}
		}
		
		string Add_Days(int numDays)
		{
			string days_arr[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
			int current_day_index = 0;
			for (int i = 0; i < 7; i++)
			{
				if (day == days_arr[i])
				{
					current_day_index = i;
					break;
				}
			}			
			int new_day_index = (current_day_index + numDays) % 7;
			return days_arr[new_day_index];
		}
};

int main()
{
	string d;
	cout << "Please Enter the day in grammatical sequence ";
	cin >> d;
	dayType D(d);
	
	cout << "The day is ";
	D.Print_day();
	
	cout << "Next day is: " << D.Next_Day() << endl;
	cout << "Previous day is: " << D.Previous_Day() << endl;
	
	int days;
	cout << "Enter the number of days to add: ";
	cin >> days;
	cout << "The new day is: " << D.Add_Days(days) << endl;
	
	return 0;
}

