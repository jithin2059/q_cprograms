#include <stdio.h>
#include <string.h>

int main()
{
    int i, vowels =0, consonants = 0;
    char s[1000];
    printf("enter the string: " );
    gets(s);

    for(i=0; s[i]; i++) {
        if ((s[i]>=65 && s[i]<=90)|| (s[i]>=97 && s[i]<=122))        {
            if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='u' || s[i]=='o' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]== 'O' || s[i]=='U')
            
                vowels++;
            else
                consonants++;
        }
    }

    printf("vowels = %d\n", vowels );
    printf("consonants = %d\n", consonants);
    return 0;
}