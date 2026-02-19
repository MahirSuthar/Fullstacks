 #include<stdio.h>
 #include<conio.h>
 
 void main(){
 	
 	int math;
 	int sci;
 	int eng;
 	
 	printf("\nEnter the marks of Math : ",math);
 	scanf("%d",&math);
 	
 	printf("\nEnter the marks of Science: ",sci);
 	scanf("%d",&sci);
 
    printf("\nEnter the marks of English : ",eng);
 	scanf("%d",&eng);
 	
 	int avg;
 	avg = (math+sci+eng)/3;
 	printf("\nAverage of the marks : %d",avg);
 	
 	
 	if(avg >=100 || avg <0){
 		printf("\nGrade is invalid...");
	 }else if(avg <=100 && avg >80){
	 	printf("\nA grade....");
	 }else if(avg <=79 && avg >60){
	 	printf("\nB grade....");
	  }else if(avg <=59 && avg >40){
	 	printf("\nC grade....");
     }else {
	 	printf("\nF grade....");
     }
	 
     
     
    
 	
 	
    getch();
 
 }
