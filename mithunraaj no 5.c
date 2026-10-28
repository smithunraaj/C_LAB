#include<stdio.h>
int main()
{
	int a[50],b[10][10];
	int n,rows,cols;
	int i,j,sum1,sum2;
	sum1=0;
	sum2=0;
	printf("Enter the number of elements 1D array:");
	scanf("%d",&n);
	printf("Enter %d elements:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n 1D array elements:\n");
	for(i=0;i<n;i++)
	{
		printf("%d",&a[i]);
		sum1=sum1+a[i];
	}
	printf("\n sum of 1D array=%d",sum1);
	printf("\n\nEnter the number of rows in 2D array :");
	scanf("%d",&rows);
	printf("\n\n Enter the number columns in 2D array :");
	scanf("%d",&cols);
	printf("Enter the elements 2D array :\n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			scanf("%d",&b[i][i]);
		}
	}
	printf("\n2D array Elements :\n");
	for(i=0;i<rows;i++)
	{
	for(j=0;j<cols;j++)
		{
			printf("%d\t",b[i][j]);
			sum2=sum2+b[i][j];				
	    }
	printf("\n");
   }
	printf("sum of 2D array=%d",sum2);
	return 0;
}