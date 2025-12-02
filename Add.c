#include<stdio.h>

int add(int a , int b,int c) {
    return a + b + c;
}

int main(){
    int a , b, c;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Sum: %d\n", add(a, b,c));
    return 0;
}