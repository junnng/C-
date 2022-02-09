#include<stdio.h>
#include<string.h>
//알고리즘 중에서 좀 중요

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

	//다중슬롯
	/*for (int i = 0; i < SL; i++)
	{
		if (hashtable[bucket][i] == 0)
		{
			hashtable[bucket][i] = key;
			break;
		}
	}*/

	//선형탐색 -->옆칸을 계속 탐색하는 것
	while (hashtable[bucket][0] != 0)
	{
		bucket = bucket + 1;
	}
	hashtable[bucket][0] = key;
}
//암호화 

//1234

//복호화

int Findkey(int key)
{
	int bucket;
	bucket = hash(key);

	//다중슬롯
	/*for (int i = 0; i < SL; i++)
	{
		if (hashtable[bucket][i] == key)
		{
			return 1;
		}
	}*/

	//선형탐색 -->옆칸을 계속 탐색하는 것
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

//bool은 true/false

void main()
{
	int i, key;
	memset(hashtable, 0, sizeof(hashtable));
	for (i = 0; i < 5; i++)
	{
		printf("%d번째 값을 입력하세요 : ", i + 1);
		scanf_s("%d", &key);
		Addkey(key);
	}
	printf("검색할 키를 입력하세요 : ");
	scanf_s("%d", &key);
	if (Findkey(key))
	{
		printf("검색되었습니다.\n");
	}
	else
	{
		printf("입력값이 없습니다.\n");
	}
}