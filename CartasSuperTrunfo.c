#include <stdio.h>

int main(){
    char estado1[8], estado2[8];
    char codigo1[4], codigo2[4];
    char nomecidade1[50], nomecidade2[50];
    int populacao1, populacao2;
    float areakm1, areakm2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;
    float densidade1, densidade2;
    float pibpercapita1, pibpercapita2;

    printf("Carta 1: \n"); //Coleta de dados da carta 1
    
    printf("Informe o estado: ");
    scanf("%s", estado1);

    printf("Código da carta: ");
    scanf("%s", codigo1);

    getchar();

    printf("Nome da cidade: ");
    fgets(nomecidade1, sizeof(nomecidade1), stdin); // Ler uma linha incluindo espaços.

    nomecidade1[strcspn(nomecidade1, "\n")] = '\0'; // Remove o caractere de nova linha (\n)

    printf("Quantidade da população: ");
    scanf("%d", &populacao1);

    printf("Informe a area em km²: ");
    scanf("%f", &areakm1);

    printf("Informe o pib: ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

    densidade1 = populacao1 / areakm1; //Calcular a densidade populacional
    pibpercapita1 = pib1 / populacao1; //Calcular o pib per capta

    printf("\nCarta 2: \n"); //Coleta de dados da carta 2
    
    printf("Informe o estado: ");
    scanf("%s", estado2);

    printf("Código da carta: ");
    scanf("%s", codigo2);

    getchar();

    printf("Nome da cidade: ");
    fgets(nomecidade2, sizeof(nomecidade2), stdin); // Ler uma linha incluindo espaços.

    nomecidade2[strcspn(nomecidade2, "\n")] = '\0'; // Remove o caractere de nova linha (\n)

    printf("Quantidade da população: ");
    scanf("%d", &populacao2);

    printf("Informe a area em km²: ");
    scanf("%f", &areakm2);

    printf("Informe o pib: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    densidade2 = populacao2 / areakm2; //Calcular a densidade populacional
    pibpercapita1 = pib2 / populacao2; // calcular o pib per capita


    printf("\n -------------------------------------- \n");

    printf("\n Carta 1: \n Estado: %s \n Código: %s \n Nome da Cidade: %s \n População: %d \n Área: %.2f km² \n PIB: %.2f bilhões de reais \n Números de pontos turísticos: %d \n", estado1, codigo1, nomecidade1, populacao1, areakm1, pib1, pontosturisticos1);
    printf("\n Carta 2: \n Estado: %s \n Código: %s \n Nome da Cidade: %s \n População: %d \n Área: %.2f km² \n PIB: %.2f bilhões de reais \n Números de pontos turísticos: %d \n", estado2, codigo2, nomecidade2, populacao2, areakm2, pib2, pontosturisticos2);
   

    return 0;
}