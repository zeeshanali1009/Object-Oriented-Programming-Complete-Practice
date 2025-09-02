#include <iostream>
#include <conio.h>
#include<fstream>
using namespace std;

class Person {
public:
    string name;
    string address;
    string phoneNumber;
    bool detailsEntered = false;

    void GetDetails() {
        if (!detailsEntered) {
            cout << "Enter your name: ";
            cin >> name;
            cout << "Enter your address: ";
            cin >> address;
            cout << "Enter your phone number: ";
            cin >> phoneNumber;
            ofstream save;
            save.open("Hotel.txt", ios::app);
            save<<name<< endl;
            save<<address << endl;
            save <<phoneNumber << endl;
            save.close();
            detailsEntered = true;
            
        }
    }

    void ShowDetails() {
    	 ifstream read;
        read.open("Hotel.txt", ios::app);
        read>>name;
        read>>address;
        read >>phoneNumber;
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Phone Number: " << phoneNumber << endl;
        read.close();
    }
};

class Guest : public Person {
public:
    int rating;
    string comments;
    string guestName;

    void ProvideFeedback() {
        cout << "Please provide your feedback:\n" << endl;
        cout << "Enter your name: ";
        cin >> guestName;
        cout << "Enter your rating (1 to 5): ";
        cin >> rating;
        cout << "Enter your comments: ";
        cin >> comments;
    }

    void DisplayFeedback() {
        cout << "\nFeedback:\n";
        cout << "Guest: " << guestName << endl;
        cout << "Rating: " << rating << "/5" << endl;
        cout << "Comments: " << comments << endl;
    }
};

class Room :public Guest{
public:
    bool booked = false;
    double ratePerDay = 1000.0, days;
    int choice;

    void DisplayRoomMenu() {
        int r_choice;
        system("cls");
        cout << "----------------* ROOMS MENU *-----------------" << endl;
        cout << "1.Rooms" << endl;
        cout << "2.Rates" << endl;
        cout << "3.Rooms Numbering" << endl;
        cout << "-----------------------------------------------" << endl;
        cout << "Please check all the menus completely so that we can proceed further. " << endl;
        cout << "Enter which menu you want to see in detail: ";
        cin >> r_choice;
        switch (r_choice) {
            case 1:
                cout << "----------------* ROOMS CATEGORIZATION *-----------------" << endl;
                cout << "1. Standard Room" << endl;
                cout << "2. Luxury Room" << endl;
                cout << "3. Super Luxury Room" << endl;
                cout << "---------------------------------------------------------" << endl;
                break;
            case 2:
                cout << "----------------* ROOMS RATES *-----------------" << endl;
                cout << "1. Standard Room\t\t" << ratePerDay << " Rs" << endl;
                cout << "2. Luxury Room\t\t\t" << ratePerDay * 2 << " Rs" << endl;
                cout << "3. Super Luxury Room\t\t" << ratePerDay * 3 << " Rs" << endl;
                cout << "------------------------------------------------" << endl;
                break;
            case 3:
                cout << "------------* ROOMS Numbering *-------------" << endl;
                cout << "1---100 ----> Standard Rooms" << endl;
                cout << "101---200 ----> Luxury Rooms" << endl;
                cout << "201---300 ----> Super Luxury Rooms" << endl;
                cout << "--------------------------------------------" << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
        }
    }

    void SelectRoom() {
        cout << "Enter your choice: ";
        cin >> choice;
        cout << "For how many days do you want to book the room: ";
        cin >> days;
        cout << "------------Your inputs have been recorded.---------------" << endl;
    }
};

