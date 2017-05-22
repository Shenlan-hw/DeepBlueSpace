#include "function.h"
#include <stdio.h>

double fact(int n)
{
	int i = 1;
	int sum = 1;
	while (i <= n)
	{
		sum *= i;
		i++;
	}
	return sum;
}

double power(double x, int n)
{
	int i = 1;
	double sum = 1;
	while (i <= n)
	{
		sum *= x;
		i++;
	}
	return sum;
}

int gbs(int m, int n)
{
	int gys(int p, int q);
	if (n > m)
		return m *n / gys(n, m);
	return m*n / gys(m, n);
}

int gys(int p, int q)
{
	if (q == 0) return p;
	int r = p%q;
	return  gys(q, r);
}

int prime(int n)
{
	int i;
	if (n < 2) return 0;
	for (i = 2; i*i <= n; i++)
		if (n%i == 0) return 0;
	return 1;
}

double funtwo(int n, double x)
{
	int i = 2;
	double p, p1 = 0, p2 = 1;
	if (n == 0) return 1;
	else if (n == 1) return x;
	else {
		p1 = x;
		while (i <= n) {
			p = (2 * i - 1) - p1 - (i - 1)*p2;
			p /= i;
			p2 = p1;
			p1 = p;
			i++;
		}
		return p;
	}
}

int is(int number)
{
	int temp = number, w = 1, sum = 0;
	while (temp > 0) {
		w = 1;
		for (int n = temp; n != 0; n /= 10, w *= 10);
		w /= 10;
		sum += (temp / w)* (temp / w)* (temp / w);
		temp -= temp / w*w;
	}
	if (sum == number)
		return 1;
	else return 0;
}

int fib(int n)
{
	int i = 2, a1 = 0, a2 = 1, temp;
	while (i <= n)
	{
		temp = a1;
		a1 = a2;
		a2 += temp;
		i++;
	}
	return a2;
}

int factorsum(int i)
{
	int n = 1, sum = 0;
	while (n <= i / 2) {
		if (i%n == 0) 	sum += n;
		n++;
	}
	return sum;
}

int dectobin(int n)
{
	int i = 0, k = 1;
	while (n != 0) {
		i += n % 2 * k;
		k *= 10;
		n = n / 2;
	}
	return i;
}

double fun(int n)
{
	int i = 1;
	double s = 1;
	while (i <= n)
	{
		s *= 2 * i - 1;
		i++;
	}
	return s;
}