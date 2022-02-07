 #include<stdio.h>    
int fibonacci(int num){    
    static int num1=0, num2=1, num3;    
    if(num>0){    
         num3 = num1 + num2;    
         num1 = num2;    
         num2 = num3;    
         printf("%d ",num3);    
         fibonacci(num-1);    
    }    
}    
int main(){    
    int num;    
    printf("Enter the number of elements: ");    
    scanf("%d",&num);    
    printf("fibonacci Series: ");    
    printf("%d %d ",0,1);    
    fibonacci(num-2);    
  return 0;  
 }    