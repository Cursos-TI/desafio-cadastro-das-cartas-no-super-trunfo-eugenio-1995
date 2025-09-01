#include <stdio.h>

int main() {
    // Dados das cartas
    char estado1, estado2;
    char cod1[20], cod2[20], nome1[50], nome2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;

    // Cálculos
    float dens1, dens2;
    float pibpc1, pibpc2;
    float super1, super2;

    // Entrada Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (letra): ");
    scanf(" %s", &estado1);
    printf("Codigo: ");
    scanf("%s", cod1);
    printf("Nome: ");
    scanf("%s", nome1);
    printf("Populacao: ");
    scanf("%lu", &populacao1);
    printf("Area: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos turisticos: ");
    scanf("%d", &pontos1);

    // Entrada Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (letra): ");
    scanf(" %s", &estado2);
    printf("Codigo: ");
    scanf("%s", cod2);
    printf("Nome: ");
    scanf("%s", nome2);
    printf("Populacao: ");
    scanf("%lu", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos turisticos: ");
    scanf("%d", &pontos2);

    // Cálculos das duas cartas
    dens1 = populacao1 / area1;
    dens2 = populacao2 / area2;

    pibpc1 = pib1 / populacao1;
    pibpc2 = pib2 / populacao2;

    super1 = (float)populacao1 + area1 + pib1 + pontos1 + pibpc1 + (1.0f / dens1);
    super2 = (float)populacao2 + area2 + pib2 + pontos2 + pibpc2 + (1.0f / dens2);

    // Exibição das cartas
    printf("\n===== Carta 1 =====\n");
    printf("Estado: %c\nCodigo: %s\nNome: %s\n", estado1, cod1, nome1);
    printf("Populacao: %lu\nArea: %.2f\nPIB: %.2f\nPontos Turisticos: %d\n", populacao1, area1, pib1, pontos1);
    printf("Densidade: %.2f\nPIB per Capita: %.2f\nSuper Poder: %.2f\n", dens1, pibpc1, super1);

    printf("\n===== Carta 2 =====\n");
    printf("Estado: %c\nCodigo: %s\nNome: %s\n", estado2, cod2, nome2);
    printf("Populacao: %lu\nArea: %.2f\nPIB: %.2f\nPontos Turisticos: %d\n", populacao2, area2, pib2, pontos2);
    printf("Densidade: %.2f\nPIB per Capita: %.2f\nSuper Poder: %.2f\n", dens2, pibpc2, super2);

    // Comparações
    printf("\n===== Comparacao de Cartas =====\n");

    if (populacao1 > populacao2) printf("Populacao: Carta 1 venceu (1)\n");
    else printf("Populacao: Carta 2 venceu (0)\n");

    if (area1 > area2) printf("Area: Carta 1 venceu (1)\n");
    else printf("Area: Carta 2 venceu (0)\n");

    if (pib1 > pib2) printf("PIB: Carta 1 venceu (1)\n");
    else printf("PIB: Carta 2 venceu (0)\n");

    if (pontos1 > pontos2) printf("Pontos Turisticos: Carta 1 venceu (1)\n");
    else printf("Pontos Turisticos: Carta 2 venceu (0)\n");

    if (dens1 < dens2) printf("Densidade Populacional: Carta 1 venceu (1)\n");
    else printf("Densidade Populacional: Carta 2 venceu (0)\n");

    if (pibpc1 > pibpc2) printf("PIB per Capita: Carta 1 venceu (1)\n");
    else printf("PIB per Capita: Carta 2 venceu (0)\n");

    if (super1 > super2) printf("Super Poder: Carta 1 venceu (1)\n");
    else printf("Super Poder: Carta 2 venceu (0)\n");

    return 0;
}
