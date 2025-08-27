#include <stdio.h>

int main() {

    char estado1;
    char codigo1[3];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
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
    scanf("%d", &populacao1);
    printf("Qual a área da cidade: ");
    scanf("%f", &area1);
    printf("Qual o PIB: ");
    scanf("%f", &pib1);
    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &turismo1);

    //CARTA 02: 

    char estado2;
    char codigo2[3];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int turismo2;

    printf("\nCARTA 2: \n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta (entre 01 e 04): ");
    scanf("%s", &codigo2);
    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade2);
    printf("Qual a população: ");
    scanf("%d", &populacao2);
    printf("Qual a área da cidade: ");
    scanf("%f", &area2);
    printf("Qual o PIB: ");
    scanf("%f", &pib2);
    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &turismo2);

    //RESULTADOS:

    printf("\n\nCARTA 01\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n\n", turismo1);

    printf("CARTA 02\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", turismo2);

    return 0;
}