#include <stdio.h>

typedef struct {
    char estado[50];
    char codigo[5];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade;
    float pib_per_capita;
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
    scanf("%d", &c1.populacao);
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
    scanf("%d", &c2.populacao);
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

    printf("\n=== Resultados ===\n");

    printf("Carta 1 - %s (%s):\n", c1.nome, c1.estado);
    printf("Densidade Populacional: %.2f\n", c1.densidade);
    printf("PIB per Capita: %.2f\n\n", c1.pib_per_capita);

    printf("Carta 2 - %s (%s):\n", c2.nome, c2.estado);
    printf("Densidade Populacional: %.2f\n", c2.densidade);
    printf("PIB per Capita: %.2f\n", c2.pib_per_capita);

    return 0;
}

