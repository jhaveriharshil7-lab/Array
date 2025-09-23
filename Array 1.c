#include<stdio.h>
#include<conio.h>
void main()
{   int i;
    int num[5];
    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) {
    printf("Number %d: ", i + 1);
    scanf("%d", &num[i]);
    }
    printf("\nYou entered:\n");
    for(i = 0; i < 5; i++) {
    printf("%d ", num[i]);
    }
    printf("\n");
    getch();
    }
