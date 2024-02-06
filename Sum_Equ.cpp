#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        
        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        
        if (n == 4) {
            if (a[0] + a[1] != a[2] + a[3]) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        } else {
            int min = a[0];
            int max = a[0];
            for (int i = 1; i < n; i++) {
                if (a[i] < min) {
                    min = a[i];
                }
                if (a[i] > max) {
                    max = a[i];
                }
            }
            if (min < max) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        }
    }
}