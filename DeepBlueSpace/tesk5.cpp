#include "tesk5.h"

void tesk502()
{
	int i = 1, n, flag = 1;
	double x, item = 0, sum = 0;
	printf_s("输入一个正整数n和一个实数x:");
	scanf_s("%d%lf", &n, &x);
	while (i <= n) {
		item = power(x, 2 * i - 2) / fact(2 * i - 2);
		sum += flag*item;
		flag = -flag;
		i++;
	}
	printf("cos(x)的近似值=%0.4f\n", sum);
}

void tesk504()
{
	int m, n;
	int gbs(int m, int n);
	printf("输入两个正整数m和n:");
	scanf_s("%d%d", &m, &n);
	printf("%d与%d的最小公倍数是:%d\n", m, n, gbs(m, n));
}

void tesk506()
{
	int i, m, n, flag = 0, count = 0, sum = 0;
	int prime(int n);
	printf("输入两个正整数m和n(1<=m<=n<=500):");
	scanf_s("%d%d", &m, &n);
	i = m;
	while (i <= n) {
		if (prime(i))
		{
			count++;
			sum += i;
		}
		i++;
	}
	printf("%d到%d之间的素数个数=%d,素数和=%d\n", m, n, count, sum);
}

void tesk508()
{
	int i, m, n, count = 0, sum = 0;
	int is(int number);
	printf("输入两个正整数m和n (1<=m<=n<=1000):");
	scanf_s("%d%d", &m, &n);
	i = m;
	while (i <= n) {
		if (is(i))
		{
			count++;
			sum += i;
		}
		i++;
	}
	printf("%d到%d之间满足条件的数的个数为%d个，累加和等于%d.\n", m, n, count, sum);
}

void tesk509()
{
	int  m, n;
	int fib(int n);
	printf("输入两个正整数m和n(1<=m<=n<=10000)；");
	scanf_s("%d%d", &m, &n);
	printf("第%d项到第%d项的Fibonacci数是：\n", m, n);
	while (m <= n) {
		printf("%d  ", fib(m));
		m++;
	}
	putchar('\n');
}

void tesk510()
{
	int m, n;
	int factorsum(int i);
	printf("输入两个正整数m和n(1<=m<=n<=10000):");
	scanf_s("%d%d", &m, &n);
	printf("m到n之间的所有完数是：\n");
	while (m <= n) {
		if (factorsum(m) == m) printf("%d  ", m);
		m++;
	}
	putchar('\n');
}

void tesk511()
{
	int n;
	int dectobin(int n);
	printf("输入一个正整数n:");
	scanf_s("%d", &n);
	printf("十进制数%d的二进制数是%d\n", n, dectobin(n));
}

void tesk513()
{
	double t;
	int n;
	double fun(int n);
	cout << "求t=1*3*5*7*…*(2n-1)的值" << endl;
	cout << "请输入n的值：";
	cin >> n;
	t = fun(n);
	cout << " t = 1 * 3 * 5 * 7 * …* " << 2 * n - 1 << "的值等于" << t << endl;
}

void tesk514()
{
	int n;
	double x;
	double funtwo(int n, double x);
	cout << "n阶勒让德多项式的值 \n";
	cout << "请输入一个整数n:";
	cin >> n;
	cout << "请输入一个实数x:";
	cin >> x;
	cout << n << "阶勒让德多项式的值:" << funtwo(n, x) << endl;
}
