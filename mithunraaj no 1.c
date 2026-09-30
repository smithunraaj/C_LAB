#include<stdio.h>
int main()
{
	int a,b,choice ,res ;
	printf("\n====OPERATION AND EXPRESSION====\n");
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("Enter the second number:");
	scanf("%d",&b);
	printf("\n_____MENU_____\n");
	printf("1.Addition\n");
	printf("2.Subtraction\n");
	printf("3.Multiplication\n");
	printf("4.Division\n");
	printf("5.Modulus\n");
	printf("\nEnter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
		res=a+b;
		printf("result=%d",res);
		break;
	case 2:
		res=a-b;
		printf("result=%d",res);
		break;
	case 3:
		res=a*b;
		printf("result=%d",res);
		break;
	case 4:
		if(b!=0)
		{
			res=a/b;
			printf("result=%d",res);		
		}
		else
		   {
			printf("\n division by zero is not possible");			
			}
		break;
	case 5:
		if(b!=0)
		{
		    res=a%b;
		    printf("result=%d",res);
		}
		else
		{
		    printf("\n modulus is zero is not possible");		   
		    break;
		default:
		printf("invalid choice.");
		}
		
		
					
	}
}