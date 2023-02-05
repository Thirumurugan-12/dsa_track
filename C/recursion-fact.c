#include<stdio.h>

long int fact(int num);

int main() {
    int num;
    scanf("%d",&num);
    printf("Factorial of %d is %d",num,fact(num));
    return 0;
}

long int fact(int num) {
    if (num>=1) {
        return num*fact(num-1);
    } else {
        return 1;
    }
}