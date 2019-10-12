#include<iostream>

using namespace std;
int main()
{
	int num, sum = 0, digit;
	cout << "SUM OF DIGITS OF 4 DIGIT NUMBER" << endl;
	cout << "enter number";
	cin >> num;
	while (num != 0)
	{
		digit = num % 10;
		sum = sum + digit;
		num = num / 10;
	}
	cout << "sum  " << sum;
	return 0;
}


