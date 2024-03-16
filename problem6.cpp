/*6.
Write a program to print the area of a rectangle by creating a class named 'Area' having two
functions. First function named as 'setDim' takes the length and breadth of the rectangle as
parameters and the second function named as 'getArea' returns the area of the rectangle. Length and
breadth of the rectangle are entered through keyboard.*/

#include <iostream>

using namespace std;

class Area {
private:
    double length;
    double breadth;

public:
    void setDim(double len, double brt) {
        length = len;
        breadth = brt;
    }

    
    double getArea() {
        return length * breadth;
    }
};

int main() {
    Area rect;

    double len, brt;
    cout << "Enter length of the rectangle: ";
    cin >> len;
    cout << "Enter breadth of the rectangle: ";
    cin >> brt;

    rect.setDim(len, brt);
    cout << "Area of the rectangle: " << rect.getArea();

    return 0;
}
