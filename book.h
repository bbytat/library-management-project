
// on cree un menu demandant a l'utilisateur les renseignements pour trouver et obtenir le livre dans la bibliotheque

void get(char *pt)
{
    char c ;
    printf("        - S to search in the library C\n");
    printf("        - A to add a new book in the library\n");
    printf("        - D to delete a book from the library\n");
    printf("        - R to return into the main menu");
    
    while(strchr("SADR", c) == NULL)
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
    printf("number of loans done = %s", book.available;
    printf("list of loans done : %s\n", book.stock);

}

//on affiche les informations sur l'adherent par rapport au livre choisi
void ask(Book *mem)
{
    Book member;
    printf("enter informations about the book : \n");
    printf(" - index :   ");
    scanf("%d", &(perso.index));
    viderBuffer();
    printf(" - title :   ");
    scanf("%s", perso.title);
    viderBuffer();
    printf(" - author :   ");
    scanf("%s", perso.author);
    viderBuffer();
    printf(" - total stock :   ");
    scanf("%d", &(perso.stock));

    *member = perso
}


