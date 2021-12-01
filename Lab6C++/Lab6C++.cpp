#include <iostream>
using namespace std;

int check(char);
int gcd(int, int);

int main()
{
	int n = check('n');
	int m = check('m');
	int i = check('i');
	int d = int(gcd(gcd(m, n), i));
	cout << "The greatest common divisor is: " << d << endl;
}

int check(char l)
{
	float a;
	while (true)
	{
		cout << "Enter " << l << ": ";
		cin >> a;
		if (a != round(abs(a)) || a == 0)
			cout << "Wrong number. \n";
		else
			return a;
	}
}

int gcd(int a, int b)
{
	int c;
	while (b != 0)
	{
		c = a;
		a = b;
		b = c % b;
	}
	return a;
}


