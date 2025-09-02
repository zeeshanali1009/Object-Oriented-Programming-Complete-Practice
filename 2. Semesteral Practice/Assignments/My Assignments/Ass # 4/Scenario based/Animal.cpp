#include <iostream>
#include <string>
using namespace std;

class Animal {
protected:
    string name;

public:
    Animal( string n) : name(n) {}

    virtual void makeSound()  = 0; 

    virtual void move()  {
        cout << name << " is moving." << endl;
    }
};

class Dog : public Animal {
public:
    Dog( string n) : Animal(n) {}

    void makeSound()  {
        cout << name << " says Woof Woof!" << endl;
    }

    void move()  {
        cout << name << " is walking." << endl;
    }
};

class Cat : public Animal {
public:
    Cat( string n) : Animal(n) {}

    void makeSound()  {
        cout << name << " says Meow Meow!" << endl;
    }
};

class Bird : public Animal {
public:
    Bird(const string n) : Animal(n) {}

    void makeSound()  {
        cout << name << " chirps." << endl;
    }

    void move()   {
        cout << name << " is flying." << endl;
    }
};

int main() {
    Dog dog("Dog");
    Cat cat("Cat");
    Bird bird("Bird");

    Animal* animals;
    animals = &dog ;
    animals->makeSound();
    animals = &cat ;
    animals->makeSound();
    animals = &bird ;
    animals->makeSound();



    return 0;
}

