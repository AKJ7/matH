//
// Created by hp on 20.04.19.
//

#ifndef MATH_MAT_H
#define MATH_MAT_H


#include <math.h>
#include <stdio.h>

// TODO: Find a way to destroy statically allocated array space

extern int factorial(int n)
{
    return n == 1 ? 1 : n * factorial(n - 1);
}

extern double hoerner(int n, double a[], double x)
{
    return n == 0 ? *a : a[n--]  + x * hoerner(n, a, x);
}

extern double polEval(int n, double a[], double x)
{
    return n == 0 ? *a : (*a) * std::pow(x, n) + polEval(n - 1, ++a, x) ;
}

extern double* polDerivative(int grad, double koeff[])
{
    static double* a = new double[grad];
    for (int counter = 0; counter <= grad; counter++)
    {
        a[counter] = koeff[counter] * (grad - counter);
    }
    return a;
}

extern double* polIntegral(int grad, double koeff[], double start)
{
    static double* a = new double[grad + 1];
    for (int counter = 0; counter <= grad; counter++)
    {
        a[counter] = grad != counter ? koeff[counter] / (grad + 1 - counter) : koeff[counter];
    }
    a[grad + 1] = start;
    return a;
}


#endif //MATH_MAT_H
