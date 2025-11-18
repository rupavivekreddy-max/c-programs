# c-programs
A collection of C programs written for practice and learning.
#include<stdio.h>
void mult(int,int);
int main()
{  int  x=10,y=20;
mult(x,y);
return 0;

}
 void mult(int x,int y)
 {  int z;
 z= x*y;
 printf("multiplication=%d",z);
 }
