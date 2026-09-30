#include<stdio.h>
int main()
{
	int a,b,res,choice;
	printf("====BITWISE OPERTION====\n");
	printf("enter the first number:");
	scanf("%d",&a);
	printf("enter the second number:");
	scanf("%d",&b);
	printf("\n____MENU____\n");
	printf("1.BITWISE AND(&)\n");
	printf("2.BITWISE OR(|)\n");
	printf("3.BITWISE XOT(^)\n");
	printf("4.BITWISE NOT(~)\n");
	printf("5.LEFT SHIFT(<<)\n");
	printf("6.RIGHT SHIFT(>>)\n");
	printf("\nENTER YOUR CHOICE:");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1:
			res=a&b;
			printf("BITWISE AND RESULT=%d",res);
			break;
		case 2:
			res=a|b;
			printf("BITWISE OR RESULT=%d",res);
			break;
		case 3:
			res=a^b;
			printf("BITWISE XOR RESULT=%d",res);
			break;
		case 4:
			res=~a;
			printf("BITWISE NOT RESULT=%d",res);
			break;
		case 5:
		    res=a<<b;
		    printf("LEFT SHIFT RESULT=%d",res);
			break;
		case 6:	
			res=a>>b;
			printf("RIGHT SHIFT RESULT=%d",res);
			break;
		default:
			printf("INVALID CHOICE.");
			
	}
	
}