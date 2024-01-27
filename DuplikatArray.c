#include <stdio.h>

int main() {
    int arr[] = {20, 20, 20, 3, 6, 7, 8, 10, 10, 5, 5};
    int indeks = sizeof(arr) / sizeof(arr[0]);

    printf("array duplikat:\n ");
    for (int i = 0; i < indeks; i++) {
        for (int j = i + 1; j < indeks; j++) {
            if (arr[i] == arr[j]) {
                
                for (int k = j; k < indeks - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                indeks--;

                printf("%d", arr[i]);
                if (i < indeks - 1) {
                    printf(", ");
                }
            }
        }
    }
    printf("\n");  
    return 0;
}
