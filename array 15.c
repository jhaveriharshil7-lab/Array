#include<stdio.h>
#include<conio.h>
void main()
    {
    int arr[100], n, i;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    if(n==0){
    printf("Array is empty");
    }
    else{
    for(i=0;i<n-1;i++){
    arr[i]=arr[i+1];}
    }
    n--;
        printf("Array after deletion:\n");
        for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    getch();
    }
