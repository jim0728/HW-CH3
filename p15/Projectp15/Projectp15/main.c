#include<stdio.h>
#include<stdlib.h>

int maximum(int x , int y , int z);
int main(void)
{
	int a, b, c;
	printf("�п�J�T�Ӽ�");
	scanf_s("%d %d %d", &a , &b , &c);
	printf("maxium is %d", maximum(a ,b ,c));
	system("pause");
	return 0;
}

int maximum(int x, int y, int z)
{
	int max;
	max = x;
	if (max < y)
	{
		max = y;
	}
	if (max < z)
	{
		max = z;
	}
	return max;
}