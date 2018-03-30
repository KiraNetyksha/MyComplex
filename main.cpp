#include<iostream>
#include"MyComplex.h"
using namespace std;
int main () {

	MyComplex mc1;
	MyComplex mc2;
	MyComplex mc3;

	cin >> mc1;
	cout << endl;
	cin >> mc2;

	mc3 = 5 + mc1;
	cout << mc3 << endl;

	mc3 = mc2 + 1;
	cout << mc3 << endl;

	double r = mc1.abc ();

	cout << r << endl;
	

	system ("pause");
	return 1;
}