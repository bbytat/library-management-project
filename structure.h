typedef struct Book Book;
typedef struct Member Member;
typedef struct Date Date;
typedef struct Loan Loan;


struct Book
{
    int index;
    char title[100];
    char author[100];
    int available;
    int stock;
};

struct Member
{
    int index;
    char LastName[50];
    char FirstName[50];
    Date date;
};

struct Date
{
    int year;
    int month;
    int day;
};