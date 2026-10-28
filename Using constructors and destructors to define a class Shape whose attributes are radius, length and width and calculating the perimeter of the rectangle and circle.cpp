#include <iostream>
#include <cmath>

using namespace std;

class Shape {
private:
    double radius;
    double length;
    double width;

public:
    // using constructor for circle using radius
    Shape(double r) : radius(r), length(0), width(0) {
        cout << "Circle created with radius: " << radius << endl;
    }

    // using constructor for rectangle using length and width
    Shape(double l, double w) : length(l), width(w), radius(0) {
        cout << "Rectangle created with length: " << length << " and width: " << width << endl;
    }

    // using destructor to destoy the shape 
    ~Shape() {
        cout << "Shape object destroyed." << endl;
    }

    // calculating the perimeter of a circle
    double calculateCirclePerimeter() const {
        if (radius > 0) {
            return 2 * M_PI * radius;
        } else {
            cout << "Invalid radius for circle." << endl;
            return 0;
        }
    }

    // calculating the perimeter of a rectangle
    double calculateRectanglePerimeter() const {
        if (length > 0 && width > 0) {
            return 2 * (length + width);
        } else {
            cout << "Invalid length or width for rectangle." << endl;
            return 0;
        }
    }
};

int main() {
    // creating a circle object with radius 5
    Shape circle(5);
    cout << "Perimeter of the circle: " << circle.calculateCirclePerimeter() << endl;

    // creating a rectangle object with length 4 and width 6
    Shape rectangle(4, 6);
    cout << "Perimeter of the rectangle: " << rectangle.calculateRectanglePerimeter() << endl;

    return 0;
}
