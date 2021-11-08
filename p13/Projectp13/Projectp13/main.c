#include<stdio.h>
#include<stdlib.h>

double power(double, int);

int main(void)
{
	int k; 
	double Ans;
	printf("計算3.5的k次方 請輸入k");
	scanf_s("%d", &k);
	Ans = power(3.5, k);
	printf("3.5的k次方為:%f \n " , Ans);
	system("pause");
}

double power(double x, int y)
{
	double powerxn;
	powerxn = 1;
	for (int i = 1; i <= y; i++)
	{
		powerxn = powerxn * x;
	}
	return powerxn;

}