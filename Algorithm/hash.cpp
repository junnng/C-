#include<stdio.h>
#include<string.h>
//�˰��� �߿��� �� �߿�

#define BK 10
#define SL 1

int hashtable[BK][SL];

int hash(int key)
{
	return key % 10;
}

void Addkey(int key)
{
	int bucket;
	bucket = hash(key);      

	//���߽���
	/*for (int i = 0; i < SL; i++)
	{
		if (hashtable[bucket][i] == 0)
		{
			hashtable[bucket][i] = key;
			break;
		}
	}*/

	//����Ž�� -->��ĭ�� ��� Ž���ϴ� ��
	while (hashtable[bucket][0] != 0)
	{
		bucket = bucket + 1;
	}
	hashtable[bucket][0] = key;
}
//��ȣȭ 

//1234

//��ȣȭ

int Findkey(int key)
{
	int bucket;
	bucket = hash(key);

	//���߽���
	/*for (int i = 0; i < SL; i++)
	{
		if (hashtable[bucket][i] == key)
		{
			return 1;
		}
	}*/

	//����Ž�� -->��ĭ�� ��� Ž���ϴ� ��
	while (hashtable[bucket][0] != 0)
	{
		if (hashtable[bucket][0] == key)
		{
			return 1;
		}
		bucket = bucket + 1;
	}
	return 0;
}

//bool�� true/false

void main()
{
	int i, key;
	memset(hashtable, 0, sizeof(hashtable));
	for (i = 0; i < 5; i++)
	{
		printf("%d��° ���� �Է��ϼ��� : ", i + 1);
		scanf_s("%d", &key);
		Addkey(key);
	}
	printf("�˻��� Ű�� �Է��ϼ��� : ");
	scanf_s("%d", &key);
	if (Findkey(key))
	{
		printf("�˻��Ǿ����ϴ�.\n");
	}
	else
	{
		printf("�Է°��� �����ϴ�.\n");
	}
}