#include <stdio.h>
int main()
{
    int a, b, choice, res;
    printf("====BRANCHING STATEMENT====\n");
    printf("\nEnter the first number:");
    scanf("%d",&a);
    printf("\nEnter the second number:");
    scanf("%d",&b);
    printf("\n____MENU____\n");
    printf("1.check positive,negative or zero\n");
    printf("2.check even or odd\n");
    printf("3.find largest of two number\n");
    printf("4.check the divisibility by 5\n");
    printf("\nEnter your choice:");
    scanf("%d",&choice);
    printf("\n____RESULT____\n");       
    switch(choice)
    {
        case 1:
        	
            if(a > 0)
                printf("%d is positive",a);
            else if(a < 0)
                printf("%d is negative",a);
            else
                printf("%d is Zero",a);
            break;

        case 2:
            
            if(a % 2 == 0)
                printf("%d is Even",a);
            else
                printf("%d is Odd",a);
            break;

        case 3:
            
            if(a > b)
                {
				res=a;
                printf("%d is the largest", a);
				}
            else if(b > a)
			   {
                res=b;
                printf("%d is the largest", b);
			   }
            else
                printf("Both number are equal");
            break;

        case 4:
            
            if(a % 5 == 0)
                printf("%d is divisible by 5", a);
            else
                printf("%d is not divisible by 5", a);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}