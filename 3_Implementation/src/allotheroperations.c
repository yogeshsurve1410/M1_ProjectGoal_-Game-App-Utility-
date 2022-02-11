
#include"calculator.h"



// Function to calculate log (base e)
void logBasee()
{
    double a;
    printf("Enter a number: ");
    scanf("%lf", &a);
    if(a<=0.0)
    {
    printf("Math Error\n");
    }
    else
    {
    result = log(a);
    printf("\nResult = %lf", result);
    }
}

// Function to calculate log (base 10)
void logBase10()
{
    double a;
    printf("Enter a number: ");
    scanf("%lf", &a);
    if(a<=0.0)
    {
    printf("Math Error\n");
    }
    else
    {
    result = log10(a);
    printf("\nResult = %lf", result);
    }
}

// Function to calculate e^x
void eToPowerX()
{
    double a;
    printf("Enter a number: ");
    scanf("%lf", &a);
    result = exp(a);
    printf("\nResult = %lf", result);
}

// Function to find the Square Root of a Number
void squareRoot()
{
    int n;
    printf("\nEnter a number: ");
    scanf("%d",&n);
    if (n<0)
    {
    printf("Math Error\n");
    }
    else
    {
    result = sqrt(n);
    printf("\nResult = %lf", result);
    }
}

// Function to find the Cube Root of a Number
void cubeRoot()
{
    int n;
    printf("\nEnter a number: ");
    scanf("%d",&n);
    result = cbrt(n);
    printf("\nResult = %lf", result);
}

// Function to find the Power of a Number
void power()
{
    double base, expo;
    printf("Enter a base number: ");
    scanf("%lf", &base);
    printf("Enter an exponent: ");
    scanf("%lf", &expo);
    result = pow(base, expo);
    printf("%.1lf^%.1lf = %.2lf", base, expo, result);
}


// Function to calculate Permutations (nPr)
void npr()
{
    long long n, r;
    printf("\nEnter two numbers: ");
    scanf("%lld%lld", &n, &r);
    if(n>=r && n>0 && r>=0)
    {
    intResult = factorialReturn(n) / factorialReturn(n - r);
    printf("\nResult = %lld", intResult);
    }
    else
    {
    printf("Math Error\n");
    }
}

// Function to calculate Combinations (nCr)
void ncr()
{
    long long n, r;
    printf("\nEnter two numbers: ");
    scanf("%lld %lld", &n, &r);
    if(n>=r && n>0 && r>=0)
    {
    intResult = factorialReturn(n) / (factorialReturn(r) * factorialReturn(n - r));
    printf("\nResult = %lld", intResult);
    }
    else
    {
    printf("Math Error\n");
    }
}

// Function to reset global variables
void clear()
{
    printf("\nOld Data Cleared");
    intResult = 0;
    result = 0;
    k = 0;
}