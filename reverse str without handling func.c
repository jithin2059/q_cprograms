#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
    char str[100];
    int l, i;
    printf("\n\nprint individual characters of string in reverse order\n");   
    printf("input the string : ");
    gets(str);
    l=strlen(str);
    printf("The characters of the string in reverse are: ");
    for(i=l; i>=0; i--) {
      printf("%c  ", str[i]);
    }
}
