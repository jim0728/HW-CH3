#include<stdio.h>
#include<stdlib.h>

double power(double, int);

int main(void)
{
	int k; 
	double Ans;
	printf("�p��3.5��k���� �п�Jk");
	scanf_s("%d", &k);
	Ans = power(3.5, k);
	printf("3.5��k���謰:%f \n " , Ans);
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