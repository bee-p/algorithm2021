#include <iostream> 
using namespace std;

int cnt = 0; // �̵� Ƚ���� �̿�.

void Hanoi(int n, char from, char temp, char to)
// n : ���ݰ���, from : ���� ��ġ, temp : �ӽ� ���, to :������
{
	// �� ���� ���� �� ���� n�� �������ٸ�
	if (n == 1)
		cout << "#" << ++cnt << ". ��ũ 1���� " << from << "���� " << to << "�� �ű��." << endl;
	else
	{
		// 1. n-1���� ������ A���� B�� �ű��.
		Hanoi(n - 1, from, to, temp);
		
		// 2. A�� ���� �� ���� ������ C�� �ű��.
		// Hanoi(1, from, temp, to);
		cout << "#" << ++cnt << ". ��ũ 1���� " << from << "���� " << to << "�� �ű��." << endl;

		// 3. n-1���� ������ B���� C�� �ű��.
		Hanoi(n - 1, temp, from, to);
	}
}


void main()
{
	int n; //������ ��

	cout << "������ ������ �Է��ϼ��� : ";
	cin >> n;

	Hanoi(n, 'A', 'B', 'C');    // n���� ������ 'A'���� 'C'�� �̵�

	cout << "\n��ü ���� �̵� ��(���ݼ� : " << n << ") = " << cnt << endl;
}