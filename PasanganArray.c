#include <stdio.h>

void pasangan(int arr[], int A, int jumlah) {
    printf("Pasangan angka dengan jumlah: %d\n", jumlah);
    for(int i = 0; i < A; i++) {
        for(int j = i + 1; j < A; j++) {
            if(arr[i] + arr[j] == jumlah) {
                printf("%d + %d\n", arr[i], arr[j]);
            }
        }
    }
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12,};
    int A = sizeof(arr) / sizeof(arr[0]);
    int jumlah = 16;

    pasangan(arr, A, jumlah);

    return 0;
}
