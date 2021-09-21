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

// 오름차순으로 정렬하도록 함
void sort()
{
	/* 입력 데이터가 L[]에 들어 있으면, 전체 원소 개수는 SIZE이다. */

	// 원소 위치를 바꾸기 위한 임시공간
	int temp;

	// 두 번째 원소부터 잡아서 검사
	for (int key = 1; key < SIZE; key++)
	{
		// 기준 원소(key)를 갖고 L[] 내의 첫 원소와 차례대로 비교
		for (int i = 0; i < SIZE; i++)
		{
			// 기준 원소가 탐색된 원소보다 작을 경우
			if (L[i] > L[key])
			{
				// 만일 현재와 같은 자리라면 break
				if (i - 1 == key)
					break;

				// 자리 재배치 할 원소 임시공간에 넣기
				temp = L[key];

				// 해당 원소가 들어갈 자리를 마련하기 위해
				// 해당 자리의 뒷 원소들 한 칸씩 밀어내기
				for (int t = key - 1; t >= i; t--)
					L[t + 1] = L[t];

				// 빈 자리에 재배치
				L[i] = temp;

				break;
			}
		}
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
