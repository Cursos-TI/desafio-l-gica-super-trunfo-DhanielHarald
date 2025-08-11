#include <stdio.h>

int main() {
    int opcao,  resultado = -1; // -1 inválido, 0 empate, 1 carta1 vence, 2 carta2 vence
    
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

// Cálculos da Carta 1
    float densidade1 = populacao1 / area1;
    float perCapita1 = (PIB1 * 1000000000) / populacao1;
    float superPoder1 = populacao1 + area1 + PIB1 + pontosturisticos1 + perCapita1 + (1.0 / densidade1);

// Cálculos da Carta 2
    float densidade2 = populacao2 / area2;
    float perCapita2 = (PIB2 * 1000000000) / populacao2;
    float superPoder2 = populacao2 + area2 + PIB2 + pontosturisticos2 + perCapita2 + (1.0 / densidade2);

//Menu interativo
    printf("MENU DE COMPARAÇÃO\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. Pontos Turisticos\n");
    printf("4. PIB\n");
    printf("5. Densidade Demografica\n");
    
    printf("\n");
    
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);
    
    printf("\n");
    
//Comparação de atributo usando switch e if-else
    switch (opcao) {
        case 1: // População
        printf("Comparação da Populacao:\n");
        printf("%s: %d\n", cidade1, populacao1);
        printf("%s: %d\n", cidade2, populacao2);
            if (populacao1 > populacao2) {
                resultado = 1;
            } else if (populacao2 > populacao1) {
                resultado = 2;
            } else {
                resultado = 0;
            }
            break;
            
        case 2: //  Área
            printf("Comparação Area (km²): \n");
            printf("%s: %.2f\n", cidade1, area1);
            printf("%s: %.2f\n", cidade2, area2);
                if (area1 > area2) {
                    resultado = 1;
                } else if (area2 > area1) {
                    resultado = 2;
                } else {
                    resultado = 0;
                }
                break;
        
        case 3: // Pontos Turísticos
            printf("Comparacao Pontos Turisticos: \n");
            printf("%s: %d\n", cidade1, pontosturisticos1);
            printf("%s: %d\n", cidade2, pontosturisticos2);
                if (pontosturisticos1 > pontosturisticos2) {
                    resultado = 1;
                } else if (pontosturisticos2 > pontosturisticos1) {
                    resultado = 2;
                } else {
                    resultado = 0;
                }
                break;
        
        case 4: // PIB
            printf("Comparacao PIB (em bilhões): \n");
            printf("%s: %.2f\n", cidade1, PIB1);
            printf("%s: %.2f\n", cidade2, PIB2);
                if (PIB1 > PIB2) {
                    resultado = 1;
                } else if (PIB2 > PIB1) {
                    resultado = 2;
                } else {
                    resultado = 0;
                }
                break;
        
        case 5: // Densidade Demográfica (menor vence)
            printf("Comparacao Densidade Demografica (hab/km²): \n");
            printf("%s: %.2f\n", cidade1, densidade1);
            printf("%s: %.2f\n", cidade2, densidade2);
                if (densidade1 < densidade2) {
                    resultado = 1;
                } else if (densidade2 < densidade1) {
                    resultado = 2;
                } else {
                    resultado = 0;
                }
                break;
        default:
            resultado = -1;
    }

// Exibição do Resultado Final
    printf("\nRESULTADO FINAL: \n");
    printf("Cidades: %s e %s\n", cidade1, cidade2);
    
    switch (opcao) {
        case 1: 
            printf("Atributo: Populacao\n");
            printf("Valores: %d e %d\n", populacao1, populacao2);
            break;
        
        case 2: 
            printf("Atributo: Area\n");
            printf("Valores: %.2f e %.2f\n", area1, area2);
            break;
            
        case 3:
            printf("Atributo: Pontos Turisticos\n");
            printf("Valores: %d e %d\n", pontosturisticos1, pontosturisticos2);
            break;
            
        case 4:
            printf("Atributo: PIB\n");
            printf("Valores: %.2f e %.2f\n", PIB1, PIB2);
            break;
            
        case 5:
            printf("Atributo: Densidade Demografica\n");
            printf("Valores: %.2f e %.2f\n", densidade1, densidade2);
            break;
        
        default:
            ("Atributo invalida!\n");
    }
    
    printf("\n");
    
    printf("Vencedor: ");
        if (resultado == 1) {
            printf("%s\n", cidade1);
        } else if (resultado == 2) {
            printf("%s\n", cidade2);
        } else if (resultado == 0) {
            printf("Empate!\n");
        } else {
            printf("Nenhum vencedor (opção inválida)!\n");
        }

    return 0;
}
