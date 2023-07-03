#include <stdio.h>

void computeArea(float radius, float *result)
{
    *result = 3.142 * radius * radius; // formula of calculating the area
}

int main()
{
    float radius, area;

    printf("Enter the radius of a circle: ");
    scanf("%f", &radius);

    computeArea(radius, &area); // passing the radius by value and area by reference.

    printf("The area of the circle is: %.2f\n", area);

    return 0;
}