#include "complex.h"

Complex::Complex()
{
    realPart = 0;
    imaginaryPart = 0;
}
赵凯
Complex::Complex(double real, double imaginary)
    :realPart(0),imaginaryPart(0)
{
    realPart = real;
    imaginaryPart = imaginary;
}

Complex::Complex(double real)
    :realPart(0)
{
    realPart = real;
    imaginaryPart = 0;
}

 ostream &operator <<( ostream &output,const Complex &right)
{
    output << '(' << right.realPart << ',' << right.imaginaryPart << ')' ;
    return output;
}

istream &operator >>(istream &input,Complex &right)
{
    char a;
    input >> right.realPart >> a >> right.imaginaryPart;
    return input;
}

Complex Complex::Add(const Complex &left, const Complex &right)
{
    Complex sum;
    sum.realPart = left.realPart+right.realPart;
    sum.imaginaryPart = left.imaginaryPart+right.imaginaryPart;
    return sum;
}

const Complex &Complex::operator+(const Complex &right)
{
    Complex sum;
    sum.realPart = this->realPart +right.realPart;
    sum.imaginaryPart = this->imaginaryPart + right.imaginaryPart;
    return sum;
}

Complex Complex::subtraction(const Complex &left, const Complex &right)
{
    Complex sub;
    sub.realPart = left.realPart - right.realPart;
    sub.imaginaryPart = left.imaginaryPart - right.imaginaryPart;
    return sub;
}

const Complex &Complex::operator -(const Complex &right)
{
    Complex sub;
    sub.realPart = this->realPart - right.realPart;
    sub.imaginaryPart = this->imaginaryPart - right.imaginaryPart;
    return sub;
}

Complex Complex::multiplication(const Complex &left, const Complex &right)
{
    Complex mul;
    mul.realPart = (left.realPart * right.realPart) - (left.imaginaryPart * right.imaginaryPart);
    mul.imaginaryPart = (left.realPart * right.imaginaryPart) + (left.imaginaryPart * right.realPart);
    return mul;
}

Complex &Complex::operator *(const Complex &right)
{
    Complex mul;
    mul.realPart = (this->realPart * right.realPart) - (this->imaginaryPart * right.imaginaryPart);
    mul.imaginaryPart = (this->realPart * right.imaginaryPart) + (this->imaginaryPart * right.realPart);
    return mul;
}

Complex Complex::division(const Complex &left, const Complex &right)
{
    Complex div;
    double denominator = right.realPart * right.realPart + right.imaginaryPart * right.imaginaryPart;
    div.realPart = (left.realPart * right.realPart + left.imaginaryPart * right.imaginaryPart) / (denominator);
    div.imaginaryPart = (left.imaginaryPart * right.realPart - left.realPart * right.imaginaryPart) / (denominator);
    return div;
}

Complex &Complex:: operator/(const Complex &right)
{
    Complex div;
    double denominator = right.realPart * right.realPart + right.imaginaryPart * right.imaginaryPart;
    div.realPart = (this->realPart * right.realPart + this->imaginaryPart * right.imaginaryPart) / (denominator);
    div.imaginaryPart = (this->imaginaryPart * right.realPart - this->realPart * right.imaginaryPart) / (denominator);
    return div;
}
void Complex::print(const Complex &right)
{
    cout << '(' << right.realPart <<',' << right.imaginaryPart << ')' ;
}
