#include <bits/stdc++.h>
using namespace std;
#include <stdio.h>

int sumOfEvenDigits(int num) {
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 == 0) {
            sum += digit;
        }
        num /= 10;
    }
    return sum;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int numbers[n];
        for (int i = 0; i < n; ++i) {
            scanf("%d", &numbers[i]);
        }
        for (int i = 0; i < n; ++i) {
            printf("%d ", sumOfEvenDigits(numbers[i]));
        }
        printf("\n");
    }
    return 0;
}
