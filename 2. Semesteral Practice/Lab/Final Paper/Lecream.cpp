/*Write a c++ program that creates a program for a new ice cream vendor called Lecream.
The management of LeCream has decided that  they are going to sell their ice cream in 7 different
flavors namely chocolate , vanilla ,Strawberry , mango tutti fruit ,almond crunch and coffee .
Carefully design the program by observing the following rules .
Lecream is charging Rs 100 for two scoops and Rs 150 for three scoops hence you will need a function to determine
the number of scoops and based on that the price . if a user enters more then three scoops your program 
should display invalid input and it should exit .
LeCream allows its customers to purchase  a vanilla wafer with their ice cream .
if the customer wants to purchase the wafer he will have to pay an additional  Rs 10
this amount should be added to the total amount payable by the user 
If the customer asks for chocolate flavor then he will  have to pay an additional amount i.e Rs 120 for two scoops
and Rs 180 for three scopes Design a function that will be called if the customer chooses flavored ice cream 
This program should show a menu that asks the customer for his requirement and then displays the final paypal
amount with full details about the flavor, number of scoops and wafer*/
#include <iostream>
#include <string>
using namespace std;
class LeCream {
private:
    int price;
    string flavour;
    int num_of_Scoops;
    bool hasWafer;
public:
    LeCream(int _price, string _flavor, int _scoops) {
        price = _price;
        flavour = _flavor;
        num_of_Scoops = _scoops;
        hasWafer = false;
    }
    void add_Wafer() {
        hasWafer = true;
    }
    int CalculatePrice() {
        int totalPrice = num_of_Scoops * price;
        if (hasWafer) {
            totalPrice += 10;
        }
        return totalPrice;
    }
    void displayOrder() {
        cout << "\nOrder Summary:" << endl;
        cout << "Flavour: " << flavour << endl;
        cout << "Number of scoops: " << num_of_Scoops << endl;
        cout << "Vanilla wafer: ";
        if (hasWafer) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
        cout << "Total Amount: Rs " << CalculatePrice() << endl;
    }
};
int main() {
    cout << "Welcome to LeCream Ice Cream Vendor!" << endl;
    cout << "=====================================" << endl;
    int choice;
    do 
	{
        cout << "\nMenu:" << endl;
        cout << "1. Flavored Ice Cream" << endl;
        cout << "2. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) 
		{
            case 1: 
			{
            cout << "Flavor Options:" << endl;
            cout << "1. Chocolate" << endl;
            cout << "2. Vanilla" << endl;
            cout << "3. Strawberry" << endl;
            cout << "4. Mango" << endl;
            cout << "5. Tutti Fruit" << endl;
            cout << "6. Almond Crunch" << endl;
            cout << "7. Coffee" << endl;
                int flavorChoice;
                cout << "Enter the flavor choice (1-7): ";
                cin >> flavorChoice;
                if (flavorChoice < 1 || flavorChoice > 7) 
				{
                    cout << "Invalid flavor choice." << endl;
                }
                int numScoops;
                cout << "Enter the number of scoops\nYou must select num of scoops 2 or 3" << endl;
                cin >> numScoops;

                if (numScoops < 2 || numScoops > 3) 
				{
                    cout << "Invalid number of scoops.Exiting." << endl;
                }
                string flavors[] = {"Chocolate", "Vanilla", "Strawberry", "Mango", "Tutti Fruit", "Almond Crunch", "Coffee"};
                int basePrice;
                if (flavorChoice == 1)
				{
                if (numScoops == 2)
                     {
                        basePrice = 120;
                     } 
			    else if (numScoops == 3) 
					{
                        basePrice = 180;
                    }
                }
                else {
                if (numScoops == 2)
                     {
                        basePrice = 100;
                     } 
			    else if (numScoops == 3) 
					{
                        basePrice = 150;
                    }
                }
                LeCream leCream(basePrice, flavors[flavorChoice - 1], numScoops);
                char waferChoice;
                cout << "Do you want to add a vanilla wafer?\nEnter Y for Yes and N for No (y/n): ";
                cin >> waferChoice;
                if (waferChoice == 'y' || waferChoice == 'Y') {
                    leCream.add_Wafer();
                }
                leCream.displayOrder();
                break;
            }
            case 2:
                cout << "Thank you for visiting LeCream!" << endl;
                break;
            default:
                cout << "Invalid choice. Please select again." << endl;
        }
    } while (choice != 2);
    return 0;
}


