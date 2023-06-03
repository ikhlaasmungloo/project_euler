/*
A palindromic number reads the same both ways. 
The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.
*/
#include <stdio.h>

int numLength (int num);
int isPalindrome(int num);
int nthDigit(int num, int pos);

int main()
{
    int i = 999;
    int j = 999;
    int largestPalindrome = 0;
    for(i; i > 99; i--){
        int product = i * j; 
        if(isPalindrome(product)){
            if(product > largestPalindrome){
                largestPalindrome = product;  
            } 
        }
        while(j > 100){
            j = j - 1;
            product = i * j;
            if(isPalindrome(product)){
                if(product > largestPalindrome){
                    largestPalindrome = product; 
                }
            }
        }
        j = 999;

    }
    printf("%d is the largest palindrome made from the product of two 3-digit numbers\n", largestPalindrome);
}


int numLength (int num){
    int count = 0;
    int namba = num;
    while(namba != 0){
        namba = namba/10;
        count++;
    }
    return count;
}

int isPalindrome(int num){
    int len = numLength(num);
    int iter = len/2;
    int j = len;
    int results = 0;

    for(int i=1; i<=iter; i++){
        int leftNum = nthDigit(num,i);
        int rightNum = nthDigit(num,j);
        j = j - 1;

        if(rightNum != leftNum){
            break;
        }

        if(i == iter){
            //printf("%d is a Palindrome\n", num);
            results = 1;
        }
        
    }
    return results;
}

int nthDigit(int num, int pos){
    int len = numLength(num);
    len = len - pos;
    int i;
    int digit = num;
    for(i = 0; i < len; i++)
    {
        digit = digit/10 ;
    }
    return digit%10;
}
