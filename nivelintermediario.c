#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1; 
    float pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1;
    float superPoder1;

    // Variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2;
    float superPoder2;
    
    int opcao;

    // Entrada de dados da Carta 1
    printf("Digite o estado da Carta 1 (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da Carta 1 (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade da Carta 1: ");
    scanf(" %[^\n]", cidade1);

    printf("Digite a populacao da cidade da Carta 1: ");
    scanf("%lu", &populacao1);

    printf("Digite a area da cidade da Carta 1 (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade da Carta 1 (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos da cidade da Carta 1: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos da Carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000) + (float)pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);

    // Entrada de dados da Carta 2
    printf("\nDigite o estado da Carta 2 (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da Carta 2 (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade da Carta 2: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a populacao da cidade da Carta 2: ");
    scanf("%lu", &populacao2);

    printf("Digite a area da cidade da Carta 2 (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade da Carta 2 (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da cidade da Carta 2: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos da Carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000) + (float)pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

    // Saída formatada das cartas
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Menu interativo para comparação
    printf("\n--- MENU DE COMPARAÇÃO ---\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional (menor vence)\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

    printf("\nComparação entre %s e %s:\n", cidade1, cidade2);

    switch(opcao) {
        case 1: // População
            printf("Atributo: População\n");
            printf("%s: %lu habitantes\n", cidade1, populacao1);
            printf("%s: %lu habitantes\n", cidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: %s venceu!\n", cidade1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2: // Área
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", cidade1, area1);
            printf("%s: %.2f km²\n", cidade2, area2);
            if (area1 > area2) {
                printf("Resultado: %s venceu!\n", cidade1);
            } else if (area2 > area1) {
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("%s: R$ %.2f bilhões\n", cidade1, pib1);
            printf("%s: R$ %.2f bilhões\n", cidade2, pib2);
            if (pib1 > pib2) {
                printf("Resultado: %s venceu!\n", cidade1);
            } else if (pib2 > pib1) {
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4: // Pontos Turísticos
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d pontos\n", cidade1, pontosTuristicos1);
            printf("%s: %d pontos\n", cidade2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Resultado: %s venceu!\n", cidade1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5: // Densidade Demográfica (menor vence)
            printf("Atributo: Densidade Populacional\n");
            printf("%s: %.2f hab/km²\n", cidade1, densidade1);
            printf("%s: %.2f hab/km²\n", cidade2, densidade2);
            if (densidade1 < densidade2) {
                printf("Resultado: %s venceu!\n", cidade1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 6: // PIB per Capita
            printf("Atributo: PIB per Capita\n");
            printf("%s: R$ %.2f\n", cidade1, pibPerCapita1);
            printf("%s: R$ %.2f\n", cidade2, pibPerCapita2);
            if (pibPerCapita1 > pibPerCapita2) {
                printf("Resultado: %s venceu!\n", cidade1);
            } else if (pibPerCapita2 > pibPerCapita1) {
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 7: // Super Poder
            printf("Atributo: Super Poder\n");
            printf("%s: %.2f\n", cidade1, superPoder1);
            printf("%s: %.2f\n", cidade2, superPoder2);
            if (superPoder1 > superPoder2) {
                printf("Resultado: %s venceu!\n", cidade1);
            } else if (superPoder2 > superPoder1) {
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opção inválida. Tente novamente com um número entre 1 e 7.\n");
            break;
    }

    return 0;
}
