#include "NumClass.h"
#include <math.h>

// // will return if number is polindrome by loops
int isPolindrome(int num) {
    int reverse = reverseInt(num);
    return num == reverse;
}

// return given num in revrese order by loop
int reverseInt(int num) {
    int reverse = 0, lastDigit = 0;
    while (0 < num) {
        lastDigit = num % 10;
        reverse = reverse*10 + lastDigit;
        num /= 10;
    }
    return reverse;
}

// // will return if number is amstrong by loops
int isArmstrong(int num) {
    int len = ((int)log10(num)) +1;
    int copyNum = num, lastDigit;
    int amstrong = 0;
    while (0 < copyNum) {
        lastDigit = copyNum % 10;
        amstrong = amstrong + (pow(lastDigit, len));
        copyNum /= 10;
    }
    return num == amstrong;
}

