#include"tesk6.h"
#include"function.h"
void tesk602()
{
	int i = 0, n = 0, count = 0, sum = 0;
	double aver = 0;
	int xh[100], sg[100];
	char c = '1', d = '2';
	getchar();
	printf("输入一批（不超过100人）的学生的学号与身高:\n");
	while (c != '\n')
	{
		c = getchar();
		if (c == '\n')
			break;
		else
		{
			xh[n] = (int)c - 48;
			if (c = getchar() != ' ')
				xh[n] = xh[n] * 10 + (int)c - 48;
			scanf_s("%d", &sg[n]);
			n++;
		}
		getchar();
	}
	while (i < n)
	{
		sum += sg[i];
		i++;
	}

	if (n > 0) aver = sum / n;
	else aver = 0;
	printf("身高超过平均身高(%0.fcm)或者身高超过170cm的学生的信息:\n", aver);
	printf("学号 身高\n");
	i = 0;
	while (i < n)
	{
		if (sg[i] > aver || sg[i] > 170)
		{
			printf("%2d    %3d\n", xh[i], sg[i]);
			count++;
		}
		i++;
	}

	printf("身高超过平均身高%.0fcm或超过170cm的学生的人数是%d人\n", aver, count);
}

void tesk604()
{
	int i = 1, index1 = 1, index2 = 1;
	int a[100];
	printf("输入一批（不超过100个）互不相同的整数（0结束）：\n");
	scanf_s("%d", &a[i]);
	while (a[i] != 0)
	{
		if (a[index1] < a[i]) index1 = i;
		if (a[index2] > a[i]) index2 = i;
		i++;
		scanf_s("%d", &a[i]);
	}
	printf("a[%d]是最大值%d\n", index1, a[index1]);
	printf("a[%d]是最小值%d\n", index2, a[index2]);
}

void tesk606()
{
	int b[16], t, m, n, k, r;
	printf("请输入一个十进制整数：");
	scanf_s("%d", &n);
	printf("请输入一个需要转换的数据类型（2,8,16）：");
	scanf_s("%d", &m);
	t = n;
	k = -1;
	while (n != 0)
	{
		r = n %m;
		k++;
		b[k] = r;
		n /= m;
	}

	printf("十进制整数%d转换为%d进制数，结果=", t, m);
	while (k >= 0)
	{
		switch (b[k]) {
		case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:case 9:printf("%d", b[k]); break;
		case 10:case 11:case 12:case 13:case 14:case 15:printf("%c", 55 + b[k]); break;
		}
		k--;
	}
	putchar('\n');
}

void tesk608()
{
	int i, j, x, n, a[10];
	printf("输入数据的个数（0<n<9）：");
	scanf_s("%d", &n);
	printf("输入%d个升序整数：", n);
	for (i = 0; i < n; i++)
		scanf_s("%d", &a[i]);
	printf("输入要插入的整数：");
	scanf_s("%d", &x);
	i--;
	j = n;
	while ((a[i] >= x && a[i - 1] <= x) != 1)
		i--;
	while (j > i)
	{
		j--;
		a[j + 1] = a[j];
	}
	a[i] = x;
	n++;
	printf("插入%d后的输出结果：", x);
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
	putchar('\n');
}

void tesk609()
{
	printf("请输入一个正整数n(1<n<=10)：");
	int n;
	scanf_s("%d", &n);
	printf("输入%d个互不相同的整数：", n);
	int z[10];
	int max = 0, min = 0;
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &z[i]);
		if (z[i] > z[max])max = i;
		if (z[i] < z[min])min = i;
	}
	int temp;
	temp = z[0];
	z[0] = z[min];
	z[min] = temp;
	temp = z[n - 1];
	z[n - 1] = z[max];
	z[max] = temp;
	printf("互换后的%d个整数依次是：", n);
	for (int i = 0; i < n; i++)
		printf("%d ", z[i]);
	putchar('\n');
}

void tesk610()
{
	printf("输入数据的个数（0<n<9）：");
	int n;
	scanf_s("%d", &n);
	printf("输入%d个互不相同的整数：", n);
	int z[8];
	for (int i = 0; i < n; i++)
		scanf_s("%d", &z[i]);
	printf("输入要删除的整数：");
	int del;
	scanf_s("%d", &del);
	int i;
	for (i = 0; i < n; i++)
		if (z[i] == del) break;
	for (; i < n; i++) z[i] = z[i + 1];
	n--;
	for (int k = 0; k < n - 1; k++)
	{
		for (i = 1; i < n - k; i++)
		{
			if (z[i - 1] > z[i]) {
				int temp = z[i - 1];
				z[i - 1] = z[i];
				z[i] = temp;
			}
		}
	}
	printf("删除%d后的排序结果：", del);
	for (i = 0; i < n; i++)
		printf("%d ", z[i]);
	putchar('\n');
}

