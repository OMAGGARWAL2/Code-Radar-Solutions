#include <stdio.h>

int main(){
    int p;
    scanf("%d", &p);
    if (p > 0 && p <= 100){
        printf("In Range");
    } else {
        printf("Out of Range");
    }
    return 0;
}