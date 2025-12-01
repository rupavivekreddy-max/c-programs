#include<stdio.h>
int main()
{
  int s1,s2,s3,s4,s5,total;
  float average;
  printf("Enter s1,s2,s3,s4,s5 values");
  scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
  total=s1+s2+s3+s4+s5;
  printf("Total =%d\n",total);
  average=total/5;
  printf("avg =%f",average);
  return 0;
}
