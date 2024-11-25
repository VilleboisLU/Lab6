#include <QtTest/QTest>
#include "tests.h"
#include "calculator.h"

tests::tests(QObject *parent):
    QObject(parent)
{
}

void tests::testAddition()
{
    QCOMPARE(addition(1, 20), 21);
    QCOMPARE(addition(-1, -20), -21);
    QCOMPARE(addition(0.7, 20.8), 21.5);
}

void tests::testSubtraction()
{
    QCOMPARE(subtraction(1, 20), -19);
    QCOMPARE(subtraction(-1, -20), 19);
    QCOMPARE(subtraction(0.7, 20.8), -20.1);
}

void tests::testMultiplication()
{
    QCOMPARE(multiplication(1, 20), 20);
    QCOMPARE(multiplication(-1, -20), 20);
    QCOMPARE(multiplication(0, 20), 0);
    QCOMPARE(multiplication(20, 0.5), 10);
}

void tests::testDivision()
{
    QCOMPARE(division(1, 20), 0.05);
    QCOMPARE(division(-1, -20), 0.05);
    QVERIFY_EXCEPTION_THROWN(division(19, 0), std::runtime_error);
    QCOMPARE(division(1, 0.2), 5);
    QCOMPARE(division(0, 0.2), 0);
}

void tests::testPercentage()
{
    QCOMPARE(percentage(1, 20), 0.2);
    QCOMPARE(percentage(-1, 20), -0.2);
    QCOMPARE(percentage(100, 0), 0);
    QCOMPARE(percentage(1, 100), 1);
    QCOMPARE(percentage(1000, 0.1), 1);
}

void tests::testPower()
{
    QCOMPARE(power(-1, 20), 1);
    QCOMPARE(power(2, -2), 0.25);
    QCOMPARE(power(3, 0), 1);
    QVERIFY_EXCEPTION_THROWN(power(0, -1), std::runtime_error);
    QVERIFY(std::isnan(power(-1, 0.5)));
}

void tests::testLogarithm()
{
    QCOMPARE(logarithm(exp(5)), 5);
    QCOMPARE(logarithm(1), 0);
    QVERIFY_EXCEPTION_THROWN(logarithm(-1), std::runtime_error);
}

void tests::testFactorial()
{
    QCOMPARE(factorial(3), 6);
    QCOMPARE(factorial(0), 1);
    QVERIFY_EXCEPTION_THROWN(factorial(-1), std::runtime_error);
}
