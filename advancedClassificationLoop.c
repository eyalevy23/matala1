#include "NumClass.h"

int isPolindrome(int num) {
    int reverse = reverseInt(num);
    return num == reverse;
}

int reverseInt(int num) {
    int reverse = 0, lastDigit = 0;
    while (0 < num) {
        lastDigit = num % 10;
        reverse = reverse*10 + lastDigit;
        num /= 10;
    }
    return reverse;
}

int isArmstrong(int num) {
    int copyNum = num, lastDigit;
    int amstrong = 0;
    while (0 < copyNum) {
        lastDigit = copyNum % 10;
        amstrong = amstrong + (lastDigit*lastDigit*lastDigit);
        copyNum /= 10;
    }
    return num == amstrong;
}

