#include <stdio.h>

typedef struct {
    char estado[50];
    char codigo[5];
    char nome[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade;
    float pib_per_capita;
    float super_poder;
} Carta;

int main() {
    Carta c1, c2;

    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado: ");
    scanf(" %[^\n]", c1.estado);
    printf("Codigo: ");
    scanf(" %s", c1.codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", c1.nome);
    printf("Populacao: ");
    scanf("%lu", &c1.populacao);
    printf("Area: ");
    scanf("%f", &c1.area);
    printf("PIB: ");
    scanf("%f", &c1.pib);
    printf("Pontos turisticos: ");
    scanf("%d", &c1.pontos_turisticos);

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado: ");
    scanf(" %[^\n]", c2.estado);
    printf("Codigo: ");
    scanf(" %s", c2.codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", c2.nome);
    printf("Populacao: ");
    scanf("%lu", &c2.populacao);
    printf("Area: ");
    scanf("%f", &c2.area);
    printf("PIB: ");
    scanf("%f", &c2.pib);
    printf("Pontos turisticos: ");
    scanf("%d", &c2.pontos_turisticos);

    // Cálculos
    c1.densidade = c1.populacao / c1.area;
    c2.densidade = c2.populacao / c2.area;

    c1.pib_per_capita = c1.pib / c1.populacao;
    c2.pib_per_capita = c2.pib / c2.populacao;

    c1.super_poder = (float)c1.populacao + c1.area + c1.pib +
                     c1.pontos_turisticos + c1.pib_per_capita +
                     (1 / c1.densidade);

    c2.super_poder = (float)c2.populacao + c2.area + c2.pib +
                     c2.pontos_turisticos + c2.pib_per_capita +
                     (1 / c2.densidade);

    // Comparações
    printf("\n=== Comparacao de Cartas ===\n");

    printf("Populacao: Carta 1 venceu (%d)\n", c1.populacao > c2.populacao);
    printf("Area: Carta 1 venceu (%d)\n", c1.area > c2.area);
    printf("PIB: Carta 1 venceu (%d)\n", c1.pib > c2.pib);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", c1.pontos_turisticos > c2.pontos_turisticos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", c1.densidade < c2.densidade); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", c1.pib_per_capita > c2.pib_per_capita);
    printf("Super Poder: Carta 1 venceu (%d)\n", c1.super_poder > c2.super_poder);

    return 0;
}
