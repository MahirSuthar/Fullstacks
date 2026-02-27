#include<stdio.h>
#include<conio.h>

int main()
{
	char str[]="Mahir suthar";
	char *p = str;

	for(p=str;p !='\0';p++)
	{
		printf("pointer = %c",*p);
	}
	
	
	return 0;
}
