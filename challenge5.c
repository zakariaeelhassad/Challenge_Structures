#include <stdio.h>


typedef struct  {
    char titre[20];
    char auteur[20];
    int annee;
}livre;


void aflivre(livre liv) {
    strcpy(liv.titre,li.titre);
    strcpy(liv.auteur,"ahmed sefrioui");
    liv.annee = 1954;
}

int main() {
    livre li;


    aflivre(li);
    strcpy(li.titre,"boite a mervaille");
    strcpy(li.auteur,"ahmed sefrioui");
    li.annee = 1954;



    return 0;
}