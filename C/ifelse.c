#include <stdio.h>
#include <math.h>
int main()
{
    float marks;
    // Input marks
    printf("Enter the student's marks: ");
    scanf("%f", &marks);
    int m = (int)round(marks);
    // Determine grade based on marks
    if (m >= 90)
    {
        printf("Grade: A\n");
    }
    else if (m >= 75)
    {
        printf("Grade: B\n");
    }
    else if (m >= 60)
    {
        printf("Grade: C\n");
    }
    else if (m >= 50)
    {
        printf("Grade: D\n");
    }
    else
    {
        printf("Grade: F\n");
    }
    return 0;
}