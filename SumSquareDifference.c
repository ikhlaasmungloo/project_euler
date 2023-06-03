/*
The sum of the squares of the first ten natural numbers is,
1^2 + 2^2 + ... + 10^2 = 385
The square of the sum of the first ten natural numbers is,
(1+2+3+...+10)^2 = 55^2 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is
3025 - 385 = 2640
Find the difference between the sum of the squares of the first one hundred natural numbers and the square of 
the sum.
*/

#include <stdio.h>

int sumOfSquare(int n);
int squareOfSum(int n);

void main(void){
    int difference  = squareOfSum(100) - sumOfSquare(100);
    printf("Difference: %d\n", difference);
}

int sumOfSquare(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum = sum + (i * i);
    }
    return sum;
}

int squareOfSum(int n){
    int sum = 0;
    int square;
    for(int i = 1; i <= n; i++){
        sum = sum + i;
    }
    square = sum * sum;
    return square;
}
