#include"calculator.h"
void addition()
{
    double a, b;
    if(k)
    {
        printf("\nEnter a number: ");
        scanf("%lf", &a);
        result += a;
        printf("\nResult = %lf", result);
    }
    else
    {
        printf("\nEnter two numbers: ");
        scanf("%lf%lf", &a, &b);
        result = a + b;
        printf("\nResult = %lf", result);
    }
}

// Function to subtract numbers
void subtraction()
{
    double a, b;
    if(k)
    {
        printf("\nEnter a number: ");
        scanf("%lf", &a);
        result -= a;
        printf("\nResult = %lf", result);
    }
    else
    {
        printf("\nEnter two numbers: ");
        scanf("%lf%lf", &a, &b);
        result = a - b;
        printf("\nResult = %lf", result);
    }
}

// Function to multiply numbers
void multiplication()
{
    double a, b;
    if(k)
    {
        printf("\nEnter a number: ");
        scanf("%lf", &a);
        result *= a;
        printf("\nResult = %lf", result);
    }
    else
    {
        printf("\nEnter two numbers: ");
        scanf("%lf%lf", &a, &b);
        result = a * b;
        printf("\nResult = %lf",result);
    }
}

// Function to divide numbers
void division()
{
    double a, b;
    if(k)
    {
        printf("\nEnter a number: ");
        scanf("%lf", &a);
        if(a!=0)
        {
        result /= a;
        printf("\nResult = %lf", result);
        }
        else
        {
        printf("Math Error\n");
        }
    }
    else
    {
        printf("\nEnter two numbers: ");
        scanf("%lf%lf", &a, &b);
        if (b!=0)
        {
        result = a / b;
        printf("\nResult = %lf", result);
        }
        else
        {
        printf("Math Error\n");
        }
    }
}

// Function to find remainder
void mod()
{
    long long a, b;
    if(k)
    {
        printf("\nEnter a number: ");
        scanf("%lld", &a);
        intResult %= a;
        printf("\nResult = %d",intResult);
    }
    else
    {
        printf("\nEnter two numbers: ");
        scanf("%lld%lld", &a, &b);
        intResult = a % b;
        printf("\nResult = %lld", intResult);
    }
}

// Function to calculate factorial of a number
void factorial()
{
    long long n, f, i;
    printf("\nEnter a number: ");
    scanf("%lld", &n);
    f = 1;
    for(i = 1; i<=n; i++)
    {
        f = f * i;
    }
    intResult = f;
    printf("\nResult = %lld", intResult);

}
