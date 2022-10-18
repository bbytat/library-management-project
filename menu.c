#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "prototypes.h"
#include "book.h"
#include "structure.h"
#include "member.h"

char n;
char choice;

void menu()
{
    printf("             **********************************************************\n");
    printf("             ****** WELCOME TO OUR LIBRARY MANAGEMENT APPLICATION *****\n");
    printf("             **********************************************************\n\n");
    prinff("                        - A to get out of the application\n");
    printf("                       - B to see features for all members\n");
    printf("                        - C to see features for all books\n");
    printf("                       - D to see all features for all loans\n");
    printf("your choice ?");
    do 
    {
        n = toupper(getchar());
    }
    while(strchr("ABCD", n) == NULL);

    switch(n)
    {
        case 'A' :
        break;

        case 'B' :
        break;

        case 'C' :
        break;

        case 'D'
        break;
        
    }

}