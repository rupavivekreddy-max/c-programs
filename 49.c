#include<stdio.h>
int main()
{    int a[100],n,i,low,high,mid,x;
	printf("Enter size of the array");
	scanf("%d",&n);
	printf("Enter array values");
	for(i=0;i<n;i++)
	{ scanf("%d",&a[i]);
	}
		printf("Enter search element");
		scanf("%d",&x);
		low=0; 
		high=n-1;
		mid=(low+high)/2;
		while(low<high)
		{ if(x==a[mid])
		break;
		
		
		else if(x>a[mid])
		low=mid+1;
		else
		high=mid-1;
		mid=(low+high)/2;}
		if(x==a[mid])
		printf("search element is found");
		else
		printf("search element is not found");
		return 0;
		
	   
}
