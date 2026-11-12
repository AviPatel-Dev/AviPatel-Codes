#include <stdio.h>
#include <math.h>
int main()
{
    float x1, y1, x2, y2, distance;
    // Input coordinates
    printf("Enter the coordinates of first point (x1 y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Enter the coordinates of second point (x2 y2): ");
    scanf("%f %f", &x2, &y2);
    // Calculate straight-line distance using distance formula
    distance = sqrt( (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1) );
    // Display result
    printf("The distance between (%.2f, %.2f) and (%.2f, %.2f) is: %.2f\n", x1, 
y1, x2, y2, distance);
    return 0;
}