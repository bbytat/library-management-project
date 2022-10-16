
// on cree un menu demandant a l'utilisateur les renseignements pour trouver et obtenir l'adherent dans la liste

void obtenir(char *pt)
{
    char c ;
    printf("    - S to search\n");
    printf("    - A to add a new\n");
    printf("    - S poiur supprimer un adherent a la liste\n");

    while(strchr("CAS", c) == NULL)
        {
            printf("entrez l'action\n\n");
            scanf("%c", &c);
            c = toupper(getchar());
        }
            *pt = c;
}

// on affiche les informations de l'adherent

void afficher(Adherent adherent)
{
    printf("nom : ")
}