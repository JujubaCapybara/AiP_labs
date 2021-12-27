#include<iostream>
using namespace std;
int main()
{
	int n, i;
	double t, tdgr, a, f = 0;
	cout << "enter n: ";
	cin >> n;
	cout << "enter t: ";
	cin >> t;
	for (i = 0; i <= n; i++)
	{
		cout << "enter a: ";
		cin >> a;
		tdgr = 1;
		for (int j = 1; j <= n - i; j++)
			tdgr = tdgr * t;
		f = f + a * tdgr;
	}
	cout << "f = " << f;
	cin.get();
	cin.get();
}