#include <iostream>
using namespace std;

class City 
{
	public :
    int population;
public:
    City(int x) : population(x)
    {
    }

    virtual void display() 
    {
        cout << "I am the city. My population is " << population << endl;
    }
};

class Lahore : public City
{
public:
    Lahore(int y) : City(y)
    {
    } 
          
    void display() 
    {
        cout << "I am Lahore city. My population  is " << population << endl;
    }
};

class Karachi : public City
{
public:
    Karachi(int y) : City(y)
    {
    } 
          
    void display()
    {
        cout << "I am Karachi city. My population is " << population << endl;
    }
};

int main()
{
    City* c;
    Lahore l(200000); // Provide an age value here
    c = &l;
    c->display();

    Karachi k(1800000); // Provide an age value here
    c = &k;
    c->display();

    return 0;
}

