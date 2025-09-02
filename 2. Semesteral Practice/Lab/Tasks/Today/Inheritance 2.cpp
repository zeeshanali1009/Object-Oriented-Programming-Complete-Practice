#include <iostream>
#include <string>
using namespace std;

class LocalPhone {
protected:
    string phone;

public:
    void input_phone() {
        cout << "Enter local phone number: ";
        cin >> phone;
    }

    void display_phone() {
        cout << "Local phone number: " << phone << endl;
    }
};

class NatPhone : public LocalPhone {
private:
    string cityCode;

public:
    void input_nat_phone() {
        input_phone();
        cout << "Enter city code: ";
        cin >> cityCode;
    }

    void display_nat_phone() {
        display_phone();
        cout << "City code: " << cityCode << endl;
    }
};

class IntPhone : public NatPhone {
private:
    string countryCode;

public:
    void input_int_phone() {
        input_nat_phone();
        cout << "Enter country code: ";
        cin >> countryCode;
    }

    void display_int_phone() {
        display_nat_phone();
        cout << "Country code: " << countryCode << endl;
    }
};

int main() {
    IntPhone intPhoneObj;

    cout << "Enter international phone details:" << endl;
    intPhoneObj.input_int_phone();

    cout << "\nDisplaying international phone details:" << endl;
    intPhoneObj.display_int_phone();

    return 0;
}

