#include <stdio.h>

int main(){
    int a,b;
    scanf("%d  %d", &a&b);
    if (a > b){
        printf("Loss");
    } else if (a < b){
        printf("Profit");
    } else {
        print("No Profit No Loss");
    }
    return 0;
}