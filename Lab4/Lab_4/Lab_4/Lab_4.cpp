#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	char st[6];
	char ch;
	cout << "type characters and press Enter: " << endl;
	cin >> st;
	ch = st[0];
	st[0] = st[4];
	st[4] = ch;
	cout << "the result is: " << endl;
	cout << st << endl;

	double var1;
	double var2;
	double sum;
	double raznost;
	char znak;


	cout << "Введите два вещественных числа:" << endl;
	cin >> var1;
	cin >> var2;

	cout << "Введите знак действия: " << endl;
	cin >> znak;


	sum = var1 + var2;
	raznost = var1 - var2;


	cout.precision(2);
	if (znak == '+')
		cout << "Сумма: " << sum << endl;
	else if (znak == '-')
		cout << "Разность: " << raznost << endl;
	else
		cout << "Неверный ввод";


	cin.get();
	cin.get();
}
