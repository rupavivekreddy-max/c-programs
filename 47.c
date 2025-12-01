#include<stdio.h>
int main()
{
	int a[100],n,i,min,max;
	printf("Enter size of the array");
	scanf("%d",&n);
	printf("Enter array values");
	for(i=0;i<n;i++)
	{ scanf("%d",&a[i]);
	}
	min=max=a[0];
	for(i=1;i<n;i++)
	{ if(min>a[i])
	min=a[i];
	else if(max<a[i])
	max=a[i];
	
	}
	printf("minimum value=%d",min);
	printf("\n maximum value=%d",max);
	return 0;
}
