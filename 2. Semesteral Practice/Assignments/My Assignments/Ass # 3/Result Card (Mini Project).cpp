#include <iostream>
#include <string>
using namespace std;

class Student 
{
    string Name;
    int Roll_No;
    int Marks[5];
    string Grade;
    string Subjects[5];
public:
    Student(string Name, int Roll_No)
    {
        this->Name = Name;
        this->Roll_No = Roll_No;
    }
    void setSubjects(int index, string subjectName) {
        if (index >= 0 && index < 5) {
			Subjects[index] = subjectName;
        }
    }
    void setMarks(int Marks, int index)
    {
        if (index >= 0 && index < 5) 
        {
            this->Marks[index] = Marks;
        }
    }

    string getName()
    {
        return Name;
    } 

    int getMarks(int index)
    {
        if (index >= 0 && index < 5) 
        {
            return Marks[index];
        }
        else
        {
            return 0;
        }
    }

    int getRoll_no()
    {
        return Roll_No;    
    }

    int getTotal_Marks()
    {
        int total = 0;
        for (int i = 0; i < 5; i++)
        {
            total = total + Marks[i];
        }
        return total;
    }

    float percentage;
    float getPercentage()
    {
        percentage = (getTotal_Marks() / 5.0);
        return percentage;
    }

    string Grade_Process()
    {
        if (percentage >= 95) {
            Grade = "A+";
        } else if (percentage >= 90) {
            Grade = "A";
        } else if (percentage >= 80) {
            Grade = "B";
        } else if (percentage >= 70) {
            Grade = "C";
        } else if (percentage >= 60) {
            Grade = "D";
        } else {
            Grade = "Fail";
        }
        return Grade;
    }

    void DisplayResult_Card()
    {
        cout << "Name : " << Name << endl;
        cout << "Roll no : " << Roll_No << endl; 
        cout << "Subjects\t\t\t Marks : " << endl; 
        for (int i = 0; i < 5; i++)
        {
            cout <<  Subjects[i]  << "\t\t\t\t" <<  Marks[i] << endl;
        }
        cout << "Total Marks : " << getTotal_Marks() << endl;
        cout << "Percentage : " << getPercentage() << "%" << endl;
        cout << "Grade : " << Grade_Process() << endl; 
    }
};
int main()
{
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    for (int i = 0; i < numStudents; i++)
    {
        string name;
        int roll_Number;
        int marks[5];
        string subjects[5];

        cout << "\nEnter Student " << i + 1 << "'s Name: ";
        cin >> name;

        cout << "Enter Roll Number: ";
        cin >> roll_Number;

        cout << "Enter Marks for 5 Subjects: ";
        for (int i = 0; i < 5; i++) {
            cin >> marks[i];
        }

        cout << "Enter Subjects' Names: ";
        for (int i = 0; i < 5; i++) {
            cin >>  subjects[i];
        }

        Student student(name, roll_Number);
        for (int i = 0; i < 5; i++) 
        {
            student.setSubjects(i, subjects[i]);
            student.setMarks(marks[i], i);
        }

        cout << "\nResult Card for " << student.getName() << ":" << endl;
        student.DisplayResult_Card();
    }
}


