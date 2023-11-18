 //Wap to find factorial using recursion.
#include<stdio.h>
int main()
{
	int n,f;
	printf("enter a number:\n");
	scanf("%d",&n);
	 f=fact(n);
	printf("factorial of %d is:%d",n,f);
}		 
int fact(int n)
{

   if(n==0)
   {
   	return 1;
	 }
	 else
	 {
	 	 return n*fact(n-1);
	 }
}
 
