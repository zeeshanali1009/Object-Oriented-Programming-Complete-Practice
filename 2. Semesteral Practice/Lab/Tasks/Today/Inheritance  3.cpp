#include <iostream>
using namespace std;

class Vehicle {
public:
    Vehicle() {
        cout << "Your object is a vehicle." << endl;
    }
};

class FlyingVehicle : public Vehicle {
public:
    FlyingVehicle() {
        cout << "Your object is a flying vehicle." << endl;
    }
};

class PassengerVehicle : public Vehicle {
public:
    PassengerVehicle() {
        cout << "Your object is a passenger vehicle." << endl;
    }
};

class Bus : public PassengerVehicle {
public:
    Bus() {
        cout << "Your object is a bus vehicle." << endl;
    }
};

class Truck : public PassengerVehicle {
public:
    Truck() {
        cout << "Your object is a truck vehicle." << endl;
    }
};

int main() {
    Bus myBus;
    cout << "-----------------------" << endl;
    
    Truck myTruck;
    
    return 0;
}

