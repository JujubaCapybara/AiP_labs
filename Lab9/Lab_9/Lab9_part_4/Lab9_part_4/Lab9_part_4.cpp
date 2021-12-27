#include <iostream>
using namespace std;

int main()
{
	int h, m, s;
	goto Bebra;
WrongBebra:
	cout << "Wrong input" << endl;
Bebra:
	cout << "Enter time (hh:mm:ss)" << endl;
	cin >> h; cin.get(); cin >> m; cin.get(); cin >> s; cin.get();
	if ((h > 23) || (m > 59) || (s > 59) || (h < 0) || (m < 0) || (s < 0))
		goto WrongBebra;
	s = s + h * 3600 + m * 60;
	cout << s;
}