#include <iostream>
using namespace std;

const int SIZE = 15;
int L[SIZE] = { 10, 4, 7, 1, -2, 12, 28, 66, 9, 3, 5, 7, 6, 21, 11 };


void print_data()
{
	for (int i = 0; i < SIZE; i++)
		cout << " " << L[i] << " ";
	cout << endl;
}

void sort()
{
	/* 입력 데이타는 L[]에 들어 있으면, 전체 원소 개수는 SIZE이다. */

	int i, j;
	int temp;

	for (i = 1; i < SIZE; i++)
	{
		temp = L[i];
		j = i;
		// 본격적인 비교
		while (j > 0 && L[j - 1] > temp)
		{
			// L[j - 1]의 값이 L[i]에 있던 값보다 클 경우 원소 교체(밀어내기)
			L[j] = L[j - 1];
			j--;
		}
		// 마련한 자리에 기존 L[i] 값 집어넣기
		L[j] = temp;
	}
}

void main()
{
	cout << "Input Data : ";
	print_data();

	/* sort the elements of array L[] in ascending order */
	sort();

	cout << "\n\nSorted Data : ";
	print_data();

}
