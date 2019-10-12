//star pattern
#include<iostream>
#include<cmath>

using namespace std;
int main()
{
	int i, j, n;
	cout << "STAR" << endl;
	cout << "*" << endl << "**" << endl << "***" << endl << "n lines";
	cout << endl;
	cout << "enter number of lines ";
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j < i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}