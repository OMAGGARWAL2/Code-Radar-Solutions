#include <stdio.h>

int main(){
    int m, n, o;
    scanf("%d %d %d", &m, &n, &o);
    
    if (m + n > o && n + o > m && m + o > n) {
        if (m == n && n == o) {  
            printf("Equilateral\n");
        } else if (m == n || n == o || m == o) {
            printf("Isosceles\n");
        } else {
            printf("Scalene\n");
        }
    } else {
        printf("Not a Triangle\n");
    }

    return 0;
}