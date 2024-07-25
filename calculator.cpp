#include<iostream>
using namespace std;

int main ()
{
	char sign;
	float a,b;

	cout << "Enter the operator: +, -, *, / : \n";
	cin >> sign;

	cout << "Enter the two numbers: \n";
	cin >> a;
	cin>> b;

	switch(sign)
	{
		case '+':
		cout << a << " + " << b << " = " << a + b << endl;
		break;

		case '-':
		cout << a << " - " << b << " = " << a - b << endl;
		break;

		case '*':
		cout << a << " * " << b << " = " << a * b << endl;
		break;

		case '/':
		cout << a << " / " << b << " = " << a / b << endl;
		break;

		default:
		cout << "Error! You chose the wrong operator";
		break;

	}

	return 0;
}
