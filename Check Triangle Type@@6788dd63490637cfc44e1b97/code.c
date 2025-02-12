#include <stdio.h>

int main(){
    int m,n,o;
    scanf("%d   %d   %d", &m, &n, &o);
    if (m == n && n == 0){
        printf("Equilateral\n");
    } else if (m == n || n == o || m == o){
        printf("Isosceles\n");
    } else {
        printf("Scalene\n");
    }
    return 0;
}