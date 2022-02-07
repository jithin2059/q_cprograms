#include <stdio.h>
 

int func(int a) {
   if (a==0) {
        printf ("The number is 0"); 
    }
    else if (a%2==0 && a>0) {
        printf ("The Number is Even and +ve"); 
    }
    else if (a%2==0 && a<0) {
        printf ("The Number is Even and -ve"); 
    }
    else if (a%2!=0 && a>0) {
        printf ("Number is Odd and +ve"); 
    }
    else {
        printf ("The Number is Odd and -ve"); 
    }
}

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    func(a); 
    return 0;
}
