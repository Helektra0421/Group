#include<stdio.h>

int minus(int a , int b) {
    return a - b;
}

int add(int a , int b) {
    return a + b;
}

int main(){
    int a , b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Sum: %d\n", minus(a, b));
    printf("Difference: %d\n", add(a, b));
    return 0;
}