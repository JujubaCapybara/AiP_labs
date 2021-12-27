#include<iostream>
using namespace std;
void main()
{
	// Задание 1:
	setlocale(LC_ALL, "Rus");
	int code, prv_int, nxt_int;
	char ch, prv_ch, nxt_ch;
	cout << "Type characters and press Enter: ";
	cin >> ch;
	code = (int)ch;
	prv_int = code - 1;        nxt_int = code + 1;
	prv_ch = char(prv_int);    nxt_ch = char(nxt_int);
	cout << "ASCII-code is: " << code << endl;
	cout << "The previous character is: " << prv_ch << endl;
	cout << "The next character is: " << nxt_ch << endl << endl;
	cout << "Press Enter to exit" << endl;
	cin.get();
	cin.get();

	// Задание 2:
	float a, b, c, p, S;
	cout << "Введите стороны произвольного треугольника: ";
	cin >> a >> b >> c;
	p = (a + b + c) / 2;
	S = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << "Площадь треугольника S = " << S<<endl;
}