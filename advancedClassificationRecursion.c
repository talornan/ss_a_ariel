#include "NumClass.h"
#include <stdio.h>
#include <math.h>


int countDigits(int num)
{
     if(num <= 9)
        return 1;
     return countDigits(num / 10) + 1;
    
}

int reverseNumber(int num, int sum)
{
    if(num  == 0)
    {
        return sum;    
    }
    sum = sum * 10 + num % 10;
    return reverseNumber(num/10, sum); 
}

int isPalindrome (int num){
    if (num == reverseNumber(num, 0))
        return 1;
    else
        return 0;
}


int checkAmstrong(int num , int length) {
    if (num == 0){
        return 0;
    }
    else {
        return (pow(num%10 ,length)+checkAmstrong(num/10,length));
    }
}


int isArmstrong(int num) {
    if (checkAmstrong(num, countDigits(num)) == num)
        return 1;
    else 
        return 0;
    
}

