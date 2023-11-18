//Wap to reverse a string and check that the string is palindrome or
//   not.

#include<stdio.h>
#include<string.h>
int main()
{
	char str1[50],str2[50];
	printf("enter the string:\n");
	gets(str1);
	strcpy(str2,str1);
	strrev(str2);
		
	if(strcmp(str1,str2)==0)
	{
		printf("string is palindrome...");
	}
	else
	{
		printf("string is not palindrome...");
	}
	
}
