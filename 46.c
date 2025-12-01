#include<stdio.h>
int main()
{
	int a[100],n,i,sum=0;
	printf("Enter size of the array");
	scanf("%d",&n);
	printf("Enter array values");
	for(i=0;i<n;i++)
	{ scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{ sum=sum+a[i];
	
	} printf("sum of array values =%d",sum);
	return 0;
}
