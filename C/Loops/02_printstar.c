#include<stdio.h>
#include<conio.h>

int main(){
	
	int i,j,k;
	
	for(i=5;i>=1;i--){
		//for space 
		for(k=i;k<6-1;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
}
