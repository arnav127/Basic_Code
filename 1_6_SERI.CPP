//lcm of two numbers
#include<iostream>
#include<cmath>

using namespace std;
int main()
{
	float n, sum = 0, i, j;
	cout << "Series question" << endl;
	cout << "1-2+3-4.....n (where n is last number of series)";
	cout << endl;
	cout << "enter n";
	cin >> n;
	for (i = 1, j = 2; i <= n || j <= n; i = i + 2, j = j + 2)
	{
		if (i == n)
		{
			sum = sum + i;
		}
		else
		{
			sum = sum + (i - j);
		}

	} cout << sum;
	return 0;
}