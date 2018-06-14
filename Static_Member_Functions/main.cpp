#include <iostream>
using namespace std;

class Circle {
    private:
        static int count;
        double radius; //Radius of a circle
    public:
        // Constructor definition
        Circle(double r = 1.0) {
            radius = r;
            // Increase every time object is created
            count++;
        }
        double getArea() {
            return 3.14 * radius * radius;
        }
        static int getCount() {
            return count;
        }
};

int Circle::count = 0;

int main() {
    Circle c1(3.3);
    Circle c2(4.5);

    cout << "Total objects: " << Circle::getCount() << endl;

    return 0;
}
