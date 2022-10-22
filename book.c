#include "header.h"

// on cree un menu demandant a l'utilisateur les renseignements pour trouver et obtenir le livre dans la bibliotheque

void getBook()
{
    char c ;
    printf("        - S to search in the library\n");
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
    printf("title : %s\n", all.Book.title);
    printf("author : %s\n", all.Book.author);
    printf("number of loans done : %s", all.Book.available);
    printf("list of loans done : %s\n", all.Book.stock);

}

//on affiche les informations sur l'adherent par rapport au livre choisi
void askBook(t_all all)
{
    t_all Member;
    printf("enter informations about the book : \n");
    printf(" - index :   ");
    scanf("%d", &(all.index));
    fflush(stdin);
    printf(" - title :   ");
    scanf("%s", all.title);
    fflush(stdin);
    printf(" - author :   ");
    scanf("%s", all.author);
    fflush(stdin);
    printf(" - total stock :   ");
    scanf("%d", &(all.stock));

}

void manageBook(t_all all)
{
    getBook();
    show();
    askBook();
};


