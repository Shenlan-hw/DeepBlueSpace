﻿#include "test1.h"

void test102()
{ 
	printf("    *\n");
	printf("  * * *\n");
	printf("* * * * *\n");
	printf("  * * *\n");
	printf("    *\n");
	
}

void test104()
{
	int count=0;
	for (int i = 1; i <= 100; i++)
		if (i % 2 == 0)
			count++;
	printf("count=%d\n", count);
}

void test105()
{
	int sum=0,count=0,ave=0;
	for (int i = 1; i <= 100; i++)
	{
		if(i%2!=0)
		{
			sum += i;
			count++;
		}
	}
	ave = sum*1.0 / count;
	printf("sum=%d,count=%d,averagr=%d\n", sum, count, ave);
}
