#include<stdio.h>
int main()
{
  int a,b,c,max;
  printf("Enter a,b,c values:");
  scanf("%d%d%d",&a,&b,&c);
  max=(a>b)?((a>c)?a:c):((b>c)?b:c);
  printf("maximum of three number =%d",max);
  return 0;
}
