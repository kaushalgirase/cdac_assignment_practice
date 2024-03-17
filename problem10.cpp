/*Write a program to print the volume of a box by creating a class named 'Volume' with an
initialization list to initialize its length, breadth and height. (just to make you familiar with
initialization lists)*/


#include <iostream>
using namespace std;

class Volume {
private:
    int length;
    int breadth;
    int height;

public:
  
    Volume(int len, int brt, int hgt) : length(len), breadth(brt), height(hgt) {}

    int calculateVolume() 
    {
        return length * breadth * height;
    }
};

int main() {
    int len, brt, hgt;
    cout << "Enter length of the box: ";
    cin >> len;
    cout << "Enter breadth of the box: ";
    cin >> brt;
    cout << "Enter height of the box: ";
    cin >> hgt;

    Volume box(len, brt, hgt);

    cout << "Volume of the box: " << box.calculateVolume();

    return 0;
}
