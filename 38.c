#include<stdio.h>
#include<math.h>
int main()
{   int n,s;
  hi:
  	printf("eneter n value");
  	scanf("%d",&n);
  	if(n<0)
  	goto hi;
  	s=sqrt(n);
  	printf("squre root is=%d",s);
  	return 0;
}
