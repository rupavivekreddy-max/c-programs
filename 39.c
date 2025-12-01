
#include<stdio.h>
int main()
{   int x;
	printf("enter x value");
	scanf("%d",&x);
	switch(x>0)
	{ case 1: printf("It is possitive");
	          break;
	case 0: printf("It is negative");
	          break;
	}
	return 0;
	}
  
