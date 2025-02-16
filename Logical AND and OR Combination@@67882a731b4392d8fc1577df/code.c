#include <stdio.h>

int main() {
    int q;
    scanf("%d %d", &p, &q);
    
    if (p > 0 && q < 0 || p == 0 && q == 0) { 
        printf("True");
    } else {
        printf("False");
    }
    
    return 0;
}