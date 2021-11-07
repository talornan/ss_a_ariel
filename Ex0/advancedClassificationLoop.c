#include "NumClass.h"
#include <math.h>
#include <stdio.h>


int isPalindrome(int num)
{
    int reversed = 0, remainder, original;
    original = num;
    while (num != 0){
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    if (original == reversed)
         return 1;    
    else
        return 0;

}
int Digit(int num){

    int counter = 0;
     while(num >= 1)  
   {  
       num=num/10;  
       counter++;  
   }  
    return counter;
}

int isArmstrong(int num) {
    int originalNum, remainder, result = 0;
    originalNum = num;
     while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder,Digit(num));
        originalNum /= 10;
    }

    if (result == num)
       return 1;
    else
       return 0;
     
}