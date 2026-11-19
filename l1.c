#include <stdio.h>
#include <math.h>

typedef struct { 
    double x, y; 
} ponto;

int main() {
    double distancia;
    ponto a, b;

    printf("Digite as coordenadas do ponto (x y): ");
    scanf("%lf %lf", &a.x, &a.y);

    printf("Digite as coordenadas do ponto (x y): ");
    scanf("%lf %lf", &b.x, &b.y);

    double dx = b.x - a.x;
    double dy = b.y - a.y;
    distancia = sqrt(dx * dx + dy * dy);

    printf("Distância entre os pontos: %.2f\n", distancia);

    return 0;
}