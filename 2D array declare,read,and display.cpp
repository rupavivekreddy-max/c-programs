#include<stdio.h>
int main()
{        
       int a[10][10],r,c,i,j;
       printf("Enter row and coloumn sizes");
       scanf("%d%d",&r,&c);
       printf("Enter 2D array values ");
       for(i=0;i<r;i++)
       {  for(j=0;j<r;j++)
         { scanf("%d",&a[i][j]);
		 }
	   }
        printf("\n Display 2D array values ");
        for(i=0;i<r;i++)
       {  for(j=0;j<r;j++)
      {printf("  %d",a[i][j]);
	  }
	    
   printf("\n");}
   return 0;
}
    

