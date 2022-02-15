#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define str_size 100

int main() {
    char str[str_size];
    int i, word;
    printf("\n\nCount the total number of words in a string: \n");
    printf("input the string: ");
    gets(str);

    i=0;
    word=1;

    while(str[i]!='\0') {
        if (str[i]==' ' || str[i]=='\n' || str[i]=='\t') {
            word++;
        }
        i++;
    }
    printf("total number of words in the string are: %d\n", word);
}
