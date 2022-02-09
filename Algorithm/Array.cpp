#include <stdio.h>

void main()
{
	int i, j;
	int arr1[2][3] = {{1,2,3},{4,5,6}};
	int arr2[2][3] = { {6,5,4},{3,2,1} };
	int arr3[2][3];
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			arr3[i][j] = arr1[i][j] + arr2[i][j];
			
		}
	}


	/*arr[0][0] = 1;
	arr[0][1] = 2;
	arr[0][2] = 3;
	arr[1][0] = 4;
	arr[1][1] = 5;
	arr[1][2] = 6;*/

	printf("================================\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d", arr3[i][j]);
		}
		printf("\n");
	}
	printf("==============================\n");


}