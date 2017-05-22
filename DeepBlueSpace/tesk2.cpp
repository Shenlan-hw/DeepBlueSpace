#include "tesk2.h"

void tesk202()
{
	printf("输入存款金额money、存期year、年利率rate：");
	int money, year;
	double rate;
	scanf_s("%d%d%lf", &money, &year, &rate);
	double sum;
	sum = money*pow(1 + rate, year);
	printf("本息和等于%.2f\n", sum);
}

void tesk204()
{
	double x, y;
	printf("请输入一个数x：");
	scanf_s("%lf", &x);
	if (x < 0)
		y = pow(x, 5) + 2 * x + 1 / x;
	else y = sqrt(x);
	printf("x=%.2f,y=%.2f\n", x, y);
}

void tesk206()
{
	printf("请输入一个正整数n:");
	int n;
	scanf_s("%d", &n);
	int i = 1, fz = 1, fm = 1, flag = 1, temp;
	double sum = 0;
	while (i <= n)
	{
		sum += flag*fz*1.0 / fm;
		temp = fz;
		fz = fm;
		fm += temp;
		flag *= -1;
		i++;
	}
	printf("1-1/2+2/3-3/5-...的前%d项和等于%.2f\n", n, sum);
}

void tesk208()
{
	printf("输入一个正整数n和一个实数x:");
	int x, n;
	scanf_s("%d%d", &n, &x);
	int i = 1;
	double sum = 0;
	while (i <= n)
	{
		sum += power(x, i);
		i++;
	}
	printf("x1+x2+x3+...+xn=%.2f\n", sum);
}

void tesk209()
{
	printf("请输入一个正整数：");
	int n;
	scanf_s("%d", &n);
	double x;
	printf("请输入一个实数：");
	scanf_s("%lf", &x);
	double fz, fm, sum = 0;
	int i = 1, flag = 1;

	if (x >= 0)
	{
		while (i <= n)
		{
			fz = power(x, i);
			fm = fact(i);
			sum += flag*fz / fm;
			flag *= -1;
			i++;
		}
	}
	else
	{
		while (i <= n)
		{
			fm = power(x, i);
			fz = fact(i);
			sum += flag*fz / fm;
			flag *= -1;
			i++;
		}
	}
	printf("x=%.2f,n=%d,s=%.2f\n", x, n, sum);
}
