//star pattern
#include<iostream>
#include<cmath>

using namespace std;
int main()
{
	int i, j, n, k;
	cout << "STAR" << endl;
	cout << "  *" << endl << " ***" << endl << "*****" << endl << "n lines";
	cout << endl;
	cout << "enter number of lines ";
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		for (k = i; k < n; k++)
		{
			cout << " ";
		}
		for (j = 1; j <= 2 * i - 1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}