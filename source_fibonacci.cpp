#include <iostream>
using namespace std;

// n��° �Ǻ���ġ ����?
int Fibonacci(int n)
{
	if (n == 0)	return 1;
	else if (n == 1) return 1;
	else return(Fibonacci(n - 2) + Fibonacci(n - 1));
}

void main()
{
	int n;
	cin >> n;
	// �Ǻ���ġ ���� 0��°���� ���������Ƿ� ���� �ִ� ���� 1 ������ ���� �־��
	// ���ϴ� ������ ���� ���� ���� �� ����
	cout << n << "��° �Ǻ���ġ ���ڴ�? : " << Fibonacci(n - 1) << endl;
}