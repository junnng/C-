#include <stdio.h>

//void Max(int a, int b);

void main()
{
	//int total = 0; //����
	//double avg = 0.0;
	//int arrGrade[5];
	//int count = 0;
	//int i;


	//for (i = 0; i < 5; i++)
	//{
	//	printf("%d��° �л� ������ �Է��ϼ��� : ", i + 1);
	//	scanf_s("%d", &arrGrade[i]);
	//}
	//for (i = 0; i < 5; i++)
	//{
	//	total = total + arrGrade[i];
	//}

	//avg = (double)total / 5;
	//printf("������ %d ����� %lf\n", total, avg);

	//�迭�� �ʱ�ȭ
	/*int total = 0;
	int array[]= {1,2,3,4,5};
	total = array[0] + array[1]+array[3]+array[4];
	printf("�迭 ����� �� ���� %d�Դϴ�.\n", total);*/

	//�迭�� ����
	/*int arr1[5] = { 1,2,3,4,5 };
	int arr2[5];

		for (int i = 0; i < 5; i++)
	{
		arr2[i] = arr1[4-i];
	}
		for (int i = 0; i < 5; i++)
		{
			printf("%d\n", arr2[i]);
		}*/

		//���ڿ� ����
		/*int i;
		char str1[100] = "Beautiful";

		for (i = 0; i < 10; i++)
		{
			printf("%c", str1[i]);

		}

		printf("\n");
		printf("str 1= %s \n", str1);*/

		/*char str1[] = "Hello\0World";
		printf("str1 = %s\n", str1);

		str1[3] = '\0';
		printf("str1 = %s\n", str1);

		str1[0] = '\0';
		printf("str1 = %s\n", str1);*/

		//int arr[100];
		//int i = 0;
		//int count = 0;

		//for (i = 0; i < 100; i++)
		//{
		//	scanf_s("%d", &arr[i]); //0,1,2,3
		//	if (arr[i] == -1)
		//	{
		//		break;
		//	}
		//}
		//count = i;
		//for (i = 0; i < count; i++)
		//{
		//	printf("arr[%d] = %d\n",i,arr[i]);//0,1,2
		//}

//	int arr[2];//arr[0],arr[1]
//
//	scanf_s("%d%d", &arr[0], &arr[1]);
//	Max(arr[0], arr[1]);

	//int arr[100];
	//int sum = 0;
	//int i;

	//for (int i = 0; i < 100; i++)
	//{
	//	arr[i] = i + 1;
	//	sum = sum + arr[i];
	//}
	//printf("���� : %d\n", sum);

	/*
	*
	* *
	* * *
	* * * *
	* * * * *
	
	*/
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
//void Max(int a, int b)
//{
//	
//	if (a > b)
//	{
//		printf("arr[0] : %d\n",a);
//	}
//	else
//	{
//		printf("arr[1] : %d\n", b);
//	}
//}