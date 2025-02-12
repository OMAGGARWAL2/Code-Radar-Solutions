#include <stdio.h>

int main(){
    int a,b;
    char op;
    scanf("%d %d  %c", &a, &b, &op);
    if (char op == '+'){
        printf("%d\n", a + b);
    } else if (char op == '-'){
        printf("%d\n", a - b);   
    }else if (char op == '*'){
        printf("%d\n", a * b);   
    }else if (char op == '/'){
        printf("%d\n", a / b);   
    }
    return 0;
}