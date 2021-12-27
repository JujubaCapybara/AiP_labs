#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	float num1;
	float num2;
	cout << "enter number 1: ";
	cin >> num1;
	cout << "enter number 2: ";
	cin >> num2;

	//Часть 1:
	cout << "the result is:" << endl;
	float exmpl1_1;
	exmpl1_1 = (-num1 + sqrt(num1 * num1 + 3 * num2)) / (2 * num2);
	cout << exmpl1_1 << endl;

	float exmpl1_2;
	exmpl1_2 = sqrt((3 + num1 * num2) / (4 * num1 * num1));
	cout << exmpl1_2 << endl;

	float exmpl1_3;
	exmpl1_3 = (6 - abs(num1 - 3 * num2)) / sqrt(5 - (num2 * num2));
	cout << exmpl1_3 << endl;

	float exmpl1_4;
	exmpl1_4 = exp(num1 + 7) * sqrt(37 * num2 - num1 * num1 * num1);
	cout << exmpl1_4 << endl;

	float exmpl1_5;
	exmpl1_5 = sin(num1) + (num2 * num2 / (cos(2 * num1) + 23));
	cout << exmpl1_5 << endl;

	float exmpl1_6;
	exmpl1_6 = tan(num2) - abs(num1 - 3 * num2 + (2 / sqrt(num2 + 4)));
	cout << exmpl1_6 << endl << endl;


	//Часть 2:
	char exmpl2_1[6];
	int n = 5;
	char temp;
	cout << "Enter the string: ";
	cin >> exmpl2_1;
	temp = exmpl2_1[0];
	exmpl2_1[0] = exmpl2_1[4];//первый заменяется последним
	exmpl2_1[4] = exmpl2_1[2];// последний заменяется третим
	exmpl2_1[2] = temp;//третий заменяется первым
	cout << "The result is: ";
	for (int i = 0; i < n; i++)
		cout << exmpl2_1[i];
	cout << endl << endl;


	char exmpl2_2first[4];
	char exmpl2_2second[4];
	cout << "Enter first string: ";
	cin >> exmpl2_2first;
	cout << "Enter second string: ";
	cin >> exmpl2_2second;
	char exmpl2_2final[7];
	//Сложение строк exmpl2_2first и exmpl2_2second
	n = 3;
	for (int i = 0; i < n; i++)
		exmpl2_2final[i] = exmpl2_2first[i];
	for (int i = 0; i < n; i++)
		exmpl2_2final[i + 3] = exmpl2_2second[i];
	//Вывод на экран символов, получающихся сложением строк exmpl2_2first и exmpl2_2second
	n = 6;
	cout << "The result is: ";
	for (int i = 0; i < n; i++)
		cout << exmpl2_2final[i];
	cout << endl;
}