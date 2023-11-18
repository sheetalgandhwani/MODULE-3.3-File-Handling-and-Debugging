#include<stdio.h>
 int main()
{
	int num,a,b,total;

	printf("..........Calculator..........\n");
	printf(" 1. Addition \n");
	printf(" 2. Subtraction \n");
	printf(" 3. Multiplication \n");
	printf(" 4. Division \n");
	
	printf("enter your choice\n");
	scanf("%d",&num);

	switch(num)
	{
		case 1: printf("you have enter Addition\n");
		        printf("enter first number:\n");
		        scanf("%d",&a);
		        printf("enter second number:\n");
		        scanf("%d",&b);
		        total=a+b;
		        printf("Addition is : %d",total);
            break;
            
		case 2: printf(" you have enter subtraction\n");
		        printf("enter first number:\n");
		        scanf("%d",&a);
		        printf("enter second number:\n");
		        scanf("%d",&b);
		        total=a-b;
		        printf("Subtraction is:%d",total);
		       		break;
		       		
		case 3: printf("you have enter Multiplication\n");
		printf("enter first number:\n");
		        scanf("%d",&a);
		        printf("enter second number:\n");
		        scanf("%d",&b);
		        total=a*b;
		        printf("Multiplication is:%d",total);
		        break;
		
		case 4: printf("you have enter Division\n");
		printf("enter first number:\n");
		        scanf("%d",&a);
		        printf("enter second number:\n");
		        scanf("%d",&b);
		        total=a/b;
		        printf("Division is:%d",total);
		        break;
		
		default:printf("Invalid choice...");
		
	}
	
}
