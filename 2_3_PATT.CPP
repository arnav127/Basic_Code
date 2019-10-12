//star pattern
#include<iostream>
#include<cmath>

using namespace std;
int main()
{
	int i, j, n, k;
	cout << "number pattern" << endl;
	cout << "  1" << endl << " 121" << endl << "12321" << endl << "n lines";
	cout << endl;
	cout << "enter number of lines ";
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		for (k = i; k < n; k++)
		{
			cout << " ";
		}
		for (j = 1; j <= i; j++)
		{
			cout << j;
		}
		for (j = i - 1; j > 1; j--)
		{
			cout << j;
		}
		cout << endl;
	}
	return 0;
}