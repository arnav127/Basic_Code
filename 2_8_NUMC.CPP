#include<iostream>

using namespace std;
int main()
{
	int i, p = 0, o = 0, ne = 0, n, num;
	cout << "CHECK NUMBER OF +/-/0";
	cout << endl;
	cout << "how many integers do you wish to enter?";
	cin >> n;
	cout << "enter integers";
	for (i = 0; i < n; i++)
	{
		cin >> num;
		if (num > 0)
			p++;
		else if (num == 0)
			o++;
		else if (num < 0)
			ne++;
	}
	cout << p << "+ve number(s)" << '\n' << o << "zero(s)" << '\n' << ne << "-ve number(s)";
	return 0;
}