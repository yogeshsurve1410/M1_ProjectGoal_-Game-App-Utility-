
#include"calculator.h"



// Function to calculate sine of angle in radians
void sine()
{
    double a;
    printf("Enter angle in radians: ");
    scanf("%lf", &a);
    result = sin(a);
    printf("\nResult = %lf", result);
}

// Function to calculate cosine of angle in radians
void cosine()
{
    double a;
    printf("Enter angle in radians: ");
    scanf("%lf", &a);
    result = cos(a);
    printf("\nResult = %lf", result);
}

// Function to calculate tangent of angle in radians
void tangent()
{
    double a;
    printf("Enter angle in radians: ");
    scanf("%lf", &a);
    result = tan(a);
    printf("\nResult = %lf", result);
}

// Function to compute the arc sine(inverse sine) of an argument
void sineInverse()
{
    double n;
    printf("\nEnter a number: ");
    scanf("%lf",&n);
    if(n>1 || n<-1)  // Parameter not in Range
    {
        printf("Not in Range");
    }
    else
    {
        result = asin(n);
        printf("Inverse of sin(%.2f) = %.2lf in radians\n", n, result);

      // converting radians to degree
        result = asin(n)*180/PI;
        printf("Inverse of sin(%.2f) = %.2lf in degrees\n", n, result);
    }
}

// Function to compute the arc cosine(inverse cosine) of an argument
void cosineInverse()
{
    double n;
    printf("\nEnter a number: ");
    scanf("%lf",&n);
    if(n>1 || n<-1)  // Parameter not in Range
    {
        printf("\nNot in Range");
    }
    else
    {
        result = acos(n);
        printf("\nInverse of cos(%.2f) = %.2lf in radians\n", n, result);

      // converting radians to degree
        result = acos(n)*180/PI;
        printf("\nInverse of cos(%.2f) = %.2lf in degrees\n", n, result);
    }
}

// Function to compute the arc tangent(inverse tangent) of an argument
void tangentInverse()
{
    double n;
    printf("\nEnter a number: ");
    scanf("%lf",&n);
    result = atan(n);

    printf("\nInverse of tan(%.2f) = %.2f in radians", n, result);

    // Converting radians to degrees
    result = (result * 180) / PI;
    printf("\nInverse of tan(%.2f) = %.2f in degrees", n, result);
}
