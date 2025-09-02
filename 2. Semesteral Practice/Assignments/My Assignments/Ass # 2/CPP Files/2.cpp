#include <iostream>
#include <string>
using namespace std;

class Package
{
protected:
    string senderName;
    string senderAddress;
    string senderCity;
    string senderState;
    string senderZIP;

    string recipientName;
    string recipientAddress;
    string recipientCity;
    string recipientState;
    string recipientZIP;

    double weight;
    double costPerOunce;

public:
    Package(const string& senderName, const string& senderAddress, const string& senderCity, const string& senderState, const string& senderZIP,
            const string& recipientName, const string& recipientAddress, const string& recipientCity, const string& recipientState, const string& recipientZIP,
            double weight, double costPerOunce)
        : senderName(senderName), senderAddress(senderAddress), senderCity(senderCity), senderState(senderState), senderZIP(senderZIP),
          recipientName(recipientName), recipientAddress(recipientAddress), recipientCity(recipientCity), recipientState(recipientState), recipientZIP(recipientZIP),
          weight(weight), costPerOunce(costPerOunce)
    {
        if (weight < 0.0)
            this->weight = 0.0;
        if (costPerOunce < 0.0)
            this->costPerOunce = 0.0;
    }

    double calculateCost() const
    {
        return weight * costPerOunce;
    }
};

class TwoDayPackage : public Package
{
private:
    double flatFee;

public:
    TwoDayPackage(const string& senderName, const string& senderAddress, const string& senderCity, const string& senderState, const string& senderZIP,
                  const string& recipientName, const string& recipientAddress, const string& recipientCity, const string& recipientState, const string& recipientZIP,
                  double weight, double costPerOunce, double flatFee)
        : Package(senderName, senderAddress, senderCity, senderState, senderZIP, recipientName, recipientAddress, recipientCity, recipientState, recipientZIP, weight,
		 costPerOunce),
          flatFee(flatFee)
    {
        if (flatFee < 0.0)
            this->flatFee = 0.0;
    }

    double calculateCost() const
    {
        return Package::calculateCost() + flatFee;
    }
};

class OvernightPackage : public Package
{
private:
    double additionalFeePerOunce;

public:
    OvernightPackage(const string& senderName, const string& senderAddress, const string& senderCity, const string& senderState, const string& senderZIP,
                     const string& recipientName, const string& recipientAddress, const string& recipientCity, const string& recipientState, const string& recipientZIP,
                     double weight, double costPerOunce, double additionalFeePerOunce)
        : Package(senderName, senderAddress, senderCity, senderState, senderZIP, recipientName, recipientAddress, recipientCity, recipientState, recipientZIP, weight,
		 costPerOunce),
          additionalFeePerOunce(additionalFeePerOunce)
    {
        if (additionalFeePerOunce < 0.0)
            this->additionalFeePerOunce = 0.0;
    }

    double calculateCost() const
    {
        return Package::calculateCost() + (additionalFeePerOunce * weight);
    }
};

int main()
{
    Package package("Zeeshan", "Superior University", "Lahore", "Punjab", "ZIP",
                    "Ali", "Gold Campus", "Lahore", "Sindh", "ZIP",
                    10.0, 2.5);

    TwoDayPackage twoDayPackage("Zeeshan", "Superior University", "Lahore", "Punjab", "ZIP",
                    "Ali", "Gold Campus", "Lahore", "Sindh", "ZIP",
                                10.0, 2.5, 5.0);
    OvernightPackage overnightPackage("Zeeshan", "Superior University", "Lahore", "Punjab", "ZIP",
                    "Ali", "Gold Campus", "Lahore", "Sindh", "ZIP",
                                      10.0, 2.5, 1.0);

    cout << "Package cost: $" << package.calculateCost() << endl;
    cout << "Two-Day Package cost: $" << twoDayPackage.calculateCost() << endl;
    cout << "Overnight Package cost: $" << overnightPackage.calculateCost() << endl;
    cout << "\nCompiled by Zeeshan Ali " << endl;

    return 0;
}

