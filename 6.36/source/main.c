#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int stringReverse(char n[60]);

int main(void)
{
	char n[60];
	printf("½Ð¿é¤J¦r¦ê: ");
	scanf_s("%s", n, (unsigned)_countof(n));
	printf("stringReverse: %s", stringReverse(n));
}

int stringReverse(char n[60])
{
	int i;
	int len = strlen(n);
	for (i = 0; i < len / 2; i++)
	{
		char c = n[i];
		n[i] = n[len - i - 1];
		n[len - i - 1] = c;
	}
	return n;
}