#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nom[20];
    char prenom[20];
    int note[4];
}etudiant;

int main()
{
    etudiant etudiant1;

    strcpy(etudiant1.nom, "zakariae");
    strcpy(etudiant1.prenom,"el hassad");
    etudiant1.note[0]= 10;
    etudiant1.note[1]= 13;
    etudiant1.note[2]= 18;
    etudiant1.note[3]= 8;


    printf("nom : %s \n",etudiant1.nom);
    printf("prenom : %s \n",etudiant1.prenom);
    for(int i = 0 ; i < 4 ; i++){
        printf("note : %d \n",etudiant1.note[i] );
    }

    return 0;
}