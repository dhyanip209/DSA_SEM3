//WAP to print Armstrong number from 1 to 1000.

#include <stdio.h>

void main() {
    int n, temp, digit, sum;
    


    for (int n = 1; n <= 1000; n++) {
        temp = n;
        sum = 0;

        while (temp > 0) {
            digit = temp % 10;
            sum = sum + digit * digit * digit;
            temp = temp / 10;
        }

        if (sum == n) {
            printf("%d ", n);
        }
    }

  
}
