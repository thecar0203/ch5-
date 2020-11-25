#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 60
int maximum(int max[60]);

int main(void)
{
	int max[60];

	printf("請輸入五個數字: ");
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &max);
	}
	printf("\n最大值:%d",maximum(max));

	system("pause");
	return 0;
}

int maximum(int max[60])
{
	int i,MAX=0;

	for (i = 0; i <= SIZE; i++)
	{
		if (max[i]> MAX)
		{
			MAX = max[i];
		}
	}

	return MAX;
}