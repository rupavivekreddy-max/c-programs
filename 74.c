#include<stdio.h>

int sum();
int main()
{
	int x;
	x=sum();
	printf("sum=%d",x);
	return 0;
	}
	int sum()
	{
		int a=10,b=30;
		return (a+b);
	}
