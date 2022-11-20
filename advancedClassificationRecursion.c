#include "NumClass.h"
#include <math.h>

int isPolindrome(int num) {
    int reverse = reverseIntRec(num,0); // call recursive function
    return reverse == num;
}

int reverseIntRec(int num, int reverse) {
    if (num == 0){
        return reverse;
    }
    return reverseIntRec(num/10, reverse*10 + num%10);
}

int isArmstrong(int num) {
    int armstrong = armstrongCalc(num, 0, 0); // call recursive function// call recursive function
    return num == armstrong;
}

int armstrongCalc(int num, int armstrong, int len){
    len = ((int)log10(num)) +1;
    if (num == 0) {
        return armstrong;
    }
    int lastDigit = num%10;
    armstrong = armstrong + (lastDigit*lastDigit*lastDigit);
    return armstrongCalc(num/10, armstrong, len);
}

