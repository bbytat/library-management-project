#ifndef STRUCTURE_H
#define STRUCTURE_H


typedef struct s_Book
{
    int index;
    char title[100];
    char author[100];
    int available;
    int stock;
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
    struct Date date;
   
}t_member;

typedef struct s_all
{
    t_book book;
    t_date Date;
    t_member member;

}t_all;


void menu();

#endif
