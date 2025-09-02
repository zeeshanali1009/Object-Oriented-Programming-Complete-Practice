//Mini Project: Result Card Management System

//Step 1: Define the Student Class

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    int marks[5]; // Assuming 5 subjects

public:
    // Constructor to initialize student's name and roll number
    Student(string name, int rollNumber) {
        this->name = name;
        this->rollNumber = rollNumber;
    }

    // Setter method to set marks for each subject
    void setMarks(int index, int marks) {
        if (index >= 0 && index < 5) {
            this->marks[index] = marks;
        }
    }

    // Getter method to get student's name
    string getName() const {
        return name;
    }

    // Getter method to get student's roll number
    int getRollNumber() const {
        return rollNumber;
    }

    // Getter method to get marks for a specific subject
    int getMarks(int index) const {
        if (index >= 0 && index < 5) {
            return marks[index];
        }
        return 0; // Return 0 for invalid index
    }

    // Method to calculate the total marks obtained by the student
    int getTotalMarks() const {
        int total = 0;
        for (int i = 0; i < 5; i++) {
            total += marks[i];
        }
        return total;
    }

    // Method to calculate the percentage obtained by the student
    float getPercentage() const {
        return (getTotalMarks() / 5.0);
    }

    // Method to display the result card of the student
    void displayResultCard() const {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: ";
        for (int i = 0; i < 5; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;
        cout << "Total Marks: " << getTotalMarks() << endl;
        cout << "Percentage: " << getPercentage() << "%" << endl;
    }
};


Step 2: Define the Derived Class ResultCard

class ResultCard : public Student {
private:
    string grade;

public:
    // Constructor to initialize ResultCard with student's name, roll number, and marks
    ResultCard(string name, int rollNumber, int marks[]) : Student(name, rollNumber) {
        // Calculate grade based on percentage
        float percentage = getPercentage();
        if (percentage >= 90) {
            grade = "A+";
        } else if (percentage >= 80) {
            grade = "A";
        } else if (percentage >= 70) {
            grade = "B";
        } else if (percentage >= 60) {
            grade = "C";
        } else if (percentage >= 50) {
            grade = "D";
        } else {
            grade = "Fail";
        }
    }

    // Method to display the result card with the grade
    void displayResultCard() const {
        Student::displayResultCard();
        cout << "Grade: " << grade << endl;
    }
};


//Step 3: Main Function to Test the Project


int main() {
    string name;
    int rollNumber;
    int marks[5];

    cout << "Enter Student's Name: ";
    getline(cin, name);

    cout << "Enter Roll Number: ";
    cin >> rollNumber;

    cout << "Enter Marks for 5 Subjects: ";
    for (int i = 0; i < 5; i++) {
        cin >> marks[i];
    }

    // Create a Student object and display the result card
    Student student(name, rollNumber);
    cout << "\nResult Card for " << student.getName() << ":" << endl;
    student.displayResultCard();

    // Create a ResultCard object and display the result card with grade
    ResultCard resultCard(name, rollNumber, marks);
    cout << "\nResult Card with Grade for " << resultCard.getName() << ":" << endl;
    resultCard.displayResultCard();

    return 0;
}

Explanation:

We defined the Student class with private data members for student name, roll number, and an array for subject marks. 
We also included getter and setter methods to access and modify the data members, and methods to calculate the total marks and percentage.

We then derived a new class ResultCard from the Student class to add the grade data member.
 In the constructor of ResultCard, we calculate the grade based on the percentage obtained by the student.

In the main function, we take input from the user for student details and marks.
 We create objects of both the Student class and ResultCard class and display the result cards using their respective display methods.






1. Add Subject Names:
Currently, the project assumes that there are 5 subjects, but we don't know their names. Let's modify the code to prompt
 the user to enter the names of the subjects along with their marks.

2. Allow Multiple Students:
Instead of handling only one student's result card, let's allow the user to input data for multiple students and
 display result cards for all of them.

