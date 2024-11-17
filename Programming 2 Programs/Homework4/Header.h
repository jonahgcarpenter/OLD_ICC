//Program 5 - FractionsAddSubtract
//Jonah Carpenter
//CSC 2144 X01
//February 25, 2021
//This program uses classes to create addition and subtraction fractions
//Headerfile

#include <iostream>
using namespace std;

class Rational
{
public:
	int getNumerator() const;
	int getDenominator() const;
	void setNumerator(int);
	void setDenominator(int);
	Rational add(const Rational&) const;
	Rational subtract(const Rational&) const;
	Rational multiply(const Rational&) const;
	Rational divide(const Rational&) const;
	Rational();
	Rational(int, int);
	~Rational();


private:
	int numerator;
	int denominator;

};

istream& operator >> (istream& sin, Rational& rat);
ostream& operator << (ostream& sout, Rational& rat);
Rational operator +(const Rational& rat1, const Rational& rat2);
Rational operator -(const Rational& rat1, const Rational& rat2);
Rational operator *(const Rational& rat1, const Rational& rat2);
Rational operator /(const Rational& rat1, const Rational& rat2);