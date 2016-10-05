#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

void encrypt(string, int k);

int main (int argc, char* argv[])
{
    string phrase = GetString();
    for (int i = 0; i < 27; i++)
    {encrypt(phrase, i);}
    
    return 0;   
}



void encrypt(string s, int k)
{
    int encryptedchar;
    for (int i = 0, j = strlen(s); i < j; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            {((s[i] + k) > 122) ? (encryptedchar = (s[i] + k) - 26) : (encryptedchar = (s[i] + k));}
        if (s[i] >= 'A' && s[i] <= 'Z')
            {((s[i] + k) > 90) ? (encryptedchar = (s[i] + k) - 26) : (encryptedchar = (s[i] + k));}
        if (!((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')))
            {encryptedchar = (int) s[i];}
    printf("%c",  (char) encryptedchar);
    }
    printf("\n");
}
