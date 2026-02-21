#include<stdio.h>
#include<conio.h>
 
void fibonacci(int num){

int n1=0,n2=1,n3,count;
printf("Fibonacci series\n");
printf("%d\n%d\n",n1,n2);
for(count=3;count<=num;count++){

n3=n1+n2;
printf("%d\n",n3);
n1=n2;
n2=n3;
}
printf("\n");
}
void main()
{
	int limit;
	printf("Enter how much number needed!....");
	scanf("%d",&limit);
	fibonacci(limit);
	getch();
}