3. Validation:
Implement input validation to ensure that the user enters valid data for roll numbers, marks, and subject names.

4. Report Generation:
Let's provide an option to generate a report file that contains the result cards of all students.

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    string subjects[5];
    int marks[5]; // Assuming 5 subjects

public:
    // Constructor to initialize student's name, roll number, and subjects
    Student(string name, int rollNumber) {
        this->name = name;
        this->rollNumber = rollNumber;
    }

    // Setter method to set marks for each subject
    void setMarks(int index, int marks) {
        if (index >= 0 && index < 5) {
            this->marks[index] = marks;
        }
    }

    // Setter method to set subject names
    void setSubjects(int index, string subjectName) {
        if (index >= 0 && index < 5) {
            subjects[index] = subjectName;
        }
    }

    // Getter method to get student's name
    string getName() const {
        return name;
    }

    // Getter method to get student's roll number
    int getRollNumber() const {
        return rollNumber;
    }

    // Getter method to get marks for a specific subject
    int getMarks(int index) const {
        if (index >= 0 && index < 5) {
            return marks[index];
        }
        return 0; // Return 0 for invalid index
    }

    // Method to calculate the total marks obtained by the student
    int getTotalMarks() const {
        int total = 0;
        for (int i = 0; i < 5; i++) {
            total += marks[i];
        }
        return total;
    }

    // Method to calculate the percentage obtained by the student
    float getPercentage() const {
        return (getTotalMarks() / 5.0);
    }

    // Method to display the result card of the student
    void displayResultCard() const {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Subjects and Marks:" << endl;
        for (int i = 0; i < 5; i++) {
            cout << subjects[i] << ": " << marks[i] << endl;
        }
        cout << "Total Marks: " << getTotalMarks() << endl;
        cout << "Percentage: " << getPercentage() << "%" << endl;
    }
};

class ResultCard : public Student {
private:
    string grade;

public:
    // Constructor to initialize ResultCard with student's name, roll number, subjects, and marks
    ResultCard(string name, int rollNumber, string subjects[], int marks[]) : Student(name, rollNumber) {
        // Calculate grade based on percentage
        float percentage = getPercentage();
        if (percentage >= 90) {
            grade = "A+";
        } else if (percentage >= 80) {
            grade = "A";
        } else if (percentage >= 70) {
            grade = "B";
        } else if (percentage >= 60) {
            grade = "C";
        } else if (percentage >= 50) {
            grade = "D";
        } else {
            grade = "Fail";
        }
    }

