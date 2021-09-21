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

// ������������ �����ϵ��� ��
void sort()
{
	/* �Է� �����Ͱ� L[]�� ��� ������, ��ü ���� ������ SIZE�̴�. */

	// ���� ��ġ�� �ٲٱ� ���� �ӽð���
	int temp;

	// �� ��° ���Һ��� ��Ƽ� �˻�
	for (int key = 1; key < SIZE; key++)
	{
		// ���� ����(key)�� ���� L[] ���� ù ���ҿ� ���ʴ�� ��
		for (int i = 0; i < SIZE; i++)
		{
			// ���� ���Ұ� Ž���� ���Һ��� ���� ���
			if (L[i] > L[key])
			{
				// ���� ����� ���� �ڸ���� break
				if (i - 1 == key)
					break;

				// �ڸ� ���ġ �� ���� �ӽð����� �ֱ�
				temp = L[key];

				// �ش� ���Ұ� �� �ڸ��� �����ϱ� ����
				// �ش� �ڸ��� �� ���ҵ� �� ĭ�� �о��
				for (int t = key - 1; t >= i; t--)
					L[t + 1] = L[t];

				// �� �ڸ��� ���ġ
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
