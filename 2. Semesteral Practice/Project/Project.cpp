#include <iostream>
#include <conio.h>
using namespace std;

class Person {
public:
    string name;
    string address;
    string phoneNumber;
   bool detailsEntered = false;

    void GetDetails() {
        if (detailsEntered==true) {
        	
            cout << "Enter your name: ";
            cin >> name;
            cout << "Enter your address: ";
            cin >>  address;
            cout << "Enter your phone number: ";
            cin >> phoneNumber;
            detailsEntered = true;
        }
    }

    void ShowDetails() {
    	cout << "\nYour Personal details :" << endl;
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Phone Number: " << phoneNumber << endl;
    }
};

class Guest : public Person {
public:
    int rating;
    string comments;
    string guestName;

    void ProvideFeedback() {
        cout << "Please provide your feedback:\n";
        cout << "Enter your name: ";
        cin >> guestName;
        cout << "Enter your rating (1 to 5): ";
        cin >> rating;
        cout << "Enter your comments: ";
        cin >>  comments; 
    }

    void DisplayFeedback() {
        cout << "\nFeedback:\n";
        cout << "Guest: " << guestName << endl;
        cout << "Rating: " << rating << "/5" << endl;
        cout << "Comments: " << comments << endl;
    }
};

class Room : public Guest {
public:
    bool booked = false;
    double ratePerDay = 1000.0, days;
	int choice;

    void DisplayRoomMenu() {
        cout << "Here are the available room options with rates per day:" << endl;
        cout << "----------------* ROOMS MENU *-----------------" << endl;
        cout << "Room Type\t\t\tRate per day" << endl;
        cout << "1. Standard Room\t\t" << ratePerDay << " Rs" << endl;
        cout << "2. Luxury Room\t\t\t" << ratePerDay * 2 << " Rs" << endl;
        cout << "3. Super Luxury Room\t\t" << ratePerDay * 3 << " Rs" << endl;
        cout << "------------* ROOMS AVAILABILITY *-------------" << endl;
        cout << "1---50 ----> Standard Rooms" << endl;
        cout << "51---100 ----> Luxury Rooms" << endl;
        cout << "101---150 ----> Super Luxury Rooms" << endl;
        cout << "-----------------------------------------------" << endl;
    }

    void SelectRoom() {
        cout << "Enter your choice: ";
        cin >> choice;
        cout << "For how many days do you want to book the room: ";
        cin >> days;
        cout << "------------Your inputs have been recorded.---------------" << endl;
    }
};

class Bill :  public Room {
public:
    double totalAmount;

    void CalculateRoomCharges() {
        if (choice == 1) {
            totalAmount = ratePerDay * days;
        } else if (choice == 2) {
            totalAmount = ratePerDay * 2 * days;
        } else if (choice == 3) {
            totalAmount = ratePerDay * 3 * days;
        }
    }

    void ShowBill() {
        cout << "------------------------------------------" << endl;
        cout << "Customer Details:" << endl;
        ShowDetails();
        cout << "Selected Room: ";
        if (choice == 3) {
            cout << "Standard Room" << endl;
        } else if (choice == 2) {
            cout << "Luxury Room" << endl;
        } else if (choice == 1) {
            cout << "Super Luxury Room" << endl;
        }
        cout << "Total Bill Amount: " << totalAmount << " Rs" << endl;
        cout << "------------------------------------------" << endl;
    }
};

class Hotel {
public:
    void DisplayMainMenu() {
        cout << "\n\t\t\t\t*************************";
        cout << "\n\t\t\t\t HOTEL MANAGEMENT SYSTEM";
        cout << "\n\t\t\t\t      * MAIN MENU *";
        cout << "\n\t\t\t\t*************************";
        cout << "\n\n\n\t\t\t1. Check Room Menu";
        cout << "\n\t\t\t2. Enter Your Details";
        cout << "\n\t\t\t3. Book A Room";
        cout << "\n\t\t\t4. View Bill";
        cout << "\n\t\t\t5. Add new Record";
        cout << "\n\t\t\t6. Provide Feedback";
        cout << "\n\t\t\t7. Exit";
        cout << "\n\n\t\t\tEnter Your Choice: ";
    }
};

class HotelStaff : public Person {
    // Add staff-specific functionality if needed
};

int main() {
    cout << "\t\t\t=========================================================" << endl;
    cout << "\t\t\t\t\t\tZeeshan Ali " << endl;
    cout << "\t\t\t=========================================================" << endl;
    cout << "\t\t\t=========================================================" << endl;
    cout << "\t\t\t\t\tHotel Management System " << endl;
    cout << "\t\t\t=========================================================" << endl;
    cout << "Press any key to enter into the project " << endl;
    getch();
    system("cls");
    Hotel hotel;
    //Guest guest;
    //Room room;
    Bill bill;
    HotelStaff staff;

    int userChoice;

    do {
        hotel.DisplayMainMenu();
        cin >> userChoice;
        system("cls");

        switch (userChoice) {
            case 1:
                bill.ratePerDay = 1000;
                bill.DisplayRoomMenu();
                break;
            case 2:
                bill.GetDetails();
                bill.ShowDetails();
                break;
            case 3:
                if (bill.detailsEntered==true) {
                    cout << "Please enter your personal details first." << endl;
                    bill.GetDetails();
                }
                int numRooms;
                cout << "Enter the number of rooms you want to book: ";
                cin >> numRooms;
                for (int i = 0; i < numRooms; ++i) {
                    cout << "Room " << i + 1 << ":" << endl;
                    bill.DisplayRoomMenu();
                    bill.SelectRoom();
                    bill.CalculateRoomCharges();
                    bill.booked = true;
                    bill.ShowBill();
                }
                cout << "---------Rooms booked successfully!------------" << endl;
                break;
            case 4:
                if (!bill.booked) {
                    cout << "You have not booked any rooms yet." << endl;
                } else {
                	bill.CalculateRoomCharges();
                    bill.ShowBill();
                }
                break;
            case 5:
                bill.GetDetails();
                // Add functionality to add new staff records
                break;
            case 6:
                bill.ProvideFeedback();
                cout << "---------------Your feedback has been recorded------------------" << endl;
                cout << "Do you want to check your feedback?" << endl;
                cout << "Press 1 to see your given feedback" << endl;
                int u_choice;
                cin >> u_choice;
                if (u_choice == 1) {
                    bill.DisplayFeedback();
                }
                break;
            case 7:
                cout << "Thank you for using our hotel management system. Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
        }
    } while (userChoice != 8);

    return 0;
}
