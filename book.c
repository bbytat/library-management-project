#include "header.h"

// on cree un menu demandant a l'utilisateur les renseignements pour trouver et obtenir le livre dans la bibliotheque

void get()
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
 

}

// on affiche les informations du livre choisi
void show(t_all all)
{
    printf("title : %s\n", all.book.title);
    printf("author : %s\n", all.book.author);
    printf("number of loans done = %s", all.book.available;
    printf("list of loans done : %s\n", all/book.stock);

}

//on affiche les informations sur l'adherent par rapport au livre choisi
void ask(t_all all)
{
    Book member;
    printf("enter informations about the book : \n");
    printf(" - index :   ");
    scanf("%d", &(all.perso.index));
    viderBuffer();
    printf(" - title :   ");
    scanf("%s", all.perso.title);
    viderBuffer();
    printf(" - author :   ");
    scanf("%s", all.perso.author);
    viderBuffer();
    printf(" - total stock :   ");
    scanf("%d", &(all.perso.stock));

    *member = perso
}

void manageBook(t_all all)
{
    get();
    show(all);
    ask(all);
}

