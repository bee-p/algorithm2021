#include <iostream>
using namespace std;

int factorial(int n)
{
	if (n == 0)	return 1;
	else if (n == 1) return 1;
	else return (n * factorial(n - 1));
}

void main()
{
	cout << "���ڸ� �Է��ϼ���. : ";
	int num;
	cin >> num;

	cout << num << "!�� ���� : " << factorial(num);
}