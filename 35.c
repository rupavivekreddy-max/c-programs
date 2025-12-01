#include<stdio.h>
int main()
{      
int i,tn,ts;
printf("Enter table Number");
scanf("%d",&tn);
printf("Enter table size");
scanf("%d",&ts);
for(i=1;i<=ts;i++)
{   printf("%d*%d=%d\n",i,tn,i*tn);

}
return 0;


}
