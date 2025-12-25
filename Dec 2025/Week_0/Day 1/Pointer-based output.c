// basics
// 1.- Define a function that recieves two integers
// 2.- Return the sum, difference and product
// 3.- Print the results in main

#include <stdio.h>

void integers (int a, int b, int *sum, int *diff, int *prod) {
    *sum = a + b;
    *diff = a - b;
    *prod = a * b;

}

int main () {
    int a=10; 
    int b=2;

    int sum, diff, prod;

    //Call the function (integers)
    integers(a,b, &sum, &diff, &prod);

    printf("sum: %d\n", sum);
    printf("difference: %d\n", diff);
    printf("product:%d\n", prod);
    
}