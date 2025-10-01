#include <stdio.h>

int main() {

    char estado1;
    char codigo1[3];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1, densidade1, ppc1, superpoder1;
    int turismo1;
    
    //CARTA 01:    
    printf("CARTA 1: \n");
    printf("Digite o estado (A-H): ");
    scanf("%c", &estado1);
    printf("Digite o código da carta (entre 01 e 04): ");
    scanf("%s", &codigo1);
    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade1);
    printf("Qual a população: ");
    scanf("%lu", &populacao1);
    printf("Qual a área da cidade: ");
    scanf("%f", &area1);
    printf("Qual o PIB: ");
    scanf("%f", &pib1);
    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &turismo1);
    densidade1 = (double) populacao1 / area1;
    ppc1 = (double) pib1 / populacao1;
    superpoder1 = ((float) populacao1 + area1 + pib1 + (float) turismo1 + ppc1 + (1.0 / densidade1));

    //CARTA 02: 

    char estado2;
    char codigo2[3];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2, densidade2, ppc2, superpoder2;
    int turismo2;

    printf("\nCARTA 2: \n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta (entre 01 e 04): ");
    scanf("%s", &codigo2);
    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade2);
    printf("Qual a população: ");
    scanf("%lu", &populacao2);
    printf("Qual a área da cidade: ");
    scanf("%f", &area2);
    printf("Qual o PIB: ");
    scanf("%f", &pib2);
    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &turismo2);
    densidade2 = (double) populacao2 / area2;
    ppc2 = (double) pib2 / populacao2;
    superpoder2 = ((float) populacao2 + area2 + pib2 + (float) turismo2 + ppc2 + (1.0 /densidade2));

    //RESULTADOS:

    printf("\n\nCARTA 01\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", turismo1);
    printf("Densidade Populacional: %.3f hab/km²\n", densidade1);
    printf("PIB per Capita: R$ %.3f\n", ppc1);
    printf("SUPER PODER: %.3f\n\n", superpoder1);

    printf("CARTA 02\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", turismo2);
    printf("Densidade Populacional: %.3f hab/km²\n", densidade2);
    printf("PIB per Capita: R$ %.3f\n", ppc2);
    printf("SUPER PODER: %.3f\n\n", superpoder2);

    //COMPARAÇÃO DAS CARTAS
    printf("COMPARAÇÃO DE CARTAS:\n");
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos turísticos: %d\n", turismo1 > turismo2);
    printf("Densidade populacional: %d\n", (1.0 / densidade1) > (1.0 / densidade2));
    printf("PIB per Capita: %d\n", pib1 > pib2);
    printf("SUPER PODER: %d\n", superpoder1 > superpoder2);

    //DETERMINANDO A CARTA VENCEDORA
    printf("\nComparando o atributo PIB per capita das cartas, fica determinado que: \n");
    if (ppc1 > ppc2){
        printf("\nA carta 1 venceu!!!");
    } else {
        printf("\nA carta 2 venceu!!!");
    }
    
    return 0;
}