#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;
    float average;

    // Read the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Read the elements
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // Calculate the average
    average = (float)sum / n;

    // Print the result
    printf("The average is: %.2f\n", average);

    return 0;
}
