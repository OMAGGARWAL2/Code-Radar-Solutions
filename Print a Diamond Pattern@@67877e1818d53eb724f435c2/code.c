#include <stdio.h>
int main(){
    int i, j, N, Sp;
    for(i = 1; i <= N - 1; i++)
    {
        for (Sp = 1; Sp <= N - i; Sp++)
        printf(" ");
        for (j = 1; j <= 2i - 1; j++)
        printf("*");
        printf("\n");
    }
} 