#include<stdio.h>
#include<math.h>
int main()
{
  float P,t,R,CI;
  printf("Enter P,t & R values:");
  scanf("%f%f%f",&P,&t,&R);
  CI=P*(pow(1+R/100,t)-1);
  printf("Compound interest = %f",CI);
  return 0;
}
