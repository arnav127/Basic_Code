#include<iostream>
#include<process.h>

using namespace std;
int main()
{

	int ch, n, num, count = 0, i = 0, arr[20];

	while (ch != 4)
	{
		cout << "MENU CONVERSION DECIMAL TO ->" << '\n';
		cout << "1. binary" << '\n';
		cout << "2. octal" << '\n';
		cout << "3. hexadecimal" << '\n';
		cout << "4. exit" << '\n';
		cin >> ch;

		switch (ch)
		{
		case 1: cout << "enter number of base 10" << '\n';
			cin >> num;
			while (num != 0)
			{
				n = num % 2;
				num = num / 2;
				arr[i] = n; i++;
				count = i;
			}
			for (i = count - 1; i >= 0; i--)
			{
				cout << arr[i];
			}
			break;

		case 2: i = 0;
			cout << "enter number of base 10" << '\n';
			cin >> num;
			while (num != 0)
			{
				n = num % 8;
				num = num / 8;
				arr[i] = n; i++;
				count = i;
			}
			for (i = count - 1; i >= 0; i--)
			{
				cout << arr[i];
			}

			break;

		case 3: i = 0;
			cout << "enter number of base 10" << '\n';
			cin >> num;
			while (num != 0)
			{
				n = num % 16;
				num = num / 16;
				arr[i] = n; i++;
				count = i;
			}
			for (i = count - 1; i >= 0; i--)
			{
				if (arr[i] >= 10)
				{
					cout << char(arr[i] + 55);
				}
				else
					cout << arr[i];
			}
			break;

		case 4: exit(0);

		default: cout << "wrong choice";
		}
	}

	return 0;
}