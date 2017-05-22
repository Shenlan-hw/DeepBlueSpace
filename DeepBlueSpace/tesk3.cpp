#include "tesk3.h"

void tesk302()
{
	double x, y;
	printf("输入工资x(x>=0):");
	scanf_s("%lf", &x);
	if (x <= 30000) y = 0;
	else if (x <= 50000)
	{
		y = (x - 30000)*0.03;
	}
	else if (x <= 100000)
	{
		y = 20000 * 0.03 + (x - 50000)*0.06;
	}
	else y = 20000 * 0.03 + 50000 * 0.06 + (x - 100000)*0.1;
	printf("工资x=%.2f,所得税u=%.2f\n", x, y);
}

void tesk304()
{
	double a, b, c, s, area;
	printf("请输入三边：");
	scanf_s("%lf%lf%lf", &a, &b, &c);
	if (a >= b + c || b >= a + c || c >= a + b)
	{
		printf("这三边不能构成三角形\n");
		return;
	}
	else if (a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b)
	{
		if (a == b || b == c || c == a)
		{
			s = (a + b + c) / 2;
			area = sqrt(s*(s - a)*(s - b)*(s - c));
			printf("该三角形为等腰直角三角形，面积s=%.2f\n", area);
			return;
		}
		s = (a + b + c) / 2;
		area = sqrt(s*(s - a)*(s - b)*(s - c));
		printf("该三角形为非等腰直角三角形，面积s=%.2f\n", area);
		return;
	}
	s = (a + b + c) / 2;
	area = sqrt(s*(s - a)*(s - b)*(s - c));
	printf("该三角形为非直角三角形，面积s=%.2f\n", area);
	return;
}

void tesk306()
{
	//A-[90,100]、B-[80,89]、C-[70,79]、D-[60,69]、E-[0,59]。
	printf("请输入一个百分制成绩：");
	double n;
	scanf_s("%lf", &n);
	printf("百分制成绩%.2f转换为五级制成绩为：", n);
	switch ((int)n / 10)
	{
	case 9:printf("A\n"); break;
	case 8:printf("B\n"); break;
	case 7:printf("C\n"); break;
	case 6:printf("D\n"); break;
	default:printf("E\n"); break;
	}
}

void tesk307()
{
	printf("请输入学生总人数（正整数）：");
	int n;
	scanf_s("%d", &n);
	printf("请输入%d个学生成绩；", n);
	double score, sum = 0;
	int A = 0, B = 0, C = 0, D = 0, E = 0;
	for (int i = 1; i <= n; i++)
	{
		scanf_s("%lf", &score);
		sum += score;
		switch ((int)score / 10)
		{
		case 9:case 10:A++; break;
		case 8:B++; break;
		case 7:C++; break;
		case 6:D++; break;
		default:E++; break;
		}
	}
	double average;
	average= sum / n;
	printf("平均分=%.2f\nA级人数=%d,B级人数=%d,C级人数=%d,D级人数=%d,E级人数=%d\n", average, A, B, C, D, E);
}
