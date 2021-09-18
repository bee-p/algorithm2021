#include <iostream>
using namespace std;

// n번째 피보나치 수는?
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
	// 피보나치 수를 0번째부터 정의했으므로 실제 넣는 값은 1 감소한 값을 넣어야
	// 원하는 순번에 오는 수를 얻을 수 있음
	cout << n << "번째 피보나치 숫자는? : " << Fibonacci(n - 1) << endl;
}