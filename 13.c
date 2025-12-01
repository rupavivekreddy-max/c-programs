#include<stdio.h>
int main()
{
  int a,b,temp;
  printf("Enter a,b values:");
  scanf("%d%d",&a,&b);
  printf("Before swap a=%d b=%d\n",a,b);
  temp=a;
  a=b;
  b=temp;
  printf("After swap a=%d b=%d",a,b);
  return 0;
}
