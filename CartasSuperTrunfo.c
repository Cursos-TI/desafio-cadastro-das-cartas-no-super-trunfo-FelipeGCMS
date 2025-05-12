#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Felipe Gustavo Costa Miranda de Souza

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char estado1, cod1[2], cidade1[50], estado2, cod2[2], cidade2[50];
    int populacao1, turisticos1, populacao2, turisticos2;
    float area1, PIB1, area2, PIB2, densidade_pop1, PIB_percap1, densidade_pop2, PIB_percap2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Digite uma letra de A à H para carta 1: \n");
    scanf(" %c", &estado1);

    printf("Digite um número de 01 à 04 para carta 1: \n");
    scanf(" %s", cod1);

    getchar();
    printf("Digite o nome da cidade para carta 1: \n");
    fgets(cidade1, 50, stdin);

    printf("Digite a população da cidade para carta 1: \n");
    scanf("%d", &populacao1);

    printf("Digite a Área em km² da cidade para carta 1: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade para carta 1: \n");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turisticos da cidade para carta 1: \n");
    scanf("%d", &turisticos1);

    printf("Digite uma letra de A à H para carta 2: \n");
    scanf(" %c", &estado2);

    printf("Digite um número de 01 à 04 para carta 2: \n");
    scanf(" %s", cod2);

    getchar();
    printf("Digite o nome da cidade para carta 2: \n");
    fgets(cidade2, 50, stdin);

    printf("Digite a população da cidade para carta 2: \n");
    scanf("%d", &populacao2);

    printf("Digite a Área em km² da cidade para carta 2: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade para carta 2: \n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turisticos da cidade para carta 2: \n");
    scanf("%d", &turisticos2);

    // Calculo da Densidade Populacional e PIB Per Capita

    densidade_pop1 = populacao1 / area1;
    PIB_percap1 = PIB1 / populacao1;

    densidade_pop2 = populacao2 / area2;
    PIB_percap2 = PIB2 / populacao2;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\nCarta 1:\nEstado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, cod1);
    printf("Nome da cidade: %s", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Números de Pontos Turisticos: %d\n", turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop1);
    printf("PIB per Capita: %.2f reais\n", PIB_percap1);


    printf("\nCarta 2:\nEstado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, cod2);
    printf("Nome da cidade: %s", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Números de Pontos Turisticos: %d\n\n", turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop2);
    printf("PIB per Capita: %.2f reais\n", PIB_percap2);

    return 0;
}