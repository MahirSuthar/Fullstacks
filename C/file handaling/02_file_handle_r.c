#include<stdio.h>
#include<conio.h>

int main ()
{
	FILE  *file;
	file = fopen("img.txt","w");
	
	if(file ==NULL)
	{
		printf("Error : File not found.....");
		return 1;
	}
	printf("File is succesfully printed");
	
	fprintf(file,"Hello this is text file");
	fclose(file);
	
	return 0;
}
