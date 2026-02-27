#include<stdio.h>
#include<conio.h>

int main()
{
	FILE  *file;
	file = fopen("data.txt","w");
	
	if(file == NULL)
	{
		printf("ERROR : Data not Found");
		return 1;
	}
	
	fprintf(file,"Hello, this is handling file with  write mode");
	fclose(file);
	printf("File is succesfully printed");
	
	
	return 0;
}
