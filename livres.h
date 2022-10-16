
// on cree un menu demandant a l'utilisateur les renseignements pour trouver et obtenir le livre dans la bibliotheque

void obtenir(char *pt)
{
    char c ;
    printf("        - C pour chercher\n");
    printf("        - A pour ajouter un nouveau livre a la bibliotheque\n");
    printf("        - S pour supprimer un livre de la bibliotheque\n");
    
    while(strchr("CAS", c) == NULL)
        {
            printf("entrez l'action\n\n");
            scanf("%c", &c);
            c = toupper(getchar());
        }
            *pt = c;

}

// on affiche les informations du livre choisi
void afficher(Livre livre)
{
    printf("titre : %s\n", livre.titre);
    printf("auteur : %s\n", livre.auteur);
    printf("nombre d'emprunt(s) effectue(s) = %s"; livre.disponible);
    printf("liste d'emprunt(s) effectue(s) : %s\n", livre.stock);

}

//on affiche les informations sur l'adherent 


