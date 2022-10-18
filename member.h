
// on cree un menu demandant a l'utilisateur les renseignements pour trouver et obtenir l'adherent dans la liste

void get(char *pt)
{
    char c ;
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
            *pt = c;
}

// on affiche les informations de l'adherent

void show(struct Member member)
{
    printf("last name :    %c\n", member.LastName);
    printf("first name :    %c\n", member.FirstName);
    printf("number of loans :   %d\n", member.nbLoans);
    printf("registration date :     %d/%d/%d\n", member.date.year, member.date.month, member.date.day);
}

// on demande de recuperer les infos de l'usager
void ask(struct Member *member)
{
    Member perso;
    printf("enter informations about the member : \n");
    printf(" - index :   ");
    scanf("%d", &(perso.index));
    viderBuffer();
    printf(" - last name :   ");
    scanf("%s", perso.LastName);
    viderBuffer();
    printf(" - first name :   ");
    scanf("%s", perso.FirstName);
    viderBuffer();
    printf(" - number of loans :   ");
    scanf("%d", &(perso.nbLoans));
    printf(" - subscritpion date :      ");
    printf("\t - day : ");
    scanf("%d", &perso.date.day);
    printf("\t - month : ");
    scanf("%d", &perso.date.month);
    printf("\t - year : ");
    scanf("%d", &perso.date.year);

    *member = perso
}