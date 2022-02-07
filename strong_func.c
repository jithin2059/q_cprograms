#include <stdio.h>
#include <math.h>

int strong(int num);

int main() {
    int num;
    
    printf("enter a number: ");
    scanf("%d", &num);
     
    if (strong(num)) {
        printf("%d is a strong number.\n", num);
    }
    else {
        printf("%d is not a strong number.\n", num);
    }
    
}

int strong(int num) {
    int i, sum=0,fact,n,rem;
    num=n;
    while(n>0)
    {
        rem=n%10;
        fact=1;
        for(i=1;i<=rem;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        n=n/10;
    }
}