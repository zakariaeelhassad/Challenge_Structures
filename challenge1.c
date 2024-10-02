#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nom[20];
    char prenom[20];
    int age;
}personne;

int main()
{
    personne personne1;

    strcpy(personne1.nom, "zakariae");
    strcpy(personne1.prenom,"el hassad");
    personne1.age = 19 ;


    printf("nom : %s \n",personne1.nom);
    printf("prenom : %s \n",personne1.prenom);
    printf("age : %d",personne1.age );

    return 0;
}