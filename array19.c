#include <stdio.h>
#include<conio.h>
void main() {
    int arr[100], n, i, search, found = 0;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter value to search: ");
    scanf("%d", &search);
    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
            printf("Value %d found at position %d\n", search, i + 1);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Value %d not found in array.\n", search);
    }
    getch();
}
