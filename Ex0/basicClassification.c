#include "NumClass.h"
int isPrime(int num);
int isStrong(int num);


int isPrime(int num)
{      
    if (num == 1) 
    return 1;
    for(int i=2;i<num;i++)  
    {
        if(num%i==0)
        return 0;
    }    
        return 1;
}
  

int isStrong(int num)
{
    int sum=0;
    int temp=num;
    while(temp!= 0)
    {
        int cur = temp%10;
        int cur2=cur;
        for(int i = 1; i < cur2; i++)
        {
            cur *= i;
        }
        sum += cur;
        temp = temp/10;
    }
    if(sum == num)
    {
        return 1;
    }
    return 0;
}