#include <iostream>
using namespace std;

class Circle {
private:
    double radius;
    double pi;

public:
    // ?? Default Constructor
    Circle() {
        radius = 0.0;
        pi = 3.14159;
    }

    // ?? Parameterized Constructor
    Circle(double r) {
        radius = r;
        pi = 3.14159;
    }

    // ?? Setter (Mutator)
    void setRadius(double r) {
        radius = r;
    }

    // ?? Getter (Accessor)
    double getRadius() {
        return radius;
    }

    // ?? Function to get Area
    double getArea() {
        return pi * radius * radius;
    }

    // ?? Function to get Diameter
    double getDiameter() {
        return 2 * radius;
    }

    // ?? Function to get Circumference
    double getCircumference() {
        return 2 * pi * radius;
    }
};

int main() {
    double r;

    cout << "Enter radius of the circle: ";
    cin >> r;

    // ?? Create object using parameterized constructor
    Circle c(r);

    cout << "\nCircle Details:\n";
    cout << "Radius = " << c.getRadius() << endl;
    cout << "Area = " << c.getArea() << endl;
    cout << "Diameter = " << c.getDiameter() << endl;
    cout << "Circumference = " << c.getCircumference() << endl;

    return 0;
}

