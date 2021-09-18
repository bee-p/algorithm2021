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
	cout << "숫자를 입력하세요. : ";
	int num;
	cin >> num;

	cout << num << "!의 값은 : " << factorial(num);
}