#include <iostream>
#include <string>

using namespace std;

class IceCream {
private:
    int basePrice;
    string flavor;
    int numScoops;
    bool hasWafer;

public:
    IceCream(int price, string _flavor, int scoops) {
        basePrice = price;
        flavor = _flavor;
        numScoops = scoops;
        hasWafer = false;
    }

    void addWafer() {
        hasWafer = true;
    }

    int calculatePrice() {
        int totalPrice = numScoops * basePrice;
        if (hasWafer) {
            totalPrice += 10;
        }
        return totalPrice;
    }

    void displayOrder() {
        cout << "\nOrder Summary:" << endl;
        cout << "Flavor: " << flavor << endl;
        cout << "Number of scoops: " << numScoops << endl;
        cout << "Vanilla wafer: ";
        if (hasWafer) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
        cout << "Total Amount: Rs " << calculatePrice() << endl;
    }
};

int main() {
    cout << "Welcome to LeCream Ice Cream Vendor!" << endl;
    cout << "=====================================" << endl;

    int choice;
    do {
        cout << "\nMenu:" << endl;
        cout << "1. Flavored Ice Cream" << endl;
        cout << "2. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
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

                if (flavorChoice < 1 || flavorChoice > 7) {
                    cout << "Invalid flavor choice." << endl;
                    continue;
                }

                int numScoops;
                cout << "Enter the number of scoops (2 or 3): ";
                cin >> numScoops;

                if (numScoops < 2 || numScoops > 3) {
                    cout << "Invalid number of scoops. Exiting." << endl;
                    continue;
                }

                string flavors[] = {"Chocolate", "Vanilla", "Strawberry", "Mango", "Tutti Fruit", "Almond Crunch", "Coffee"};
                int basePrice;

                if (numScoops == 2) {
                    if (flavorChoice == 1) {
                        basePrice = 120;
                    } else {
                        basePrice = 100;
                    }
                } else {
                    if (flavorChoice == 1) {
                        basePrice = 180;
                    } else {
                        basePrice = 150;
                    }
                }

                IceCream iceCream(basePrice, flavors[flavorChoice - 1], numScoops);

                char waferChoice;
                cout << "Do you want to add a vanilla wafer? (y/n): ";
                cin >> waferChoice;

                if (waferChoice == 'y' || waferChoice == 'Y') {
                    iceCream.addWafer();
                }

                iceCream.displayOrder();
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

