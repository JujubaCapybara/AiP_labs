#include <iostream>
using namespace std;

int main()
{
	int sum = 0, proizv = 1, min = 0, n_prev = 0, n = 9999999999999999999;
	while (true)
	{
		n_prev = n;
		cout << "Insert the number" << endl;
		cin >> n;
		if (n != 0)
		{
			if (n_prev < n)
				min = n_prev;
			else
				min = n;
		}
		if ((n > 10) && (n < 25))
			sum = sum + n;
		if (n > 15)
			proizv = proizv * n;
		if (n == 0)
			break;
	}
	cout << "Sum: " << sum << endl;
	cout << "Multiplication result: " << proizv << endl;
	cout << "Min:" << min << endl;
}