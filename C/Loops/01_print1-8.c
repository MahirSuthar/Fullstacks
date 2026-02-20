#include<stdio.h>
#include<conio.h>

void main(){
	
	int i,j;
	char count;
	
	for(i=1;i<=4;i++){
		for(j=1;j<=i;j++){
		count++;
		printf("%d",count);
		}
	printf("\n");
	}
	getch();
}
