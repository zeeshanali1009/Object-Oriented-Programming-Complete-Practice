// Using operators (like +, -, etc.) with user-defined types (objects).
// Allows intuitive use of operators with objects.
#include <iostream>
using namespace std;
class Complex {
public:
    int real, imag;
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }
    // Overload + operator
    Complex operator + (const Complex& obj) {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};
int main() {
    Complex c1(3, 4), c2(1, 2);
    Complex c3 = c1 + c2;
    cout << "Result of addition: ";
    c3.display();
    return 0;
}
