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
	scanf_s("%s", str, 80);
	strcpy_s(max, 80, str);

	p = str;

	for (i = 0; i < 4; i++)
	{
		scanf_s("%s", p, 80);
		if (strcmp(p, max) > 0) strcpy_s(max, 80, p);
	}

	printf("The max string is: %s\n", max);
}

void tesk808()
{
	char c, str[80];

	getchar();
	printf("Input a char:");
	scanf_s("%c", &c);
	printf("Input a strings:");
	scanf_s("%s", str, 80);

	delchar(str, c);

	printf("The result is: %s\n", str);
}

void tesk809()
{
	int m;
	char s[80], t[80];
	printf("请输入一串字符串（小于80字节）：");
	scanf_s("%s", s, 80);
	printf("请输入复制起始位置：");
	scanf_s("%d", &m);

	strmcpy(s, t, m);

	printf("复制后的字符串为：%s\n", t);
}

void tesk810()
{
	int i;
	char s[5][80];
	void sortdown(char(*s)[80], int n);
	printf("请输入5个字符串：");
	for (i = 0; i < 5; i++)
		scanf_s("%s", s[i], 80);
	sortdown(s, 5);
	printf("排序后的字符串为：");
	for (i = 0; i < 5; i++)
		printf("%s ", s[i]);
	putchar('\n');
}

void tesk812()
{
	char str[100], *p = str;
	int k = 0;
	getchar();
	cout << "输入一行字符串(小于100字节）：";
	cin.getline(p, 100);
	while (p[k] != '\0')
	{
		if (p[k - 1] == ' '&&p[k] >= 'a'&&p[k] <= 'z')
			p[k] = p[k] - 32;
		k++;
	}
	if (p[0] >= 'a'&&p[0] <= 'z') 
		p[0] = p[0] - 32;
	cout <<"转换后的字符串为："<< p << endl;
}

void tesk813()
{
	int i = 0, j,k;
	char str[100];
	cout << "请输入一串字符：";
	cin >> str;
	k = strlen(str)-1;
	j = k ;
	while (i<j)
	{
		if (str[i++] != str[j--])
		{
			cout << "该字符串不是回文" << endl;
			return;
		}
	}
	cout << "该字符串是回文" << endl;
}
