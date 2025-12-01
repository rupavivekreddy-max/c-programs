#include<stdio.h>
int main()
{
  float P,T,R,SI;
  printf("Enter P,T & R values:");
  scanf("%f%f%f",&P,&T,&R);
  SI=(P*T*R)/100;
  printf("Simple interest =%f",SI);
  return 0;
}
