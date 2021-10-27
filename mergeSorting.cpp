#include <iostream>
using namespace std;

#define data int			// ������ Ÿ��
const int SIZE = 10;		// ������ ����

data A[SIZE] = { 26, 5, 77, 1, 61, 11, 59, 15, 48, 19 };

void merge(int L, int R, int m)
{
	int i, j, k;
	data B[SIZE];

	// 1. B�� �� �����ϱ�
	for (i = L; i <= m; i++)
		B[i] = A[i];
	for (j = m; j < R; j++)
		B[R + m - j] = A[j + 1];

	// 2. �� ��, ���� ������ A�� �ֱ�
	i = L; j = R;
	for (k = L; k <= R; k++)
		A[k] = (B[i] < B[j]) ? B[i++] : B[j--];
}

void merge_sort(int L, int R)
{
	int m;

	if (R > L)
	{
		m = (R + L) / 2;
		merge_sort(L, m);		// ���� �׷� ����
		merge_sort(m + 1, R);	// ������ �׷� ����
		merge(L, R, m);			// ��ġ��
	}
}

void print_data()
{
	for (int i = 0; i < SIZE; i++)
		cout << " " << A[i] << " ";
	cout << endl;
}

void main()
{
	cout << "Input Data : ";
	print_data();

	merge_sort(0, SIZE - 1);

	cout << "\n\nSorted Data : ";
	print_data();
}