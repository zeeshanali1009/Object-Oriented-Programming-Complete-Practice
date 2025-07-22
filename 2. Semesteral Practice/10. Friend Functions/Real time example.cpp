/*Real time example of the friend functions.
I am going into the sports field */
#include <iostream>
using namespace std;

class Babar;
class Rizwan;
class Shaheen;
class Hassan {
    int Average;
    int Matches ;
public:
    void set(int i) {
        Average = i;
    }
      void set1(int i) {
        Matches = i;
    }
    friend void max(Babar,Rizwan ,Shaheen , Hassan );
};

class Rizwan {
    int Average;
    int Matches ;
public:
    void set(int i) {
        Average = i;
    }
    void set1(int i) {
        Matches = i;
    }
    friend void max(Babar,Rizwan ,Shaheen , Hassan );
};
class Shaheen {
    int Average;
    int Matches ;
public:
    void set(int i) {
        Average = i;
    }
    void set1(int i) {
        Matches = i;
    }
    friend void max(Babar,Rizwan ,Shaheen , Hassan );
};
class Babar {
    int Average;
    int Matches ;
public:
    void set(int i) {
        Average = i;
    }
    void set1(int i) {
        Matches = i;
    }
    friend void max(Babar,Rizwan ,Shaheen , Hassan );
};

void max(Babar b, Rizwan r , Shaheen s , Hassan h) {
	cout << "Batsmen Case " << endl;
    if (b.Average > r.Average ) {
        cout << "Average of Babar is greater then Rizwan" << endl;
    } else {
        cout << "Average of Babar is less then Rizwan" << endl;
    }
     if (b.Matches > r.Matches ) {
        cout << "Matches of Babar is greater then Rizwan" << endl;
    } else {
        cout << "Matches of Babar is less then Rizwan" << endl;
    }
    cout << "\n\nBowler Case " << endl;
        if (s.Average > h.Average ) {
        cout << "Average of Shaheen is greater then Hassan" << endl;
    } else {
        cout << "Average of Hassan is less then Hassan" << endl;
    }
     if (s.Matches > h.Matches ) {
        cout << "Matches of Shaheen is greater then Rizwan" << endl;
    } else {
        cout << "Matches of Hassan is less then Rizwan" << endl;
    }
    
}

int main() {
    Babar  b;
    Rizwan r ;
    Shaheen s;
    Hassan h;
    b.set(12);
    b.set1(22);
    r.set(34);
    r.set1(25);
    s.set(67);
    s.set1(34);
    h.set(154);
    h.set1(89);
    max(b,r,s,h);
    cout << "\n\nCompiled by Zeeshan Ali" << endl;
    return 0;
}

