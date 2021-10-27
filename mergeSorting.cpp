#include <iostream>
using namespace std;

#define data int			// 데이터 타입
const int SIZE = 10;		// 데이터 갯수

data A[SIZE] = { 26, 5, 77, 1, 61, 11, 59, 15, 48, 19 };

void merge(int L, int R, int m)
{
	int i, j, k;
	data B[SIZE];

	// 1. B에 값 복사하기
	for (i = L; i <= m; i++)
		B[i] = A[i];
	for (j = m; j < R; j++)
		B[R + m - j] = A[j + 1];

	// 2. 값 비교, 작은 값부터 A에 넣기
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
		merge_sort(L, m);		// 왼쪽 그룹 정렬
		merge_sort(m + 1, R);	// 오른쪽 그룹 정렬
		merge(L, R, m);			// 합치기
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