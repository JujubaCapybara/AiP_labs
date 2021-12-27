#include<iostream>
using namespace std;
void main()
{
	int val, s = 0;
	cout << "enter the sequence of numbers\n";
	while (s <= 100)
	{
		cin >> val;
		if (val >= 0)
			s = s + val;
		else
			s = s + val * val;
	}
	cout << "s=" << s;
	cin.get();
	cin.get();
}