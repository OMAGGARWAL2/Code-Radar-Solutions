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
        (if b == 0){
            printf("Error: Division by zero\n")
        } else{
            printf("%d\n", a / b);
        }
    } else {
        printf("Error: Invalid operator\n");
    }
    }
    return 0;
}