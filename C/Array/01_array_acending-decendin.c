#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,temp;
	int a[5];
	
	
	for(i=0;i<5;i++)
	{
	printf("Enter the Elements :");
	scanf("%d",&a[i]);
	}
	printf("\nStored Elements---");
	
	for(i=0;i<5;i++)
	{
		printf("\n%d :%d",i,a[i]);
	}
	printf("\n------Printing Ascending order------");
	
	for(i=0;i<5;i++)
	{
		for(j=i;j<5;j++)
		{
			if(a[i]>a[j])
			{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		printf("\n%d :%d",i,a[i]);
	}
	printf("\n------Printing Decending order------");
	
	for(i=0;i<5;i++)
	{
		for(j=i;j<5;j++)
		{
			if(a[i]<a[j])
			{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		printf("\n%d :%d",i,a[i]);
	}
	getch();
}
