//Write a program to find the sum of the series : 1 + 3/4 + 5/6 + 7/8 + ... upto n terms.
    #include <stdio.h>

int main() {
    int n;
    float numerator = 1, denominator = 2, sum = 0;

    printf("Enter the number of terms (n):\n ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += numerator / denominator;
        numerator += 2;
        denominator += 2;
    }

    printf("Sum of the series up to %d terms = %.4f\n", n, sum);

    return 0;
}











