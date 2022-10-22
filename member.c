#include "header.h"

// on cree un menu demandant a l'utilisateur les renseignements pour trouver et obtenir l'adherent dans la liste


void getMember()
{
    char c;
    printf("    - S to search a member in the list\n");
    printf("    - A to add a new member to the list\n");
    printf("    - D to delet a member from the list\n");
    printf("    - R to return into the main menu");

    while(strchr("SADR", c) == NULL)
        {
            printf("what's the action ?\n\n");
            scanf("%c", &c);
            c = toupper(getchar());
        }
          
}

// on affiche les informations de l'adherent

void show(t_all all)
{
    printf("last name :    %c\n", all.Member.FirstName);
    printf("number of loans :   %d\n", all.Member.nbLoans);
    printf("registration date :     %d/%d/%d\n", all.Member.date.year, all.Member.date.month, all.Member.date.day);
}

// on demande de recuperer les infos de l'usager
void askMember(t_all all)
{
    printf("enter informations about the member : \n");
    printf(" - index :   ");
    scanf("%d", &(all.index));
    fflush(stdin);
    printf(" - last name :   ");
    scanf("%s", all.LastName);
    fflush(stdin);
    printf(" - first name :   ");
    scanf("%s", all.FirstName);
    fflush(stdin);
    printf(" - number of loans :   ");
    scanf("%d", &(all.nbLoans));
    printf(" - subscritpion date :      ");
    printf("\t - day : ");
    scanf("%d", &all.date.day);
    printf("\t - month : ");
    scanf("%d", &all.date.month);
    printf("\t - year : ");
    scanf("%d", &all.date.year);

}

void manageMember(t_all all)
{
    getMember();
    show();
    askMember();

};

