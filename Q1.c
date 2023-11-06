#include <stdio.h>

int main() {
    int arr[10];
    int i;


    printf("Enter 10 elements:\n");
    for (i = 0; i < 10; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }


    printf("\nElements in reverse order:\n");
    for (i = 9; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}
