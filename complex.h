#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
using namespace std;

class Complex
{
    friend ostream &operator <<( ostream & ,const Complex &);
    friend istream &operator >>( istream & , Complex &);
public:
    Complex();
    Complex(double real,double imaginary);
    explicit Complex(double real);
    double realPart;
    double imaginaryPart;

    static Complex Add(const Complex &left , const Complex &right);
    const Complex &operator +(const Complex &right);

    static Complex subtraction(const Complex &left, const Complex &right);
    const Complex &operator  -(const Complex &right);

    static Complex multiplication(const Complex &left,const Complex &right);
    Complex &operator *(const Complex &right);

    static Complex division(const Complex &left, const Complex &right);
    Complex &operator /(const Complex &right);

    void print(const Complex &right);
};

#endif // COMPLEX_H
