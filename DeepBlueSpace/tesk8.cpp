#include "tesk8.h"

void tesk802()
{
	int i, n, x, a[10], res;
	int count(int *list, int n, int x);
	 
	printf("请输入一个整数n（1≤n≤10）：");
	scanf_s("%d", &n);
	printf("请输入%d个整数：", n);
	for (i = 0; i < n; i++)
		scanf_s("%d", &a[i]);
	printf("请输入待查找的整数：");
	scanf_s("%d", &x);
	
	res = count(a, sizeof(a) / sizeof(a[0]), x);

	printf("数组a中包含整数%d的个数 =%2d\n", x, res);
}

void tesk804()
{
	int i, n, a[10];
	void sort(int *, int);

	printf("请输入一个正整数n（1≤n≤10）：");
	scanf_s("%d", &n);
	printf("请输入%d个整数：", n);
	for (i = 0; i < n; i++)
		scanf_s("%d", &a[i]);

	sort(a, sizeof(a) / sizeof(a[0]));

	printf("降序排序后的结果是: ");
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
	putchar('\n');

}

void tesk806()
{
	int i;
	char str[80], max[80], *p;

	printf("Input 5 strings:");
	scanf_s("%s",str,80);
	strcpy_s(max,80, str);

	p = str;

	for (i = 0; i < 4; i++)
	{
		scanf_s("%s",p,80);
		if (strcmp(p, max) > 0) strcpy_s(max,80, p);
	}

	printf("The max string is: %s\n",max);
}
void tesk808()
{
	char c, str[80];
	
	getchar();
	printf("Input a char:");
	scanf_s("%c",&c);
	printf("Input a strings:");
	scanf_s("%s", str,80);
	
	delchar(str,c);

	printf("The result is: %s\n", str);
}
