#include <stdio.h>

/* If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. 
The sum of these multiples is 23. Find the sum of all the multiples of 3 or 5 below 1000. */
int divisibleby3 (int num);
int divisibleby5 (int num);

int div = 0; 
int sum = 0;

int main()
{
    int i;
    for (i = 1; i < 1000; i++)
    {
        if(divisibleby3(i) == 1 || divisibleby5(i) == 1)
        {
            sum = sum + i;
        }
    }

    printf("Sum is: %d\n", sum);

    return 0;
}

int divisibleby3 (int num)
{
    int remainder = num % 3;
    if(remainder == 0)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int divisibleby5 (int num)
{
    int remainder = num % 5;
    if(remainder == 0)
    {
        return 1;
    }
    else{
        return 0;
    }
}



