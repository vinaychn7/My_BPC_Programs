#include <stdio.h>

#define PI 3.14159

int main() {
    double radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    // Calculate the area of the circle
    area = PI * radius * radius;

    printf("The area of the circle is: %.2lf\n", area);

    return 0;
}
