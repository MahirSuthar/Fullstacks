#include<stdio.h>
#include<conio.h>

void main()
{
	int a[3][3],i,j;
	int b[3][3],sub[3][3];
	
	printf("----------Value of A -------------\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the value %d : row  %d : col  :- ",i,j);
			scanf("%d",&a[i][j]);
			
		}
	}
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n[%d][%d]=%d",i,j,a[i][j]);
		
			
		}
		
	}
	
	printf("\n");
	printf("\n");
	printf("------------The value of B-----------------");
	printf("\n");
	printf("\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the value %d : row  %d : col  :- ",i,j);
			scanf("%d",&b[i][j]);
			
		}
	}
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n[%d][%d]=%d",i,j,b[i][j]);
		
			
		}
		
	}
	printf("\n");
	printf("\n");
	printf("-----------------substraction of A and B--------------");
	printf("\n");
	printf("\n");

	
	
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				sub[i][j]=a[i][j]-b[i][j];			
			}
		}
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("\n[%d][%d]=%d",i,j,sub[i][j]);
			}
		}
	
	getch();
}
