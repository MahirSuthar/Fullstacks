#include<stdio.h>
#include<conio.h>

void main()
{
    int a[10][10], b[10][10], add[10][10], sub[10][10], mul[10][10];
    int i, j, k, r, c;

    printf("Enter rows and columns of matrix: ");
    scanf("%d %d",&r,&c);

    printf("\nEnter elements of Matrix A:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nEnter elements of Matrix B:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    // Addition and Subtraction
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            add[i][j] = a[i][j] + b[i][j];
            sub[i][j] = a[i][j] - b[i][j];
        }
    }

    // Multiplication
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            mul[i][j] = 0;
            for(k=0;k<c;k++)
            {
                mul[i][j] = mul[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    printf("\nAddition of Matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",add[i][j]);
        }
        printf("\n");
    }

    printf("\nSubtraction of Matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",sub[i][j]);
        }
        printf("\n");
    }

    printf("\nMultiplication of Matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }

   getch();
}
