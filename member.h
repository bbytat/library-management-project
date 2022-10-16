
// on cree un menu demandant a l'utilisateur les renseignements pour trouver et obtenir l'adherent dans la liste

void get(char *pt)
{
    char c ;
    printf("    - S to search\n");
    printf("    - A to add a new memner to the list\n");
    printf("    - D to delet a member from the list\n");

    while(strchr("SAD", c) == NULL)
        {
            printf("what's the action ?\n\n");
            scanf("%c", &c);
            c = toupper(getchar());
        }
            *pt = c;
}

// on affiche les informations de l'adherent

void show(Member member)
{
    printf("last name : ")
}