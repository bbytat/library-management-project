#ifndef HEADER_H
#define HEADER_H

// LIBRAIRIES :

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "book.c"
#include "member.c"

// STRUCTURES :

typedef struct s_Book
{
    int index;
    char title[100];
    char author[100];
    int available;
    int stock[100];
    
} t_Book;

typedef struct s_Date
{
    int year;
    int month;
    int day;
}t_Date;

typedef struct s_Member
{
    int index;
    char LastName[50];
    char FirstName[50];
    int nbLoans;
    t_Date Date;
   
}t_Member;

typedef struct s_all
{
    t_Book Book;
    t_Date Date;
    t_Member Member;

}t_all;

// PROTOTYPES :
void getMember(char *pt);
void getBook(char *pt);

void show(t_all all);
void askMember(t_Member *ptr);
void askBook(t_Book *ptr);

void menu();

#endif