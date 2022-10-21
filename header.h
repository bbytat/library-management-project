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
} t_book;

typedef struct s_Date
{
    int year;
    int month;
    int day;
}t_date;

typedef struct s_Member
{
    int index;
    char LastName[50];
    char FirstName[50];
    int nbLoans;
    t_date date;
   
}t_member;

typedef struct s_all
{
    t_book Book;
    t_date Date;
    t_member Member;

}t_all;

// PROTOTYPES :
void getMember(char *pt);
void getBook(char *pt);

void show(t_all all);
void askMember(t_member *ptr);
void askBook(t_book *ptr);

void menu();

#endif