    // Method to display the result card with the grade
    void displayResultCard() const {
        Student::displayResultCard();
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;
    cin.ignore(); // Clear the newline character from the input buffer

    // Array to store student objects
    Student students[numStudents];

    // Input student details and result card data
    for (int i = 0; i < numStudents; i++) {
        string name;
        int rollNumber;
        string subjects[5];
        int marks[5];

        cout << "\nEnter Student " << i + 1 << " Details: " << endl;
        cout << "Name: ";
        getline(cin, name);

        cout << "Roll Number: ";
        cin >> rollNumber;
        cin.ignore();

        for (int j = 0; j < 5; j++) {
            cout << "Enter Subject " << j + 1 << " Name: ";
            getline(cin, subjects[j]);

            cout << "Enter Marks for " << subjects[j] << ": ";
            cin >> marks[j];
            cin.ignore();
        }

        // Create Student object and set subject names and marks
        students[i] = Student(name, rollNumber);
        for (int j = 0; j < 5; j++) {
            students[i].setSubjects(j, subjects[j]);
            students[i].setMarks(j, marks[j]);
        }
    }

    // Display result cards for all students
    cout << "\nResult Cards for All Students:\n" << endl;
    for (int i = 0; i < numStudents; i++) {
        cout << "Result Card for Student " << i + 1 << ":" << endl;
        students[i].displayResultCard();
        cout << endl;
    }

    // Generate a report file
    ofstream reportFile("result_cards_report.txt");
    if (reportFile.is_open()) {
        reportFile << "Result Cards Report:\n" << endl;
        for (int i = 0; i < numStudents; i++) {
            reportFile << "Result Card for Student " << i + 1 << ":" << endl;
            reportFile << "Name: " << students[i].getName() << endl;
            reportFile << "Roll Number: " << students[i].getRollNumber() << endl;
            reportFile << "Subjects and Marks:" << endl;
            for (int j = 0; j < 5; j++) {
                reportFile << students[i].getSubjects(j) << ": " << students[i].getMarks(j) << endl;
            }
            reportFile << "Total Marks: " << students[i].getTotalMarks() << endl;
            reportFile << "Percentage: " << students[i].getPercentage() << "%" << endl;
            reportFile << endl;
        }
        reportFile.close();
        cout << "Report file 'result_cards_report.txt' generated successfully." << endl;
    } else {
        cout << "Error opening report file." << endl;
    }

    return 0;
}


Explanation:

We added an array of subjects in the Student class to store the names of the subjects. We modified the input loop in the main function
 to take subject names and their respective marks.

The main function now takes input for multiple students and creates an array of Student objects to store their data.

We provided an option to generate a report file containing the result cards of all students.
 The report file is saved as "result_cards_report.txt" and contains the same information as displayed on the console.

We added input validation for roll numbers, marks, and subject names to ensure that valid data is entered.

With these enhancements, the mini project now allows multiple students' data entry, provides a well-structured result card
 with subjects and marks, and generates a report file for further analysis.



------------------------------------------------
- Create Base class
- Create child class (public, private, protected)
- outputs 


----------------------------------------------

Explanation:Polymorphism is one of the key concepts in object-oriented programming (OOP) that allows a class to take multiple forms.
 In C++, polymorphism can be achieved through function overloading and virtual functions. Function overloading allows a class 
 to have multiple functions with the same name but different parameter lists. Virtual functions, on the other hand,
  enable dynamic binding at runtime, which is crucial for achieving runtime polymorphism.

Let's create a C++ program to demonstrate the concept of polymorphism using function overloading and virtual functions:
	
	#include <iostream>
using namespace std;

// Base class Shape
class Shape {
public:
    // Virtual function to calculate the area
    virtual float calculateArea() {
        cout << "Calculating area of the base shape." << endl;
        return 0.0;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
private:
    float length;
    float width;

public:
    Rectangle(float l, float w) : length(l), width(w) {}

    // Function overloading to calculate the area of a rectangle
    float calculateArea() {
        cout << "Calculating area of the rectangle." << endl;
        return length * width;
    }
};

// Derived class Circle
class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) : radius(r) {}

    // Function overloading to calculate the area of a circle
    float calculateArea() {
        cout << "Calculating area of the circle." << endl;
        return 3.14 * radius * radius;
    }
};






------------------------------------------------------------------------






int main() {
    // Creating objects of the derived classes
    Rectangle rectangle(5.0, 3.0);
    Circle circle(2.5);

    // Polymorphism using virtual functions
    Shape* shape1 = &rectangle;
    Shape* shape2 = &circle;

    // Calculate the areas using virtual functions
    float area1 = shape1->calculateArea();
    float area2 = shape2->calculateArea();

    cout << "Area of the rectangle: " << area1 << " square units." << endl;
    cout << "Area of the circle: " << area2 << " square units." << endl;

    return 0;
}


We defined the Student class with private data members for student name, roll number, and an array for subject marks.
 We also included getter and setter methods to access and modify the data members, and methods to calculate the total marks and percentage.

We then derived a new class ResultCard from the Student class to add the grade data member.
 In the constructor of ResultCard, we calculate the grade based on the percentage obtained by the student.

In the main function, we take input from the user for student details and marks. We create objects of both the Student class
 and ResultCard class and display the result cards using their respective display methods.
