// Average = (x1 + x2 + x3 + .... + xn) / n

// Geometric Mean = pow((x1.x2.x3......xn), 1.0/n)
                            // product

// Harmonic Mean = n / (1/x1 + 1/x2 + 1/x3 + ... + 1/xn)


#include <stdio.h>
#include <math.h>

int main() {
    int n;
    float sum = 0.0, product = 1.0, harmonicSum = 0.0;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    float arr[n];

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        sum += arr[i];                 // For average
        product *= arr[i];            // For geometric mean
        if (arr[i] != 0)
            harmonicSum += 1.0 / arr[i]; // For harmonic mean (avoid division by zero)
    }

    float average = sum / n;
    float geometricMean = pow(product, 1.0 / n);
    float harmonicMean = n / harmonicSum;

    printf("\nAverage (Arithmetic Mean) = %.4f\n", average);
    printf("Geometric Mean = %.4f\n", geometricMean);
    printf("Harmonic Mean = %.4f\n", harmonicMean);

    return 0;
}
