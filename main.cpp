#include <QCoreApplication>
#include <QtTest/QTest>
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <QDebug>

#include "calculator.h"
#include "tests.h"

int main(int argc, char *argv[])
{
    //freopen("testing.log", "w", stdout);
    QCoreApplication a(argc, argv);
    QTest::qExec(new tests, argc, argv);
    return a.exec();
}
