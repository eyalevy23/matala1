#include "NumClass.h"
#include <math.h>

// // will return if number is polindrome recursivly
int isPolindrome(int num) {
    int reverse = reverseIntRec(num,0); // call recursive function
    return reverse == num;
}

// return num in reverse order recursivly
int reverseIntRec(int num, int reverse) {
    if (num == 0){
        return reverse;
    }
    return reverseIntRec(num/10, reverse*10 + num%10);
}

// // will return if number is amstrong recursivly
int isArmstrong(int num) {
    int len = ((int)log10(num)) +1;
    int armstrong = armstrongCalc(num, 0, len); // call recursive function// call recursive function
    return num == armstrong;
}

// take num and return amstrong number recursivly
int armstrongCalc(int num, int armstrong, int len){
    if (num == 0) {
        return armstrong;
    }
    int lastDigit = num%10;
    armstrong = armstrong + pow(lastDigit, len);
    return armstrongCalc(num/10, armstrong, len);
}

