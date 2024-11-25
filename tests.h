#ifndef TESTS_H
#define TESTS_H

#include <QObject>

class tests: public QObject
{
    Q_OBJECT
public:
    explicit tests(QObject *parent = 0);

private slots:
    void testAddition();
    void testSubtraction();
    void testMultiplication();
    void testDivision();
    void testPercentage();
    void testPower();
    void testLogarithm();
    void testFactorial();
};

#endif // TESTS_H
