#include <stdio.h>

int sum(int start, int end);
int main() {
    int num1, num2, sum1;

    printf("Enter a number : ");
    scanf("%d", &num1);
    printf("Enter a ending number: ");
    scanf("%d", &num2);
    
    sum1 = sum(num1, num2);
    
    printf("Sum of natural numbers from %d to %d = %d", num1, num2, sum1);
    
    return 0;
}

//recurrsion
int sum(int num1, int num2) {
    if(num1 == num2)
        return num1;
    else
        return num1 + sum(num1 + 1, num2); 
}