#include <stdio.h>


typedef struct  {
    int x;
    int y;
}point;

void poinpoint(point p,int *x , int *y ){
    *x = p.x;
    *y = p.y;
}
int main() {
    point points;

    points.x = 7;
    points.y = 4;

    int x, y;
    poinpoint(points, &x, &y); 

    printf("Coordonnées de point : x = %d, y = %d\n", x, y);

    return 0;
}