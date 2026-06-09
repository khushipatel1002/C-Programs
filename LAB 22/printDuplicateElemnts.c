#include <stdio.h>

int main() {
    int arr[100], freq[100] = {0};
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count frequencies
    for (int i = 0; i < n; i++) {
        if (freq[i] == -1)
            continue;

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = -1; // Mark as counted
            }
        }

        freq[i] = count;
    }

    int totalDuplicates = 0;

    printf("\nDuplicate elements and their frequencies:\n");
    for (int i = 0; i < n; i++) {
        if (freq[i] > 1) {
            printf("Element %d appears %d times\n", arr[i], freq[i]);
            totalDuplicates++;
        }
    }

    printf("\nTotal duplicate elements = %d\n", totalDuplicates);

    return 0;
}
