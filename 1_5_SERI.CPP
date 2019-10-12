#include<iostream>
#include<cmath>

using namespace std;
int main()
{
	float n, x, sum = 0, fac1, fac2, f1, f2, i, j, k, l, a, b;
	cout << "Series question" << endl;
	cout << "1- x/2!+ x^2/3!-...x^n/n!)";
	cout << endl;
	cout << "enter x and n(even)";
	cin >> x >> n;
	for (i = 0, j = 1; i < n && j < n; i++, j++)
	{
		fac1 = 1; fac2 = 1;
		for (k = i + 1; k >= 1; k--)
		{
			fac1 = fac1 * k;
		}
		for (l = j + 1; l >= 1; l--)
		{
			fac2 = fac2 * l;
		}
		if (i == 0) f1 = 1;
		else {
			a = pow(x, i);
			f1 = a / fac1;
		}
		b = pow(x, j);
		f2 = b / fac2;
		sum = sum + (f1 - f2);
	}
	cout << sum;
	return 0;
}