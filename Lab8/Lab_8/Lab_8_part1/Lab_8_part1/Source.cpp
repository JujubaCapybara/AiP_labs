#include<iostream>
using namespace std;

int main()
{
	float s, j;
	s = 0;
	for (int i = 2; ; i += 2)
	{
		cout << "Enter j : ";
		cin >> j;
		if (j != 0)
			s = s + i * j;
		else
			break;
	}
	cout << "The sum of the sequence is: " << s << endl;
}