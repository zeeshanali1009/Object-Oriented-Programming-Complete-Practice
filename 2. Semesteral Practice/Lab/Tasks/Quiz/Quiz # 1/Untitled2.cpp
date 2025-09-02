#include <iostream>
using namespace std;
class Instrument {
private:
    string brand;
    int price;
    public :
    void setBrand(string b) {
        brand = b;
    }

    string getBrand() {
        return brand;
    }

    void setPrice(int p) {
        price = p;
    }

    int getPrice()
	{
        return price;
    }
};

class Guitar : public Instrument 
{
private:
    int numberOfStrings;
    string typeOfGuitar;

public:
    void setNumberOfStrings(int n) 
	{
        numberOfStrings = n;
    }

    int getNumberOfStrings() 
	{
        return numberOfStrings;
    }

    void setTypeOfGuitar(string t) 
	{
        typeOfGuitar = t;
    }
    string getTypeOfGuitar()
	{	
        return typeOfGuitar;
    }
    void Dispay ()
    {
    	cout << getBrand() << endl;
    	cout << getPrice() << endl;
    	cout <<  getTypeOfGuitar() << endl;
    	cout  << getNumberOfStrings() << endl;
	}
};
int main() {
    Instrument I;
    I.setBrand("Brand");
    I.setPrice(100);

    Guitar G;
    G.setBrand("Guitar Brand");
    G.setPrice(500);
    G.setNumberOfStrings(6);
    G.setTypeOfGuitar("Guitar Type");
    G.Dispay();
    return 0;
}
