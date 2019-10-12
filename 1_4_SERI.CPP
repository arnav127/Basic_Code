//lcm of two numbers
#include<iostream>
#include<cmath>

using namespace std;
int main()
{
	float n, x, sum = 1, i, j, p = 1, q, ver;
	cout << "Series question" << endl;
	cout << "1+ x^2/2!+ x^4/4!+...x^n/n!)";
	cout << endl;
	cout << "enter x and n(even)";
	cin >> x >> n;
	for (i = 2; i <= n; i = i + 2)
	{
		p = 1;
		for (j = i; j >= 1; j--)
		{
			p = p * j;
		}
		q = pow(x, i);
		ver = q / p;
		sum = sum + ver;
	} 
	cout << sum;
	return 0;
}