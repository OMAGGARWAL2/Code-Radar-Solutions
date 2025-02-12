#include <stdio.h>
int main(){
    int p,q,r;
    scanf("%d %d %d", &p, &q, &r);
    if (p + q > r && q + r > p && p + r > q){
        printf("Valid");
    } else {
        printf("Invalid");
    }
}