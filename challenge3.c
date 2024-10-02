#include <stdio.h>


typedef struct  {
    int longueur;
    int largeur;
}Rectangle;


float calcul(Rectangle rectangle) {
    return rectangle.longueur * rectangle.largeur;
}

int main() {
    Rectangle rectangle1;

    rectangle1.longueur = 7;
    rectangle1.largeur = 4;

    int aire = calcul(rectangle1);

    printf("L'aire du rectangle est : %d\n", aire);

    return 0;
}