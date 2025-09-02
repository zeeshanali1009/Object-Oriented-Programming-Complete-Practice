#include <iostream>
#include <string>
using namespace std;

class DayType {
private:
    string day;

public:
    DayType(string day) {
        this->day = day;
    }

    void set_day(string day) {
        this->day = day;
    }

    string print_day() {
        return day;
    }

    string get_day() {
        return day;
    }

    DayType next_day() {
        string days[] = {"mon", "tue", "wed", "thu", "fri", "sat", "sun"};
        int current_index = 0;
        for (int i = 0; i < 7; ++i) {
            if (days[i] == day) {
                current_index = i;
                break;
            }
        }
        int next_index = (current_index + 1) % 7;
        return DayType(days[next_index]);
    }

    DayType prev_day() {
        string days[] = {"mon", "tue", "wed", "thu", "fri", "sat", "sun"};
        int current_index = 0;
        for (int i = 0; i < 7; ++i) {
            if (days[i] == day) {
                current_index = i;
                break;
            }
        }
        int prev_index = (current_index - 1) % 7;
        return DayType(days[prev_index]);
    }

    DayType add_days(int num_days) {
        string days[] = {"mon", "tue", "wed", "thu", "fri", "sat", "sun"};
        int current_index = 0;
        for (int i = 0; i < 7; ++i) {
            if (days[i] == day) {
                current_index = i;
                break;
            }
        }
        int new_index = (current_index + num_days) % 7;
        return DayType(days[new_index]);
    }
};

int main() {
    string input_day;
    cout << "Enter the starting day (mon/tue/wed/thu/fri/sat/sun): ";
    cin >> input_day;
    
    DayType current_day(input_day);
    cout << "Current day: " << current_day.print_day() << endl;

    DayType next_day = current_day.next_day();
    cout << "Next day: " << next_day.print_day() << endl;

    DayType previous_day = current_day.prev_day();
    cout << "Previous day: " << previous_day.print_day() << endl;

    int num_days;
    cout << "Enter the number of days to add: ";
    cin >> num_days;
    
    DayType days_added = current_day.add_days(num_days);
    cout << "Day after adding " << num_days << " days: " << days_added.print_day() << endl;

    return 0;
}

