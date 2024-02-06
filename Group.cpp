#include <stdio.h>
#include <stdlib.h>
int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        
        int a[n];
        int sum1 = 0, sum2 = 0;
    
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            if (a[i] >= 0) {
                sum1 += a[i];
            } else {
                sum2 += abs(a[i]);
            }
        }
        printf("%d\n", abs(sum1 - sum2));
    }
}