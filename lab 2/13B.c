//WAP to print prime numbers between given interva
#include <stdio.h>

int main() {
    int n1, n2;

    printf("Enter n1 and n2: ");
    scanf("%d %d", &n1, &n2);

    for (int i = n1; i <= n2; i++) {
        int prime = 1;

        if (i < 2)
            continue;

        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                prime = 0;
                break;
            }
        }

        if (prime)
            printf("%d ", i);
    }

    return 0;
}