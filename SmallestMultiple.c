/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include <stdio.h>

int isDivisibleby(int numerator, int denominator);
int divideBy(int startingNum, int lastNum);


void main(){
    divideBy(1,20);
}


int isDivisibleby(int numerator, int denominator){
    if(numerator % denominator == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int divideBy(int startingNum, int lastNum){
    int numerator = 1;
    int denominator = startingNum;
    for(int i = denominator; i <= lastNum; i++){
        if(isDivisibleby(numerator,i)){
    
        }
        else{
            numerator = numerator + 1;
            i = startingNum;
        }
    }

   printf("%d\n", numerator);

}