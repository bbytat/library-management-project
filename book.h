
// on cree un menu demandant a l'utilisateur les renseignements pour trouver et obtenir le livre dans la bibliotheque

void get(char *pt)
{
    char c ;
    printf("        - S to search in the library C\n");
    printf("        - A to add a new book in the library\n");
    printf("        - D to delete a book from the library\n");
    
    while(strchr("SAD", c) == NULL)
        {
            printf("what's the action ?\n\n");
            scanf("%c", &c);
            c = toupper(getchar());
        }
            *pt = c;

}

// on affiche les informations du livre choisi
void show(Book book)
{
    printf("title : %s\n", book.title);
    printf("author : %s\n", book.author);
    printf("number of loans done = %s"; book.available;
    printf("list of loans done : %s\n", book.stock);

}

//on affiche les informations sur l'adherent 


