#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <math.h>
#include <stdexcept>
#include <QObject>
#include <QCoreApplication>

double addition(double, double);
double subtraction(double, double);
double multiplication(double, double);
double division(double, double);
double percentage(double, double);
double power(double, double);
double logarithm(double);
long factorial(int);

#endif // CALCULATOR_H
