#include <stdio.h>
//�̺а˻� ���� �߿�
int BinarySearch(int*pArr,int asize, int akey)
{
	int upper, lower, mid;
	lower = 0;
	upper = asize - 1;

	while (true)
	{
		mid = (upper + lower) / 2;
		if (pArr[mid] == akey)
		{
			return mid;
		}
		if (pArr[mid] > akey)
		{
			upper = mid - 1;
		}
		else
		{
			lower = mid + 1;
		}
		if (upper <= lower)
		{
			return -1;
		}
	}

}

void main()
{
	//�̺а˻�
	int arr[]={ 2,6,13,19,21,23,29,35,48,62,89,90,95,99,102,109,208,629 };
	int key = 0;
	unsigned int size = sizeof(arr) / sizeof(arr[0]);

	printf("Ű���� �Է��ϼ��� : ");
	scanf_s("%d", &key);

	int idx = BinarySearch(arr,size,key);

	if (idx == -1)
	{
		printf("ã�� ���� �����ϴ�.\n");
	}
	else
	{
		printf("ã�� ���� %d��°�� �ֽ��ϴ�.\n",idx+1);
	}
}