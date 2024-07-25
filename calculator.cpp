#include<iostream>
using namespace std;

int main ()
{
	char sign;
	float a,b;

	cout << "What you want to do: \n";
	cout << "+\n-\n*\n/\n";
	cin >> sign;


	cout << "Enter the two numbers: \n";
	cin >> a;
	cin>> b;

	switch(sign)
	{
		case '+':
		cout << "Here's your answer:\n" << a << " + " << b << " = " << a + b << endl;
		break;

		case '-':
		cout << "Here's your answer:\n" << a << " - " << b << " = " << a - b << endl;
		break;

		case '*':
		cout << "Here's your answer:\n" << a << " * " << b << " = " << a * b << endl;
		break;

		case '/':
		cout << "Here's your answer:\n" << a << " / " << b << " = " << a / b << endl;
		break;

		default:
		cout << "Error! You chose the wrong operator\n";
		break;

	}

	return 0;
}
