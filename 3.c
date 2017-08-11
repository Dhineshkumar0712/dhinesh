#include <stdio.h>
int main()
{
    char c;
    int iL, iU;
    printf("Enter an alphabet: ");
    scanf("%c",&c);
    iL = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    iU = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if(iL || iU)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    return 0;
}
