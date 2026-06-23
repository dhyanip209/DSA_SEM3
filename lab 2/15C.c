#include <stdio.h>

void main() {
    int n, temp, digit, sum;


    for (int i = 1; i <= 1000; i++) {
        temp = n;
        sum = 0;

        while (temp > 0) {
            digit = temp % 10;
            sum = sum + digit * digit * digit;
            temp = temp / 10;
        }

        if (sum == num) {
            printf("%d ", num);
        }
    }

  
}