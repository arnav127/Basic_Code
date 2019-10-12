#include<iostream>

using namespace std;
int main()
{
	int num, ctr = 0, digit;
	cout << "SUM OF DIGITS OF 4 DIGIT NUMBER" << endl;
	cout << "enter number";
	cin >> num;
	while (num != 0)
	{
		digit = num % 10;
		if (digit == 0) ctr++;
		num = num / 10;
	}
	cout << "number of zeros " << ctr;
	return 0;
}


