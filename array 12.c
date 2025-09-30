#include<stdio.h>
#include<conio.h>

void main()
{
    int arr[100], n, i, newNum;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the new number to insert at beginning: ");
    scanf("%d", &newNum);
    for (i = n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = newNum;
    n++;
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    getch();
}
