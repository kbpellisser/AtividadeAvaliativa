#include <stdio.h>

//6. Leia 2 valores com uma casa decimal (x e y), que devem representar as coordenadas de um ponto em um plano. A seguir, determine qual o quadrante ao qual pertence o ponto, ou se está sobre um dos eixos cartesianos ou na origem (x = y = 0). Se o ponto estiver na origem, escreva a mensagem “Origem”. Se o ponto estiver sobre um dos eixos escreva “Eixo X” ou “Eixo Y”, conforme for a situação. 

int main() {
    float x, y;
    
    printf("Digite as coordenadas do ponto (x y): ");
    scanf("%f %f", &x, &y);
    
    if (x == 0 && y == 0) {
        printf("Origem\n");
    } else if (x == 0) {
        printf("Eixo Y\n");
    } else if (y == 0) {
        printf("Eixo X\n");
    } else {
        if (x > 0) {
            if (y > 0) {
                printf("Q1\n");
            } else {
                printf("Q4\n");
            }
        } else {
            if (y > 0) {
                printf("Q2\n");
            } else {
                printf("Q3\n");
            }
        }
    }
    
    return 0;
}
