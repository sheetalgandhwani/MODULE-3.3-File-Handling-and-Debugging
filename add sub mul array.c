 //Wap to make addition,subtraction and multiplication of two matrix 
 //   using 2-D array.

#include<stdio.h>
int main()
{
	int a[2][2],b[2][2],add[2][2],sub[2][2],mul[2][2];
		int i,j;
	
	
	printf(".........matrix 1...........\n");
    for(i=0;i<2;i++)
 	{
		for(j=0;j<2;j++)
		{
			printf("enter array element:");
			scanf("%d",&a[i][j]);
		}
	}
	 for(i=0;i<2;i++)
 	{
		for(j=0;j<2;j++)
		{
			
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf(".........matrix 2...........\n");
    for(i=0;i<2;i++)
 	{
		for(j=0;j<2;j++)
		{
			printf("enter array element:");
			scanf("%d",&b[i][j]);
		}
	}
	 for(i=0;i<2;i++)
 	{
		for(j=0;j<2;j++)
		{
			
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	
	
    for(i=0;i<2;i++)
 	{
		for(j=0;j<2;j++)
		{
		
		  add[i][j]=a[i][j]+b[i][j];
		  sub[i][j]=a[i][j]-b[i][j];
		  mul[i][j]=a[i][j]*b[i][j];
		}
	}
		printf(".........addition of 2 matrix...........\n");
	 for(i=0;i<2;i++)
 	{
		for(j=0;j<2;j++)
		{
			
			printf("%d\t",add[i][j]);
		
			
		}
	    printf("\n");
  }
  	printf(".........subtraction of 2 matrix...........\n");
  for(i=0;i<2;i++)
 	{
		for(j=0;j<2;j++)
		{
			
			
			printf("%d\t",sub[i][j]);
			
			
		}
	    printf("\n");
  }
  	printf(".........multiplication of 2  matrix...........\n");
  for(i=0;i<2;i++)
 	{
		for(j=0;j<2;j++)
		{
			
			
			printf("%d\t",mul[i][j]);
			
		}
	    printf("\n");
  }
}
