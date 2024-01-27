#include <stdio.h>

void rotate_array(int *nums, int numsSize, int k) {
    k = k % numsSize;

    for (int i = 0; i < numsSize / 2; i++) {
        int temp = nums[i];
        nums[i] = nums[numsSize - i - 1];
        nums[numsSize - i - 1] = temp;
    }

    for (int i = 0; i < k / 2; i++) {
        int temp = nums[i];
        nums[i] = nums[k - i - 1];
        nums[k - i - 1] = temp;
    }

    for (int i = k; i < (k + numsSize) / 2; i++) {
        int temp = nums[i];
        nums[i] = nums[numsSize - (i - k) - 1];
        nums[numsSize - (i - k) - 1] = temp;
    }
}

int main() {
    int nums[] = {1, 2, 3, 4, 5, 6, 7};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int k = 3;

    rotate_array(nums, numsSize, k);

    printf("[");
    for (int i = 0; i < numsSize; i++) {
        printf("%d", nums[i]);
        if (i < numsSize - 1) {
            printf(", ");
        }
    }
    printf("]\n");
    return 0;
}
