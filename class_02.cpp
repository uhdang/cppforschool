#include <iostream>

using namespace std;

class Circle {
    private:
        double radius;

    public:
        Circle() { // default constructor
            radius = 0;
        }
        
        Circle(double r) {
            radius = r; // parameterized constructor
        }

        Circle(Circle &t) {
            radius = t.radius; // copy constructor
        }

        void setRadius(double r) { // function to set data
            radius = r;
        }

        double getArea() {
            return 3.14 * radius * radius;
        }
        ~Circle() {} // destructor
};

int main() {
    Circle c1; // default constructor invoked
    Circle c2(2.5); // parameterized constructor invoked
    Circle c3(c2); // copy constructor invoked
    cout << c1.getArea() << endl;
    cout << c2.getArea() << endl;
    cout << c3.getArea() << "\n";
    return 0;
}
