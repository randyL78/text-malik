// *************************************************************
// Given the length and width of a rectangle, this C++ program
// computers and outputs the perimeter and area of a circle
// *************************************************************

#include <iostream>

using namespace std;

int main() {
    double length;
    double width;
    double area;
    double perimeter;

    cout << "Program to compute and output the perimeter and "
         << "area of a rectangle." << endl;

    length = 6.0;
    width = 4.0;
    perimeter = 2 * (length + width);
    area = length * width;

    cout << "Length = " << length << endl;
    cout << "width = " << width << endl;
    cout << "perimeter = " << perimeter << endl;
    cout << "area" << area << endl;

    return 0;
}
