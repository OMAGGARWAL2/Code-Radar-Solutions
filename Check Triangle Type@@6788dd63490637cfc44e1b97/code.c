#include <stdio.h>

int main(){
    int m,n,o;
    scanf("%d   %d   %d", &m, &n, &o);
    if (m == n && n == 0){
        printf("Equilateral");
    } else if (m == n || n == o || m == o){
        printf("Isosceles");
    } else {
        printf("Scalene");
    }
    return 0;
}