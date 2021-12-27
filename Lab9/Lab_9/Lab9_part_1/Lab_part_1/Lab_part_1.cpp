#include<iostream>
using namespace std;
int main()
{
	char ch;
	int numbers = 0;
	cout << "enter the sequence of symbols\n";
	ch = 'b';
	while (ch != '.')
	{
		cin >> ch;
		if(ch != '.')
			cout << (int)ch << '\n';
		numbers++;
	}
	cout << numbers << endl;
	cout << "finish";
	cin.get();
	cin.get();
}