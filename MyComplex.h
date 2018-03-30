#pragma once
#include<iostream>
#include<cmath>
using namespace std;

class MyComplex
{
private:
	double Re, Im;
public:
	MyComplex (double Im = 0, double Re = 0);
	~MyComplex ();
	double getIm ();
	int setIm (double Im);
	double getRe ();
	int setRe (double Re);

	MyComplex operator+(MyComplex mc);
	MyComplex operator-(MyComplex mc);

	friend MyComplex operator+(double d, MyComplex mc);
	friend MyComplex operator+(MyComplex mc, double d);

	friend MyComplex operator-(double d, MyComplex mc);
	friend MyComplex operator-(MyComplex mc, double d);

	MyComplex operator*(MyComplex mc);
	MyComplex operator/(MyComplex mc);

	friend MyComplex operator*(double d, MyComplex mc);
	friend MyComplex operator*(MyComplex mc, double d);

	friend MyComplex operator/(double d, MyComplex mc);
	friend MyComplex operator/(MyComplex mc, double d);

	friend ostream&  operator << (ostream &s, MyComplex &mc);
	friend istream&  operator >> (istream &s, MyComplex &mc);

	double abc ();
};

