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

// ������ ���Ҹ� pivot���� ��� ���� ����
void quick_sort(int from, int to)
{
	/* �Է� ����Ÿ�� L[]�� ��� ������, ��ü ���� ������ SIZE�̴�. */

	int i, j;
	int temp;		// pivot�� �ӽ÷� �־�� ��
	int t;			// ��ġ ��ȯ�� ���� �ӽð���

	if (to > from)
	{
		/*		partition �˰��� ����		*/
		temp = L[to];		// �� ������ ���� pivot���� ��� �־��
		i = from - 1;		// ����
		j = to;				// ������
		do {
			// i�� ����Ű�� ���� �̹� pivot���� �۰ų�,
			// j�� ����Ű�� ���� �̹� pivot���� Ŀ�� ��ġ�� �ٲ� �ʿ� ���� �� ��� �ѱ�
			do { i++; } while (L[i] < temp);
			do { j--; } while (L[j] > temp);

			// �ڸ���ȯ
			if (i < j)
			{
				t = L[i];
				L[i] = L[j];
				L[j] = t;
			}
		} while (j > i);

		// pivot�� ������ �� �׷� ���̿� ����ֱ�
		L[to] = L[i];
		L[i] = temp;

		// �� �׷� ���� ����
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
