#include <iostream> 
using namespace std;

int cnt = 0; // 이동 횟수에 이용.

void Hanoi(int n, char from, char temp, char to)
// n : 원반개수, from : 원래 위치, temp : 임시 장소, to :목적지
{
	// 맨 위의 원반 한 개로 n이 좁혀졌다면
	if (n == 1)
		cout << "#" << ++cnt << ". 디스크 1개를 " << from << "에서 " << to << "로 옮긴다." << endl;
	else
	{
		// 1. n-1개의 원반을 A에서 B로 옮긴다.
		Hanoi(n - 1, from, to, temp);
		
		// 2. A에 남은 한 개의 원반을 C로 옮긴다.
		// Hanoi(1, from, temp, to);
		cout << "#" << ++cnt << ". 디스크 1개를 " << from << "에서 " << to << "로 옮긴다." << endl;

		// 3. n-1개의 원반을 B에서 C로 옮긴다.
		Hanoi(n - 1, temp, from, to);
	}
}


void main()
{
	int n; //원반의 수

	cout << "원반의 갯수를 입력하세요 : ";
	cin >> n;

	Hanoi(n, 'A', 'B', 'C');    // n개의 원반을 'A'에서 'C'로 이동

	cout << "\n전체 원반 이동 수(원반수 : " << n << ") = " << cnt << endl;
}