void tesk612()
{
	printf("输入一个正整数n(1≤n≤6)：");
	int n;
	scanf_s("%d", &n);
	int fz[6][6];
	int diagonal_Non = 0;
	for (int j = 0; j < n; j++) {
		for (int i = 0; i < n; i++)
		{
			scanf_s("%d", &fz[j][i]);
			diagonal_Non += fz[j][i];
		}
	}
	int  diagonal_main = 0;
	for (int i = 0; i < n; i++)
		diagonal_main += fz[i][i];
	int diagonal_vice = 0;
	for (int i = 0; i < n; i++)
		diagonal_vice += fz[i][n - i - 1];
	diagonal_Non -= diagonal_main + diagonal_vice;
	printf("方阵主对角线元素和=%d\n方阵副对角线元素=%d\n方阵非对角线元素和=%d\n", diagonal_main, diagonal_vice, diagonal_Non);
}

void tesk615()
{
	printf("请输入一个正整数n(1≤n＜10)：");
	int n;
	scanf_s("%d", &n);
	printf("输入一个%d阶方阵：\n", n);
	int fz[6][6];
	int max_x = 0, max_y = 0, min_x = 0, min_y = 0;
	for (int j = 0; j < n; j++) {
		for (int i = 0; i < n; i++)
		{
			scanf_s("%d", &fz[j][i]);
			if (fz[j][i] > fz[max_x][max_y])
			{
				max_x = j;
				max_y = i;
			}
			if (fz[j][i] < fz[min_x][min_y])
			{
				min_x = j;
				min_y = i;
			}
		}
	}
	int temp;
	temp = fz[max_x][max_y];
	fz[max_x][max_y] = fz[min_x][min_y];
	fz[min_x][min_y] = temp;
	printf("交换后的%d阶方阵：\n", n);
	for (int j = 0; j < n; j++) {
		for (int i = 0; i < n; i++)
			printf("%d ", fz[j][i]);
		putchar('\n');
	}
	putchar('/n');
}

void tesk616()
{
	printf("请输入一个正整数n(1≤n≤6)：");
	int n;
	scanf_s("%d", &n);
	int fz[6][6];
	printf("请输入一个%d阶方阵：\n", n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			scanf_s("%d", &fz[i][j]);
	}
	int row = 0, col = 0, count = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (fz[i][j] > fz[row][col])
				col = j;
		}
		for (int k = 0; k < n; k++) {
			if (fz[k][col] < fz[row][col]) row = k;
		}
		if (row == i) {
			if (count == 0)
				printf("方阵中鞍点存在：\n");
			printf("[%d,%d]", row + 1, col + 1);
			count++;
		}
	}
	if (count == 0)printf("NO");
	putchar('\n');
}

void tesk618()
{
	int flag = 0, sub = 0, i = 0;
	char cc, ch, str[MAXLEN];
	printf("输入一个字符:");
	cc = getchar();
	getchar();
	printf("输入一个以回车结束的字符串（少于80个字符）:");
	getchar();
	while ((ch = getchar()) != '\n'&&i < MAXLEN - 1)
	{
		str[i++] = ch;
	}
	str[i] = '\0';
	while (sub < i)
	{
		if (str[sub++] == cc)
		{
			if (!flag)
			{
				flag = 1;
				printf("%c出现的位置有：", cc);
			}
			printf("%d ", sub + 1);
		}
	}
	printf("\n");
	if (!flag) printf("Not Found\n");
}

void tesk620()
{
	int i = 0, k = 0;
	long number = 0;
	char ch, str[MAXLEN];
	printf("输入一个以回车结束的字符串（少于80个字符）:");
	getchar();
	while ((ch = getchar()) != '\n'&&i < MAXLEN - 1)
	{
		str[i++] = ch;
	}
	str[i] = '\0';
	int tmp;
	while (k < i)
	{
		if (str[k] < 48 || (str[k] > 57 && str[k] < 65) || str[k]>70)
		{
			tmp = k;
			while (tmp < i) {
				str[tmp] = str[tmp + 1];
				tmp++;
			}
			i--;
			k--;
		}
		k++;
	}
	k = 0;
	while (k < i) {
		if (str[k] < 65) number += ((int)str[k] - 48)* power(16, i - k - 1);
		else  number += ((int)str[k] - 55)* power(16, i - k - 1);
		k++;
	}
	printf("十进制整数=%ld\n", number);
}


void tesk621()
{
	printf("连续输入一批以回车结束的字符串（少于80个字符）:");
	char ch, str[MAXLEN];
	int i = 0;
	getchar();
	while ((ch = getchar()) != '\n'&&i < MAXLEN - 1)
	{
		str[i++] = ch;
	}
	str[i] = '\0';
	for (int k = 0; k < i; k++) {
		if (str[k] >= 65 && str[k] <= 90) {
			str[k] = (char)(155 - (int)str[k]);
		}
	}
	printf("转换后的字符串：");
	for (int k = 0; k < i; k++)
		putchar(str[k]);
	putchar('\n');
}

void tesk622()
{
	printf("连续输入一批以回车结束的字符串（少于80个字符）:");
	char ch, str[MAXLEN];
	int i = 0;
	getchar();
	while ((ch = getchar()) != '\n'&&i < MAXLEN - 1)
	{
		str[i++] = ch;
	}
	str[i] = '\0';
	int sum = 0;
	for (int k = 0; k < i; k++) {
		if (str[k] >= 65 && str[k] <= 90) {
			switch (str[k]) {
			case 'A':case 'E':case 'I':case 'O':case 'U':break;
			default:sum++;
			}
		}
	}
	printf("字符串中，大写辅音字母一个有%d个\n", sum);
}