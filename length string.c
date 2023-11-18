  // WAP to find out length of string without using inbuilt function.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char str[50],i,count=0;
	printf("enter string ");
  gets(str);
  	for(i=1;str[i]!=0;i++)
   {
		   count++;
	  } 
     printf("length of string is:%d ",i);
	
}
