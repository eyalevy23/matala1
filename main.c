#include "NumClass.h"
#include <stdio.h>

void printPrime(int from, int to) {
    printf("The Prime numbers are:");
    for(int i = from; i <= to; i++) {
        if (isPrime(i)) {
            printf(" %d", i);
        }
    }
    printf("\n");
}

void printAmstrong(int from, int to) {
    printf("The Armstrong numbers are:");
    for(int i=from; i<=to; i++) {
        if(isArmstrong(i)){
            printf(" %d", i);
        }
    }
    printf("\n");
}

void printStrong(int from, int to) {
    printf("The Strong numbers are:");
    for(int i=from; i<=to; i++) {
        if(isStrong(i)){
            printf(" %d", i);
        }
    }
    printf("\n");
}

void printPolindrome(int from, int to) {
    printf("The Palindromes are:");
    for(int i=from; i<=to; i++) {
        if(isPolindrome(i)){
            printf(" %d", i);
        }
    }
    printf("\n");
}

int main() {
    int input1 = 0, input2 = 0;
    // printf("enter integer1: ");
    scanf("%d", &input1);
    // printf("enter integer2: ");
    scanf("%d", &input2);

    printAmstrong(input1, input2);
    printPolindrome(input1, input2);
    printPrime(input1, input2);
    printStrong(input1, input2);
    return 0;
}