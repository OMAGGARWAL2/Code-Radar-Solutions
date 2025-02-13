#include <stdio.h>

int main(){
    int p,q;
    scanf("%d %d", &p, &q);
    if (p == q){
        printf("Equal");
    } else if (p > q) {
        printf("First");
    } else {
        printf("Second");
    }
    return 0;
}