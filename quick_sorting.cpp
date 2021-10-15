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

// 마지막 원소를 pivot으로 잡는 경우로 구현
void quick_sort(int from, int to)
{
	/* 입력 데이타는 L[]에 들어 있으며, 전체 원소 개수는 SIZE이다. */

	int i, j;
	int temp;		// pivot을 임시로 넣어둘 곳
	int t;			// 위치 교환을 위한 임시공간

	if (to > from)
	{
		/*		partition 알고리즘 수행		*/
		temp = L[to];		// 맨 마지막 값을 pivot으로 잡아 넣어둠
		i = from - 1;		// 왼쪽
		j = to;				// 오른쪽
		do {
			// i가 가리키는 값이 이미 pivot보다 작거나,
			// j가 가리키는 값이 이미 pivot보다 커서 위치를 바꿀 필요 없을 시 계속 넘김
			do { i++; } while (L[i] < temp);
			do { j--; } while (L[j] > temp);

			// 자리교환
			if (i < j)
			{
				t = L[i];
				L[i] = L[j];
				L[j] = t;
			}
		} while (j > i);

		// pivot을 나눠진 두 그룹 사이에 집어넣기
		L[to] = L[i];
		L[i] = temp;

		// 두 그룹 각각 정렬
		quick_sort(from, i - 1);
		quick_sort(i + 1, to);
	}
}

void main()
{
	cout << "Input Data : ";
	print_data();

	/* sort the elements of array L[] in ascending order */
	quick_sort(0, SIZE - 1);

	cout << "\n\nSorted Data : ";
	print_data();

}
