#pragma once
#include <stdio.h>
#include <string.h>
double fact(int n);                 //求n的阶乘
double power(double x, int n);      //求x的n次方
int gbs(int m, int n);				//取m,n公倍数
int gys(int p, int q);				//取m,n公约数
int prime(int n);					//判断n是否为奇数
double funtwo(int n, double x);		//求n阶勒让德多项式的值
int is(int number);					//用于判断数字各位数的立方和是否等于数本身
int fibonacci(int n);				//用于求n的Fibonacci数
int factorsum(int i);				//返回i的因子和
int dectobin(int n);					//计算并返回n的二进制
double fun(int n);					//计算表达式t=1*3*5*7*…*(2n-1)的值（n>=1）
int count(int *list, int n, int x);	//用于查找数组list中x的个数，其中：n为list所指向数组的元素个数。
void sort(int *list, int n);			//用冒泡法对指针list所指向的数组进行降序排列，其中：n为list所指向数组的元素个数。
void delchar(char * list, char c);	//该函数将字符串list中出现的所有c字符删除。
