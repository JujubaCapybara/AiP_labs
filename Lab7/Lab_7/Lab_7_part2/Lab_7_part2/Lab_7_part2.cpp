#include<iostream>
using namespace std;
int main()
{
	char sign;
	double num1, num2, result;
	bool sign_check;
	cout << "Enter number 1: ";
	cin >> num1;
	cout << "Enter sign: ";
	cin >> sign;
	cout << "Enter number 2: ";
	cin >> num2;
	switch (sign)
	{
	case '+':
	{
		result = num1 + num2;
		sign_check = 0;
		break;
	}
	case '-':
	{
		result = num1 - num2;
		sign_check = 0;
		break;
	}
	case '*':
	{
		result = num1 * num2;
		sign_check = 0;
		break;
	}
	case '/':
	{
		if (num2 == 0)
		{
			cout << "Error: division by zero" << endl;
			sign_check = 1;
		}
		else
		{
			result = num1 / num2;
			sign_check = 0;
		}
		break;
	}
	default:
	{
		cout << "Error: wrong symbol" << endl;
		sign_check = 1;
		result = 0;
	}
	}
	if(sign_check == 0)
		cout <<"Result = " << result;
	cin.get();
	cin.get();
}