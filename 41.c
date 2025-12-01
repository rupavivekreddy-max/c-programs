#include<stdio.h>
int main()
{   int x;
	printf("enter x value");
	scanf("%d",&x);
	switch(x%2==0)
	{ case 1: printf("x is even");
	          break;
	case 0: printf("x is odd");
	          break;
	}
	return 0;
	}
  
