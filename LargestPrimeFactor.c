/* 
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ? 
*/
#include <stdio.h>

long int divisibleby2 (long int num);
long int divisibleby3 (long int num);
long int divisibleby5 (long int num);
long int divisibleby7 (long int num);
long int divisibleby11 (long int num);
long int divisiblebyX (long int num, int X);
long int primeFactor(long int dividend);

int main()
{
    primeFactor(600851475143);
}

long int primeFactor(long int dividend)
{
    long long int i = 2;
    while(i <= dividend)
    {
        if(i == 2 || i == 3 || i == 5 || i ==7 || i == 11)
        {
            if(divisiblebyX(dividend, i))
            {
                printf("Prime factor = %d\n", i);
                dividend = dividend/i;
            }  
            else
            {
                i++;
            }
        }        
        else if(divisibleby2(i) == 0 && divisibleby3(i) == 0 && divisibleby5(i) == 0 && divisibleby7(i) == 0 && divisibleby11(i) == 0)
        {
            if(divisiblebyX(dividend, i))
            {
                printf("Prime factor = %d\n", i);
                dividend = dividend/i;
            }
            else
            {
                i++;
            }
        }
        else
        {
            i++;
        }
    
    }
    return 0;
}

long int divisibleby2 (long int num)
{
    int remainder = num % 2;
    if(remainder == 0)
    {
        return 1;
    }
    else{
        return 0;
    }
}

long int divisibleby3 (long int num)
{
    long int remainder = num % 3;
    if(remainder == 0)
    {
        return 1;
    }
    else{
        return 0;
    }
}

long int divisibleby5 (long int num)
{
    long int remainder = num % 5;
    if(remainder == 0)
    {
        return 1;
    }
    else{
        return 0;
    }
}

long int divisibleby7 (long int num)
{
    long int remainder = num % 7;
    if(remainder == 0)
    {
        return 1;
    }
    else{
        return 0;
    }
}

long int divisibleby11 (long int num)
{
    long int remainder = num % 11;
    if(remainder == 0)
    {
        return 1;
    }
    else{
        return 0;
    }
}

long int divisiblebyX (long int num, int X)
{
    long int remainder = num % X;
    if(remainder == 0)
    {
        return 1;
    }
    else{
        return 0;
    }
}