#include <iostream>

using namespace std;

class Rectangle {
   public:
    int length;
    int width;

    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    int area() {
        return l * w;
    }
};

class Circle {
   public:
    int radius;

    Circle(int r) {
        radius = r;
    }

   private:
    float area() {
        return 3.14 * radius * radius;
    }
};

int main() {
    Rectangle r(10, 15);
    Circle c(10);

    cout << "area of the circle: " << c.area() << endl;
    cout << "area of a rectangle: " << r.area() << endl;
}