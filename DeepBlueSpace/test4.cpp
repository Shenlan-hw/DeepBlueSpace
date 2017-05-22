#include "test4.h"

void test402()
{
	printf("输入一个正整数：");
	int n;
	scanf_s("%d", &n);
	printf("输入%d个正整数：", n);
	int x, sum = 0, jsh = 0, jsgs = 0;
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &x);
		sum += x;
		if (x % 7 == 0 && x % 2 != 0)
		{
			jsgs++;
			jsh += x;
		}
	}
	printf("总和=%d,7的倍数的奇数平均值=%.2f\n", sum, 1.0*jsh / jsgs);
}

void test404()
{
	printf("请输入第一个学生的成绩：");
	double score;
	scanf_s("%lf", &score);
	printf("请输入剩余学生成绩（以负数结束）：");
	double max = 0, min = score, sum = 0, count = 0;
	while (score >= 0)
	{
		sum += score;
		count++;
		if (max < score) max = score;
		if (min > score) min = score;
		scanf_s("%lf", &score);
	}
	if (sum / count > 4 * (max + min) / 5) printf("教学效果：好\n");
	else if (sum / count < (max + min) / 2)printf("教学效果：差\n");
	else printf("教学效果：一般\n");
}

void test406()
{
	printf("请输入一个正整数：");
	int m;
	scanf_s("%d", &m);
	int n = m, digit, sum = 0, wq = 1;
	while (n > 0)
	{
		digit = n % 10;
		if (digit % 2 == 0) sum += digit;
		n /= 10;
		wq *= 10;
	}
	printf("整数%d最高位的全是%d，各数位上偶数数字和是%d\n", m, wq / 10, sum);
}

void test408()
{
	printf("输入一个正实数 eps :");
	double eps;
	scanf_s("%lf", &eps);
	double item1 = 1, item2 = 1, s = 0;
	int flag = 1, fm = 1;
	do
	{
		s += item2;
		fm += 3;
		item1 = item2;
		flag *= -1;
		item2 = flag *1.0 / fm;
	} while (fabs(fabs(item1) - fabs(item2)) >= eps);
	s += item2;
	printf("S的近似值等于%.4f\n", s);
}

void test410()
{
	printf("输入两个正整数a和n（1位数）：");
	int a, n;
	scanf_s("%d%d", &a, &n);
	double sum = 0;
	int i = 1, j = 1, item=0;
	while (i <= n)
	{
		while (j <= i)
		{
			item = item * 10 + a;
			j++;
		}
		sum += item;
		i++;
	}
	printf("a+aa+aaa+...+a(n个a)=%.0f\n", sum);
}

void test411()
{
	printf("输入一个正整数：");
	long x;
	scanf_s("%ld", &x);
	printf("%ld从最高位开始逐位分离并输出的结果是：",x);
	long wq ;
	int digit, m;
	while(x>0)
	{
		m = x;
		wq = 1;
		while (m > 0)
		{
			digit = m;
			m/= 10;
			wq *= 10;
		}
		printf("%d", digit);
		x -= wq / 10 * digit;
		if (wq > 10) printf(",");
	}
	printf("\n");
}

void test412()
{
	int x1=1,x2;
	for (int i = 1; i <10; i++)
	{
		x2 = 2 * x1 + 2;
		x1 = x2;
	}
	printf("猴子第一天共摘了%d个桃子\n",x1);
}

void test413()
{
	printf("1-10000间左右的水仙花数：");
	int lfh,m,digit,count=0;
	for (int i = 1; i <= 10000; i++)
	{
		lfh = 0;
		m = i;
		while (m > 0)
		{
			digit = m%10;
			m /= 10;
			lfh += digit*digit*digit;
		}
		if (lfh == i)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\n一共有%d个\n",count);
}
