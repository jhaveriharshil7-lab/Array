#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,temp;
    int a[5];
    printf("Enter 5 elements :\n");
      for(i=0;i<5;i++)
    {
        printf("\nEnter value %d : ",(i+1));
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    { for(j=0;j<4-i;j++){
    if (a[j]>a[j+1]){
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
    }
    }
    }
    printf("Sorted Array:\n");
    for(i=0;i<5;i++)
    {printf("%d \n",a[i]);
    }
    getch();
    }
