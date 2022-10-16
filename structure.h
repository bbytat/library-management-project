typedef struct Book book
typedef struct Member member

struct Book
{
    int title;
    int author;
    int available;
    int stock;
};

struct Member
{
    int index;
    char last name;
    char first name;
    int nbLoans;
};