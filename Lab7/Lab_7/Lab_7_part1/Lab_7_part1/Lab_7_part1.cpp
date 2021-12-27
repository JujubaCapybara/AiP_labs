#include<iostream>
using namespace std;
int main()
{
	float x, y;
	cout << "enter point coordinates: ";
	cout << "x = ";
	cin >> x;
	cout << "y =  ";
	cin >> y;
	if (((x >= -1) && (x < 0) && (y <= 1) && (y > 0)) || ((x <= 1) && (x >= 0) && (y >= 0) && (y >= -1)))
		cout << "This point belongs to area";
	else
		cout << "This point doesn’t belong to area";
	cin.get();
	cin.get();
}