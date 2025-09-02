#include <iostream>
using namespace std;

class Father 
{
	public :
    int age;
public:
    Father(int x) : age(x)
    {
    }

    virtual void display() 
    {
        cout << "I am the father. My age is " << age << endl;
    }
};

class Son : public Father
{
public:
    Son(int y) : Father(y)
    {
    } 
          
    void display() 
    {
        cout << "I am the son. My age is " << age << endl;
    }
};

class Daughter : public Father
{
public:
    Daughter(int y) : Father(y)
    {
    } 
          
    void display()
    {
        cout << "I am the daughter. My age is " << age << endl;
    }
};

int main()
{
    Father* fath;
    Son son(20); // Provide an age value here
    fath = &son;
    fath->display();

    Daughter dau(18); // Provide an age value here
    fath = &dau;
    fath->display();

    return 0;
}

