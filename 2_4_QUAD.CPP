//solving quadratic equation
#include<iostream>
#include<math.h>

using namespace std;
int main()
{
	int a, b, c, d, x1, x2, rp, ip;
	cout << "SOLVING QUADRATIC EQUATION" << endl;
	cout << "enter a b and c";
	cin >> a >> b >> c;
	d = ((b * b) - (4 * a * c));
	if (d > 0)
	{
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		cout << x1 << endl << x2;
	}
	else if (d == 0)
	{
		x1 = x2 = -b / (2 * a);
		cout << x1 << endl << x2;
	}
	else
	{
		cout << "no real roots";
		rp = -b / (2 * a);
		ip = sqrt(-d) / (2 * a);
		cout << rp << "+/-" << ip << "i";
	}
	return 0;
}