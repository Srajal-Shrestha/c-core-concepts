#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 2, 1};
    int n = 7;

    int unique[7];
    int k = 0;  // number of unique elements

    // Remove duplicates
    for (int i = 0; i < n; i++) {
        int isDuplicate = 0;

        for (int j = 0; j < k; j++) {
            if (arr[i] == unique[j]) {
                isDuplicate = 1;
                break;
            }
        }

        if (!isDuplicate) {
            unique[k++] = arr[i];
        }
    }

    // Calculate sum
    int sum = 0;
    for (int i = 0; i < k; i++) {
        sum += unique[i];
    }

    // Print unique elements
    printf("Unique elements: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", unique[i]);
    }

    printf("\nSum = %d\n", sum);

    return 0;
}