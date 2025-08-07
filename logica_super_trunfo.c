#include <stdio.h>

int main() {
// Variáveis da Carta 1
    char estado1[50], codigo1[5], cidade1[50];
    int populacao1, pontosturisticos1;
    float area1, PIB1;

// Variáveis da Carta 2
    char estado2[50], codigo2[5], cidade2[50];
    int populacao2, pontosturisticos2;
    float area2, PIB2;

// Cadastro da Carta 1
    printf("CADASTRO COMPLETO CARTA 1\n");
    printf("Digite o Estado (apenas siglas): \n");
    scanf(" %s", estado1);

    printf("Digite o Código: \n");
    scanf("%s", codigo1);

    printf("Digite a Cidade: \n");
    scanf("%s", cidade1);

    printf("Digite a População: \n");
    scanf("%d", &populacao1);

    printf("Digite a quantidade de Pontos Turísticos: \n");
    scanf("%d", &pontosturisticos1);

    printf("Digite a Área (em km²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de R$): \n");
    scanf("%f", &PIB1);

    printf("\n");

// Cálculos da Carta 1
    float densidade1 = populacao1 / area1;
    float perCapita1 = (PIB1 * 1000000000) / populacao1;
    float superPoder1 = populacao1 + area1 + PIB1 + pontosturisticos1 + perCapita1 + (1.0 / densidade1);

// Cadastro da Carta 2
    printf("CADASTRO COMPLETO CARTA 2\n");
    printf("Digite o Estado (apenas siglas): \n");
    scanf(" %s", estado2);

    printf("Digite o Código (dois algarismos): \n");
    scanf("%s", codigo2);

    printf("Digite a Cidade: \n");
    scanf("%s", cidade2);

    printf("Digite a População: \n");
    scanf("%d", &populacao2);

    printf("Digite a quantidade de Pontos Turísticos: \n");
    scanf("%d", &pontosturisticos2);

    printf("Digite a Área (em km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de R$): \n");
    scanf("%f", &PIB2);

    printf("\n");

// Cálculos da Carta 2
    float densidade2 = populacao2 / area2;
    float perCapita2 = (PIB2 * 1000000000) / populacao2;
    float superPoder2 = populacao2 + area2 + PIB2 + pontosturisticos2 + perCapita2 + (1.0 / densidade2);

//Comparação de atributo específico
    printf("COMPARAÇÃO ATRIBUTO: População\n");
    printf("\n");

    printf("População Carta 1 (%s): %d\n", cidade1, populacao1);
    printf("População Carta 2 (%s): %d\n", cidade2, populacao2);

    if (populacao1 > populacao2) {
        printf("\n");
        printf("A Carta 1 (%s) possui maior população. Portanto, a Carta 1 é a vencedora!\n", cidade1);
    } else if (populacao1 < populacao2) {
        printf("\n");
        printf("A Carta 2 (%s) possui maior população. Portanto, a Carta 2 é a vencedora! \n", cidade2);
    } else {
        printf("\n");
        printf("Empate, pois a população é igual.\n");
    }

    return 0;
}