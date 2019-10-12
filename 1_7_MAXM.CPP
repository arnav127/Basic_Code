//lcm of two numbers
#include<iostream>

using namespace std;
int main()
{
	int num, i, max = 0, min = 100;
	cout << "MAXIMUM MINIMUM OUT OF 10 NUMBERS" << endl;
	cout << "enter ten numbers";
	for (i = 0; i < 10; i++)
	{
		cin >> num;

		if (num > max)
		{
			max = num;
		}
		if (num < min)
		{
			min = num;
		}
	}
	cout << "max num" << max << endl << "min num" << min;
	return 0;
}