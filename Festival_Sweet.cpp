#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d", &t);
    while (t--){
        int x, y;
        scanf("%d%d", &x, &y);
        if (x * 2 > y * 5){
            printf("Chocolate\n");
        }
        else if (x * 2 < y * 5){
            printf("Candy\n");
        }else{
            printf("Either\n");
        }
    }
}