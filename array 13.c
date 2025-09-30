#include<stdio.h>
#include<conio.h>
void main()
    {
    int arr[100], n, i, newNum,pos;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the new number to be inserted: ");
    scanf("%d", &newNum);
    printf("Enter the position where to insert",n+1);
    scanf("%d",&pos);
    if(pos<1 || pos>n+1)
    {
        printf("Invalid Position!");
    }
    else{
        for(i=n;i>=pos;i--){
            arr[i]=arr[i-1];
        }
        arr[pos-1]=newNum;
        n++;
        printf("Array after insertion:\n");
        for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    }
    getch();
    }

