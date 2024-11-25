#include "calculator.h"

double addition(double a, double b)
{
    return(a + b);
}

double subtraction(double a, double b)
{
    return(a - b);
}

double multiplication(double a, double b)
{
    return(a * b);
}

double division(double a, double b)
{
    if (b == 0)
    {
        throw std::runtime_error("Math error: Attempted to divide by Zero\n");
    }
    return(a / b);
}

double percentage(double a, double b)
{
    return(a * b / 100);
}

double power(double a, double b)
{
    if (a == 0 && b < 0)
    {
        throw std::runtime_error("Math error: Attempted to divide by Zero\n");
    }
    return(pow(a,b));
}

double logarithm(double a)
{
    if (a <= 0)
    {
        throw std::runtime_error("Math error: Attempted to logarithm not positive number\n");
    }
    return(log(a));
}

long factorial(int a)
{
    if (a < 0)
    {
        throw std::runtime_error("Math error: Attempted to factorial of a negative number\n");
    }
    long res = 1;
    if (a == 0)
    {
        return 1;
    }
    else
    {
        res = factorial(a-1) * a;
    }
    return res;
}

