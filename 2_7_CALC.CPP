//calculator
#include<iostream>

using namespace std;
void main()
{
	int ch, a, b;
	while (ch != 5)
	{
		cout << endl << "MENU" << endl;
		cout << "1.add(+)" << endl;
		cout << "2.sub(-)" << endl;
		cout << "3.mul(*)" << endl;
		cout << "4.div(/)" << endl;
		cout << "5.exit" << endl;
		cout << "enter your choice";
		cin >> ch;
		switch (ch)
		{
		case 1: cout << "enter numbers";
			cin >> a >> b;   cout << endl;
			cout << a + b;
			break;
		case 2: cout << "enter numbers";
			cin >> a >> b;   cout << endl;
			cout << a - b;
			break;
		case 3: cout << "enter numbers";
			cin >> a >> b;   cout << endl;
			cout << a * b;
			break;
		case 4: cout << "enter numbers";
			cin >> a >> b;   cout << endl;
			cout << a / b;
			break;
		case 5: break;
		default:   cout << "wrong choice";
			cout << endl;
		}
	}
	return 0;
}