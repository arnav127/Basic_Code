#include<iostream>

using namespace std;
int main()
{
	int i, j, k, a, p = 1, q = 1, s = 1, m, n, fac = 1;
	cout << "enter number of lines";
	cin >> n;

	for (i = 0; i < n; i++)
	{

		//spaces
		for (j = i; j < n; j++)

		{
			cout << " ";
		}

		//n! stored in p
		if (i == 0)
		{
			p = 0;
			fac = 1;
		}
		else
		{
			p = 1;
			for (a = i; a > 0; a--)
			{
				p = p * a;
			}
		}



		for (k = 0; k <= i; k++)
		{
			//r! stored in q
			if (k == 0)
			{
				q = 0;
			}
			else
			{
				q = 1;
				for (a = k; a > 0; a--)
				{
					q = q * a;
				}
			}

			m = i - k;
			if (m == 0)
			{
				s = 0;
			}
			else
			{
				s = 1;
				for (a = m; a > 0; a--)
				{
					s = s * a;
				}
			}


			if (q == 0 || s == 0)
			{
				fac = 1;
			}
			else
			{
				fac = p / (q * s);
			}

			cout << fac << " ";
			//n=i r=k
		}
		cout << endl;
	}
	return 0;
}