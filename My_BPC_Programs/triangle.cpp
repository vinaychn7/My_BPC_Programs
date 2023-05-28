#include <iostream>
using namespace std;

int main() {
    double base, height, area;

    // Read base and height from the user
    cout << "Enter the base of the triangle: ";
    cin >> base;

    cout << "Enter the height of the triangle: ";
    cin >> height;

    // Calculate the area of the triangle
    area = 0.5 * base * height;

    // Print the area of the triangle
    cout << "The area of the triangle is: " << area << endl;

    return 0;
}
