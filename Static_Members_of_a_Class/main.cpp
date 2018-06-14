#include <iostream>

using namespace std;

class Circle {
    private:
        double radius;
    public:
        static int count;
        Circle(double r = 1.0) {
            radius = r;
            // Increase every time object is created
            count++;
        }
        
        double getArea() {
            return 3.14 * radius * radius;
        }
};

// Initialize static member of class Circle
int Circle::count = 0;

int main() {
    Circle c1(3.3);
    Circle c2(4.5);
    cout << "Total objects: " << Circle::count << "\n";
    return 0;
}
