#include<stdio.h>
#include<stdlib.h>

int square(int y);

int main(void)
{
	for (int i = 1; i <= 10; i++)
	{
		printf("%d\t", square(i));
	}
	printf("\n");
	system("pause");
	return 0;

}

int square(int y)
{
	return y * y;

}