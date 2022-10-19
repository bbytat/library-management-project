#include "header.h"


int choiceMenu = 0;

menu()
{
    t_all all:

    printf("             **********************************************************\n");
    printf("             ****** WELCOME TO OUR LIBRARY MANAGEMENT APPLICATION *****\n");
    printf("             **********************************************************\n\n");
    prinff("                        - 1 to get out of the application\n");
    printf("                       - 2 to see features for all members\n");
    printf("                        - 3 to see features for all books\n");
    printf("your choice ?");
    
    scanf("%d", &choiceMenu);

    switch(choiceMenu)
    {
        case 1 :
        return;

        case 2 :
        manageMember(all);
        break;

        case 3 :
        manageBook(all);
        break;


        default :
        printf("please, select a correct number.\n");
        break;
        
    }

    return 0;

}