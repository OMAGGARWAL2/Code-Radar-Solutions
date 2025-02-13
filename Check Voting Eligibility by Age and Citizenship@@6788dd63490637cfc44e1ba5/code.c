#include <stdio.h>

int main(){
    int p,q;
    scanf("%d %d", &p, &q);
    if (p >= 18 && q == 1){
        printf("Eligible");
    } else {
        printf("Not Eligible");
    }
    return 0;
}