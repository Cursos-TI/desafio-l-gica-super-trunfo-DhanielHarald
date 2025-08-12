#include <stdio.h>

int main() {
    int opcao1, opcao2;
    int resultadoAtributo1 = 0, resultadoAtributo2 = 0;
    float valorCarta1_A1 = 0, valorCarta2_A1 = 0;
    float valorCarta1_A2 = 0, valorCarta2_A2 = 0;
    
    // Variáveis da Carta 1
    char estado1[50] = "ES", codigo1[5] = "A01", cidade1[50] = "Vitória";
    int populacao1 = 342800, pontosturisticos1 = 50;
    float area1 = 97.12;
    float PIB1 = 31.4; // bilhões de reais

    // Variáveis da Carta 2
    char estado2[50] = "MG", codigo2[5] = "B01", cidade2[50] = "Divinópolis";
    int populacao2 = 242328, pontosturisticos2 = 30;
    float area2 = 708.1;
    float PIB2 = 8.3; // bilhões de reais

    // Cálculos adicionais
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    // **** MENU 1 ****
    printf("MENU DE COMPARAÇÃO - Escolha o primeiro atributo:\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. Pontos Turisticos\n");
    printf("4. PIB\n");
    printf("5. Densidade Demografica (menor vence)\n");
    printf("Escolha: ");
    scanf("%d", &opcao1);

    //  **** MENU 2 (dinâmico) ****
    printf("\nMENU DE COMPARAÇÃO - Escolha o segundo atributo:\n");
    if (opcao1 != 1) printf("1. Populacao\n");
    if (opcao1 != 2) printf("2. Area\n");
    if (opcao1 != 3) printf("3. Pontos Turisticos\n");
    if (opcao1 != 4) printf("4. PIB\n");
    if (opcao1 != 5) printf("5. Densidade Demografica (menor vence)\n");

    printf("Escolha: ");
    scanf("%d", &opcao2);

    //  **** COMPARAÇÃO DO ATRIBUTO 1 ****
    switch (opcao1) {
        case 1:
            valorCarta1_A1 = populacao1;
            valorCarta2_A1 = populacao2;
            resultadoAtributo1 = (populacao1 > populacao2) ? 1 : (populacao2 > populacao1 ? 2 : 0);
            break;
        case 2:
            valorCarta1_A1 = area1;
            valorCarta2_A1 = area2;
            resultadoAtributo1 = (area1 > area2) ? 1 : (area2 > area1 ? 2 : 0);
            break;
        case 3:
            valorCarta1_A1 = pontosturisticos1;
            valorCarta2_A1 = pontosturisticos2;
            resultadoAtributo1 = (pontosturisticos1 > pontosturisticos2) ? 1 : (pontosturisticos2 > pontosturisticos1 ? 2 : 0);
            break;
        case 4:
            valorCarta1_A1 = PIB1;
            valorCarta2_A1 = PIB2;
            resultadoAtributo1 = (PIB1 > PIB2) ? 1 : (PIB2 > PIB1 ? 2 : 0);
            break;
        case 5:
            valorCarta1_A1 = densidade1;
            valorCarta2_A1 = densidade2;
            resultadoAtributo1 = (densidade1 < densidade2) ? 1 : (densidade2 < densidade1 ? 2 : 0);
            break;
    }

    // **** COMPARAÇÃO DO ATRIBUTO 2 ****
    switch (opcao2) {
        case 1:
            valorCarta1_A2 = populacao1;
            valorCarta2_A2 = populacao2;
            resultadoAtributo2 = (populacao1 > populacao2) ? 1 : (populacao2 > populacao1 ? 2 : 0);
            break;
        case 2:
            valorCarta1_A2 = area1;
            valorCarta2_A2 = area2;
            resultadoAtributo2 = (area1 > area2) ? 1 : (area2 > area1 ? 2 : 0);
            break;
        case 3:
            valorCarta1_A2 = pontosturisticos1;
            valorCarta2_A2 = pontosturisticos2;
            resultadoAtributo2 = (pontosturisticos1 > pontosturisticos2) ? 1 : (pontosturisticos2 > pontosturisticos1 ? 2 : 0);
            break;
        case 4:
            valorCarta1_A2 = PIB1;
            valorCarta2_A2 = PIB2;
            resultadoAtributo2 = (PIB1 > PIB2) ? 1 : (PIB2 > PIB1 ? 2 : 0);
            break;
        case 5:
            valorCarta1_A2 = densidade1;
            valorCarta2_A2 = densidade2;
            resultadoAtributo2 = (densidade1 < densidade2) ? 1 : (densidade2 < densidade1 ? 2 : 0);
            break;
    }

    // **** SOMA DOS ATRIBUTOS ****
    float somaCarta1 = valorCarta1_A1 + valorCarta1_A2;
    float somaCarta2 = valorCarta2_A1 + valorCarta2_A2;

    int vencedorFinal = (somaCarta1 > somaCarta2) ? 1 : (somaCarta2 > somaCarta1 ? 2 : 0);

    // **** RESULTADO ****
    printf("\nRESULTADO DA RODADA:\n");
    printf("Cidades: %s (%s) e %s (%s)\n", cidade1, estado1, cidade2, estado2);

    // Mostrar atributos escolhidos
    printf("Atributo 1 (%d): %.2f vs %.2f\n", opcao1, valorCarta1_A1, valorCarta2_A1);
    printf("Atributo 2 (%d): %.2f vs %.2f\n", opcao2, valorCarta1_A2, valorCarta2_A2);

    printf("\nSoma dos Atributos: %.2f vs %.2f\n", somaCarta1, somaCarta2);

    printf("Vencedor Final: ");
    if (vencedorFinal == 1) {
        printf("%s\n", cidade1);
    } else if (vencedorFinal == 2) {
        printf("%s\n", cidade2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}
