#include<iostream>

using namespace std;
int main()
{
	int n, i, j, k;
	cout << "enter number of lines";
	cin >> n;
	for (i = 1; i <= n / 2 + 1; i++)
	{
		for (j = i; j <= n; j++)
		{
			cout << " ";
		}

		for (k = 1; k <= 2 * i - 1; k++)
		{
			cout << "*";
		}
		cout << endl;

	}
	for (i = n / 2; i >= 1; i--)
	{
		for (j = 1; j <= n - i + 1; j++)
		{
			cout << " ";
		}

		for (k = 1; k <= 2 * i - 1; k++)
		{
			cout << "*";
		}
		cout << endl;

	}
	return 0;
}

