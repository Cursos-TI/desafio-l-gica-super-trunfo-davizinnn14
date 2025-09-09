#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1, codigo1[4], cidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1, superPoder1;

    // Variáveis da Carta 2
    char estado2, codigo2[4], cidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2, superPoder2;

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

    // ---- MENU INTERATIVO ----
    int opcao1, opcao2;
    float valor1_c1 = 0, valor1_c2 = 0;
    float valor2_c1 = 0, valor2_c2 = 0;

    printf("\n--- MENU DE ATRIBUTOS ---\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional (menor vence)\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");

    // Escolha do primeiro atributo
    printf("\nEscolha o PRIMEIRO atributo: ");
    scanf("%d", &opcao1);

    // Escolha do segundo atributo (não pode ser igual ao primeiro)
    do {
        printf("Escolha o SEGUNDO atributo (diferente do primeiro): ");
        scanf("%d", &opcao2);
        if (opcao2 == opcao1) {
            printf("⚠️ Você não pode escolher o mesmo atributo duas vezes!\n");
        }
    } while (opcao2 == opcao1);

    // Função auxiliar para obter valores
    auto float getValor(int opcao, float *c1, float *c2) {
        switch (opcao) {
            case 1: *c1 = populacao1; *c2 = populacao2; break;
            case 2: *c1 = area1; *c2 = area2; break;
            case 3: *c1 = pib1; *c2 = pib2; break;
            case 4: *c1 = pontosTuristicos1; *c2 = pontosTuristicos2; break;
            case 5: *c1 = densidade1; *c2 = densidade2; break;
            case 6: *c1 = pibPerCapita1; *c2 = pibPerCapita2; break;
            case 7: *c1 = superPoder1; *c2 = superPoder2; break;
            default: printf("Opção inválida!\n"); break;
        }
        return 0;
    }

    // Atribuir valores dos atributos escolhidos
    getValor(opcao1, &valor1_c1, &valor1_c2);
    getValor(opcao2, &valor2_c1, &valor2_c2);

    // Comparação de cada atributo
    printf("\n--- RESULTADO DA COMPARAÇÃO ---\n");
    printf("Cidade 1: %s | Cidade 2: %s\n", cidade1, cidade2);

    // Primeiro atributo
    printf("\nAtributo 1: ");
    switch (opcao1) {
        case 1: printf("População\n"); break;
        case 2: printf("Área\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Pontos Turísticos\n"); break;
        case 5: printf("Densidade Populacional (menor vence)\n"); break;
        case 6: printf("PIB per Capita\n"); break;
        case 7: printf("Super Poder\n"); break;
    }
    printf("%s: %.2f | %s: %.2f\n", cidade1, valor1_c1, cidade2, valor1_c2);
    printf("Vencedor: %s\n", 
        (opcao1 == 5) ? 
            (valor1_c1 < valor1_c2 ? cidade1 : (valor2_c2 < valor1_c1 ? cidade2 : "Empate")) : 
            (valor1_c1 > valor1_c2 ? cidade1 : (valor1_c2 > valor1_c1 ? cidade2 : "Empate")));

    // Segundo atributo
    printf("\nAtributo 2: ");
    switch (opcao2) {
        case 1: printf("População\n"); break;
        case 2: printf("Área\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Pontos Turísticos\n"); break;
        case 5: printf("Densidade Populacional (menor vence)\n"); break;
        case 6: printf("PIB per Capita\n"); break;
        case 7: printf("Super Poder\n"); break;
    }
    printf("%s: %.2f | %s: %.2f\n", cidade1, valor2_c1, cidade2, valor2_c2);
    printf("Vencedor: %s\n", 
        (opcao2 == 5) ? 
            (valor2_c1 < valor2_c2 ? cidade1 : (valor2_c2 < valor2_c1 ? cidade2 : "Empate")) : 
            (valor2_c1 > valor2_c2 ? cidade1 : (valor2_c2 > valor2_c1 ? cidade2 : "Empate")));

    // Soma dos dois atributos
    float soma1 = valor1_c1 + valor2_c1;
    float soma2 = valor1_c2 + valor2_c2;

    printf("\nSOMA dos dois atributos:\n");
    printf("%s: %.2f | %s: %.2f\n", cidade1, soma1, cidade2, soma2);

    printf("\nResultado Final: %s\n", 
        (soma1 > soma2 ? cidade1 : (soma2 > soma1 ? cidade2 : "Empate!")));

    return 0;
}
