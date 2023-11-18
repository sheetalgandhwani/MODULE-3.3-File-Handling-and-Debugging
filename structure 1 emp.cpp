  // Write a program of structure employee that provides the following 
  // information-print and display empno,empname,address, age.

#include<stdio.h>
struct employee{
	int empno;
	char empname[30], address[50];
	int age;
}e1;

 int main()
   {
   	   struct employee e1 ;
   	
   	   printf("enter employee number\n");
		   scanf("%d",&e1.empno);
		   
		   printf("enter employee name:\n");
		   scanf("%s",&e1.empname);
		   
		   printf("enter address:\n");
		   scanf("%s",&e1.address);
		   
		   printf("enter age of employee:\n");
		   scanf("%d",&e1.age);
		   
	    printf("Employee number : %d\n",e1.empno);
	   	printf("Employee name: %s\n",e1.empname);
	   	printf("Address of employee: %s\n",e1.address);
	   	printf("Age of employee: %d\n",e1.age);
	   
   }
