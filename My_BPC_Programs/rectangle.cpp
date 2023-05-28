#include <iostream>

int main() {
    double length, width;
    
    // Get the length and width of the rectangle from the user
    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;
    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;
    
    // Calculate the area of the rectangle
    double area = length * width;
    
    // Print the calculated area
    std::cout << "The area of the rectangle is: " << area << std::endl;
    
    return 0;
}
