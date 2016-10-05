#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>

#define _XOPEN_S



int main (int argc, char* argv[])
{   
    if (!(argc == 2))
    {
       printf("Your entered password was not valid!\n");
       return 1; 
    }

	int passlength = strlen(argv[1]);
	char password[passlength];

	for (int i = 0; i < passlength; i++)
	{
		password[i] = argv[i];
	}

	
	printf("The unencrypted password is: ");

	for (int i = 0; i < passlength; i++)
	{
		printf("%c", password[i]);
	}
	printf("\n");

}
