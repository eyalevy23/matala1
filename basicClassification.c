#include "NumClass.h"

// will return if number is strong
int isStrong(int num) {
    if(num ==0) return 0;
    int userInput = num, sum = 0, lastDigit;
    while (0 < num) {
        lastDigit = num%10;
        sum += factorial(lastDigit);
        num /= 10; // delete last digit
    }
    return sum == userInput;
}

// return factorial of num
int factorial(int num) {
    int fct = 1;
    for(int i = num; i > 1; i--) {
        fct *= i;
    }
    return fct;
}

// will return if number is prime
int isPrime(int num) {
    if (num == 1 || num == 0){
        return num;
    }
    //check from 2 to sqer root of num 
    for(int i = 2; i*i < num; i++) {
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
} 
