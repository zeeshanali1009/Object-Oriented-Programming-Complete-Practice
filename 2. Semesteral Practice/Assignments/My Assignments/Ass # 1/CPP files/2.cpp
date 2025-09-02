#include <iostream>
#include <string>
using namespace std;

class romanType
{
    private:
        string romanNumeral;    // the Roman numeral
        int decimalNum;         // the decimal equivalent
    public:
        romanType(string rn)
		{// constructor to set Roman numeral
            romanNumeral = rn;
            decimalNum = romanToDecimal(rn);
        }
        void printRomanNumeral()
		{ // print Roman numeral
            cout << "Roman numeral: " << romanNumeral << endl;
        }
        void printDecimalNum()
		{ // print decimal number
            cout << "Decimal number: " << decimalNum << endl;
        }
    private:
        int romanToDecimal(string rn)
		{ // convert Roman numeral to decimal number
            int decimal = 0;
            for (int i = 0; i < rn.length(); i++)
			{
                if (rn[i] == 'M')
				{
                    decimal += 1000;
                }
                else if (rn[i] == 'D')
				{
                    decimal += 500;
                }
                else if (rn[i] == 'C') 
				{
                    if (rn[i+1] == 'M')
					{
                        decimal += 900;
                        i++;
                    }
                	else if (rn[i+1] == 'D')
					{
                	    decimal += 400;
                	    i++;
                	}
                	else
					{
                	    decimal += 100;
                	}
                }
                else if (rn[i] == 'L')
				{
                    decimal += 50;
                }
                else if (rn[i] == 'X')
				{
                    if (rn[i+1] == 'C')
					{
                        decimal += 90;
                        i++;
                    }
                    else if (rn[i+1] == 'L')
					{
                        decimal += 40;
                        i++;
                    }
                    else {
                        decimal += 10;
                    }
                }
                else if (rn[i] == 'V')
				{
                    decimal += 5;
                }
                else if (rn[i] == 'I')
				{
                    if (rn[i+1] == 'X')
					{
                        decimal += 9;
                        i++;
                    }
                    else if (rn[i+1] == 'V')
					{
                        decimal += 4;
                        i++;
                    }
                    else
					{
                        decimal += 1;
                    }
                }
            }
            return decimal;
        }
};

int main()
{
    string rn;
    cout << "Enter a Roman numeral: ";
    cin >> rn;
    romanType roman(rn);
    roman.printRomanNumeral();
    roman.printDecimalNum();
    return 0;
}
