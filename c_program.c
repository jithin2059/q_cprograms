//
//  main.c
//  prac
//
//  Created by jithin b on 1/12/22.
//

#include <stdio.h>
#include <math.h>

int prime(int num);
int armstrong(int num);
int perfect(int num);

int main() {
    int num;
    
    printf("enter a number: ");
    scanf("%d", &num);
     
    if (prime(num)) {
        printf("%d is a prime number.\n", num);
    }
    else {
        printf("%d is not a prime number.\n", num);
    }
    
    
    if (armstrong(num)) {
        printf("%d is an armstrong number.\n", num);
    }
    else {
        printf("%d is not an armstrong number.\n", num);
    }
    
    
    if (perfect(num)) {
        printf("%d is a perfect number.\n", num);
    }
    else {
        printf("%d is not a perfect number.\n", num);
    }
}
    
int prime(int num) {
    int i;
    for (i=2; i<=num/2; i++) {
        if (num%i==0) {
            return 0;
        }
    }
    return 1;
}
    
int armstrong(int num) {
    int last_digit, sum, num_1, digits;
    sum = 0;
    num_1 = num;
    
    digits = 3;
    
    while (num > 0) {
        last_digit = num % 10;
        sum = sum +round(pow(last_digit, digits));
        
        num = num/10;
    }
    
    return (num_1 == sum);
}

int perfect(int num) {
    int i, sum_1 = 0, num_2;

    
    for (i=1; 1<num_2; i++) {
        if (num_2 % i == 0) {
            sum_1 += i;
        }
    }
    return (num_2 == sum_1);
}

