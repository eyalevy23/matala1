#include "NumClass.h"

int isStrong(int num) {
    int userInput = num, sum = 0, lastDigit;
    while (0 < num) {
        lastDigit = num%10;
        sum += factorial(lastDigit);
        num /= 10; // delete last digit
    }
    return sum == userInput;
}

int factorial(int num) {
    int fct = 1;
    for(int i = num; i > 1; i--) {
        fct *= i;
    }
    return fct;
}

int isPrime(int num) {
    if (num < 2) return 0;
    for(int i = 2; i<num; i++) {
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
} 
