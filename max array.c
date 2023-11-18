  //Write a program to find out the max number from given array using 
  //           function.
#include<stdio.h>
int main()
{
	int a[100],i,max;
	printf("enter array element\n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
		
	}
	max=a[0];
	for(i=0;i<=4;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf(" maximum value of array is:%d",max);	
}
