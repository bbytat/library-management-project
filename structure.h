typedef struct Livre Livre
typedef struct Adherent Adherent

struct Livre
{
    int titre;
    int auteur;
    int disponible;
    int stock;
};

struct Adherent
{
    int index;
    char nom;
    char prenom;
    int nbEmprunts;
};