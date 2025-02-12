#include <stdio.h>

int main(){
    int a;
    if (a>= 90){
        printf("A");
    } else if (a>=80 and a < 90){
        printf("B");
    } else if (a>=70 and a < 80){
        printf("C");
    } else if (a>=60 and a < 70){
        printf("D");
    }else if (a < 60){
        printf("F");
    }
    return 0;
}