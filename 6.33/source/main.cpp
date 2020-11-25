#include <stdio.h>
#include <stdlib.h>
#define SIZE 15

int binary_search(int n[], int key, int hi,int low);

int main() 
{
	int a[SIZE],i;
	int ans;
	int key;

	printf("叫块计(0~28):");
	scanf_s("%d", &key);

	printf("计:\n");
	for (i = 0; i < SIZE; i++) 
	{
		a[i] = i * 2;
		printf("%4d", i);
	}

	printf("\n");

	for (i = 0; i < SIZE; i++)
	{
		printf("%4d", a[i]);
	}

	ans=binary_search(a, key, SIZE-1,0);

	if (ans == -1) 
	{
		printf("计柑⊿Τ计\n");
	}
	else 
	{
		printf("%d皚材%d\n", key, ans);
	}

	system("pause");
	return 0;
}

int binary_search(int n[], int key, int hi, int low) 
{
	int mid;
	mid = (hi + low) / 2;
	
	printf("\nhi=%d\n", hi);
	printf("low=%d\n", low);
	printf("mid=%d\n", mid);


		if (n[mid] == key) 
		{
			return mid;
		}
		else if (low == mid && hi == mid) 
		{ 
			if (n[mid] == key) 
			{
				return mid;
			}
			else 
			{
				return -1;
			}
		}
		else if (n[mid] > key)   //オ 
		{
			return binary_search(n, key, mid - 1, low);
		}
		else if (n[mid] < key)    //
		{
			return binary_search(n, key, hi, mid + 1);
		}
}