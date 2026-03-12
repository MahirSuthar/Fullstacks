#include <stdio.h>

void main()
{
    int choice;
    float years, days;

    printf("Choose option:\n");
    printf("1. Convert years to days\n");
    printf("2. Convert days to years\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter years: ");
            scanf("%f", &years);
            days = years * 365; 
            printf("%.2f years = %.2f days\n", years, days);
            break;

        case 2:
            printf("Enter days: ");
            scanf("%f", &days);
            years = days / 365; 
            printf("%.2f days = %.2f years\n", days, years);
            break;

        default:
            printf("Invalid choice!\n");
    }

    getch();
}
