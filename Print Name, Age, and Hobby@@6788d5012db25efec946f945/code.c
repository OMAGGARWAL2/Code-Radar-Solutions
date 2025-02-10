#include <stdio.h>

int main(){
    char name[100];
    int age;
    char hobby[100];
    printf("Enter your name, age, favourite hobby: \n");
    scanf("%s %d %s", name, &age, hobby);
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", hobby);

    return 0;
}