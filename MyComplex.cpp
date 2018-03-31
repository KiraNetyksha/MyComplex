#include "MyComplex.h"

MyComplex::MyComplex (double Re, double Im)
{
	this->Re = Re;
	this->Im = Im;
}

MyComplex::~MyComplex ()
{
}

double MyComplex::getIm ()
{
	return this->Im;
}

int MyComplex::setIm (double Im)
{
	this->Im = Im;
	return 1;
}

double MyComplex::getRe ()
{
	return this->Re;
}

int MyComplex::setRe (double Re)
{
	this->Re = Re;
	return 1;
}

MyComplex MyComplex::operator+(MyComplex mc)
{
	MyComplex mc_res;
	mc_res.setRe (this->Re + mc.getRe ());
	mc_res.setIm (this->Im + mc.getIm ());
	return mc_res;
}

MyComplex MyComplex::operator-(MyComplex mc)
{
	MyComplex mc_res;
	mc_res.setRe (this->Re - mc.getRe ());
	mc_res.setIm (this->Im - mc.getIm ());
	return mc_res;
}

MyComplex MyComplex::operator*(MyComplex mc)
{
	MyComplex mc_res;
	mc_res.setRe ((this->Re * mc.getRe ()) - (this->Im * mc.getIm ()));
	mc_res.setIm ((this->Re * mc.getIm ())+(this->Re * mc.getRe()));
	return mc_res;
}

MyComplex MyComplex::operator/(MyComplex mc)
{
	MyComplex mc_res;
	mc_res.setRe ((this->Re * mc.getRe () + this->Im * mc.getIm ()) / (pow (mc.getRe (), 2) + pow (mc.getIm (), 2)));
	mc_res.setIm ((mc.getRe() * this->Im - mc.getIm() * this->Re) / (pow (mc.getRe (), 2) + pow (mc.getIm (), 2)));
	return mc_res;
}

double MyComplex::abc ()
{
	return sqrt (pow (this->Re, 2) + pow (this->Im, 2));
}

MyComplex operator+(double d, MyComplex mc)
{
	MyComplex mc_res;
	mc_res.setRe (d + mc.getRe ());
	mc_res.setIm (mc.getIm ());
	return mc_res;
}

MyComplex operator+(MyComplex mc, double d)
{
	return d + mc;
}

MyComplex operator-(double d, MyComplex mc)
{
	MyComplex mc_res;
	mc_res.setRe (d - mc.getRe ());
	mc_res.setIm (mc.getIm ());
	return mc_res;
}

MyComplex operator-(MyComplex mc, double d)
{
	return d - mc;
}

MyComplex operator*(double d, MyComplex mc)
{
	MyComplex mc_res;
	mc_res.setRe ((d * mc.getRe ()));
	mc_res.setIm (d * mc.getIm());
	return mc_res;
}

MyComplex operator*(MyComplex mc, double d)
{
	return d * mc;
}

MyComplex operator/(double d, MyComplex mc)
{
	MyComplex mc_res;
	mc_res.setRe (d * mc.getRe () / (pow (mc.getRe (), 2) + pow (mc.getIm (), 2)));
	mc_res.setIm (d * mc.getIm () / (pow (mc.getRe (), 2) + pow (mc.getIm (), 2)));
	return mc_res;
}

MyComplex operator/(MyComplex mc, double d)
{
	return d / mc;
}

ostream & operator<<(ostream & s, MyComplex & mc)
{
	s << mc.getRe () << " + " << mc.getIm () << "i";
	return s;
}

istream & operator>>(istream & s, MyComplex & mc)
{
	double Im, Re;
	cout << "Re = ";
	cin >> Re;
	cout << "Im = ";
	cin >> Im;
	mc.setRe (Re);
	mc.setIm (Im);
	return s;
}