class Bill : public Room {
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

class HotelStaff : public Bill {
public:
    void SetRoomRates(Room room) {
        int rate;
        cout << "Respected Management! You can set the rate of rooms." << endl;
        cout << "Enter the rate of Standard Room (Rate per day): ";
        cin >> rate;
        room.ratePerDay = rate;
        cout << "You have successfully set the rate of the standard room." << endl;
        cout << "Rate of Luxury room will be twice that of the standard room." << endl;
        cout << "Rate of Super Luxury room will be three times that of the standard room." << endl;
    }
    void otherManagement()
    {
    	string swepName;
    	string swepAge;
    	string swepGender;
    	string awaitName;
    	string awaitAge;
    	string awaitGender;
    	int awaiter;
    	int salery;
    	const int sweeperSalaryPerDay = 700;
		const int awaiterSalaryPerDay = 850;
     int choice;
     A:
     cout <<"\n\n\t\t\t1. For Sweeper Detail\n";
     cout <<"\t\t\t2. For Awaitor Detail\n";
     cout <<"\t\t\t3. For Exit\n";
     cin >> choice;
     switch(choice)
     {
     	case 1:
     		cout <<"Enter The name of Sweeper: ";
     		cin >> swepName;
     		cout <<"Enter the age of Sweeper: ";
     		cin >>swepAge ;
     		cout <<"Enter the Gender of Sweeper: ";
     		cin >> swepGender;
     		cout<<"Sweeper Name: " << swepName << endl;
     		cout<<"Sweeper Age: " << swepAge << endl;
     		cout<<"Sweeper Gender: " << swepGender << endl;
     		salery = sweeperSalaryPerDay * 30;
     		cout <<"Sweeper Total Salary Becomes: " << salery << endl;
     		goto A;
     	case 2:
     			cout <<"Enter The name of Awaitor: ";
     		cin >> awaitName;
     		cout <<"Enter the age of Awaitor: ";
     		cin >>awaitAge ;
     		cout <<"Enter the Gender of Awaitor: ";
     		cin >> awaitGender;
     		cout<<"Awaitor Name: " << swepName << endl;
     		cout<<"Awaitor Age: " << swepAge << endl;
     		cout<<"Awaitor Gender: " << swepGender << endl;
     		salery = awaiterSalaryPerDay * 30;
     		cout <<"Awaitor Total Salary Becomes: " << salery << endl;
     		goto A;
     	default:
     		cout <<"invlid choice";
     		
	 }	
	}
};

class Hotel: public HotelStaff {
public:
       
        void DisplayMainMenu()
	   {
	        cout << "\n\t\t\t\t*************************";
	        cout << "\n\t\t\t\t HOTEL MANAGEMENT SYSTEM";
	        cout << "\n\t\t\t\t      * CUSTOMER MENU *";
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
        
    void CustomerPanel() {
        Bill bill;
        int userChoice;

        do {
            DisplayMainMenu();
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
                    if (!bill.detailsEntered) {
                        cout << "Please enter your personal details first." << endl;
                        bill.GetDetails();
                    }
                    int numRooms;
                    cout << "Enter the number of rooms you want to book: ";
                    cin >> numRooms;
                    for (int i = 0; i < numRooms; ++i) {
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
                    return;
                default:
                    cout << "Invalid choice. Please enter a valid option." << endl;
            }
        } while (userChoice != 8);
    }
    

    void ManagementPanel() {
        HotelStaff staff;
        int mgmt_choice;

        do {
            DisplayManagementMenu();
            cin >> mgmt_choice;
            system("cls");

            switch (mgmt_choice) {
                case 1:
                    staff.SetRoomRates(staff);
                    break;
                case 2:
                    staff.otherManagement();
                    break;
                case 3:
                    cout << "Thank you for using our hotel management system. Goodbye!" << endl;
                    return;
                default:
                    cout << "Invalid choice. Please enter a valid option." << endl;
            }
        } while (mgmt_choice != 3);
    }

    void DisplayManagementMenu() {
        cout << "\n\t\t\t\t*************************";
        cout << "\n\t\t\t\t HOTEL MANAGEMENT SYSTEM";
        cout << "\n\t\t\t\t   * MANAGEMENT MENU *";
        cout << "\n\t\t\t\t*************************" << endl;
        cout << "\t\t\tWelcome to the management panel." << endl;
        cout << "\t\t\t1. Set Room Rates" << endl;
        cout << "\t\t\t2. Other Management Option" << endl;
        cout << "\t\t\t3. Exit Management Panel" << endl;
        cout << "\t\t\tPress respective keys to perform the corresponding action." << endl;
    }


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
    int main_choice;
    do {
        cout << "\n\t\t\t\t*************************";
        cout << "\n\t\t\t\t HOTEL MANAGEMENT SYSTEM";
        cout << "\n\t\t\t\t      * MAIN MENU *";
        cout << "\n\t\t\t\t*************************" << endl;
        cout << "\t\t\tWelcome to the hotel management system." << endl;
        cout << "\t\t\t1. For Customer Panel" << endl;
        cout << "\t\t\t2. For Management Panel" << endl;
        cout << "\t\t\t3. Exit" << endl;
        cout << "\t\t\tPress respective keys to enter into the respective panel." << endl;
        cin >> main_choice;
        system("cls");

        switch (main_choice) {
            case 1:
                hotel.CustomerPanel();
                break;
            case 2:
                hotel.ManagementPanel();
                break;
            case 3:
            	cout <<"Thank you for coming my hotel.....\n";
            	exit(0);
            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
        }
    } while (main_choice != 3);

    return 0;
}
