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
    int turisticos1, turisticos2;
    int result_pop1, result_area1, result_PIB1, result_des_pop1, result_PIB_percap1,
    result_turistico1, result_super1, somapontos1, result_total1;
    int result_pop2, result_area2, result_PIB2, result_des_pop2, result_PIB_percap2,
    result_turistico2, result_super2, somapontos2, result_total2;
    unsigned long int populacao1, populacao2;
    float area1, PIB1, area2, PIB2, densidade_pop1, PIB_percap1, densidade_pop2, PIB_percap2;
    float super1, super2;

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

    // Calcular super poder

    super1 = ((float)populacao1 + (float)turisticos1 + area1 + PIB1 + PIB_percap1) - densidade_pop1;
    super2 = ((float)populacao2 + (float)turisticos2 + area2 + PIB2 + PIB_percap2) - densidade_pop2;

    // Comparativo Atributos Carta1 vs Carta2

    result_pop1 = populacao1 > populacao2;
    result_pop2 = populacao2 > populacao1;
    result_area1 = area1 > area2;
    result_area2 = area2 > area1;
    result_PIB1 = PIB1 > PIB2;
    result_PIB2 = PIB2 > PIB1;
    result_turistico1 = turisticos1 > turisticos2;
    result_turistico2 = turisticos2 > turisticos1;
    result_PIB_percap1 = PIB_percap1 > PIB_percap2;
    result_PIB_percap2 = PIB_percap2 > PIB_percap1;
    result_des_pop1 = densidade_pop1 < densidade_pop2;
    result_des_pop2 = densidade_pop2 < densidade_pop1;
    result_super1 = super1 > super2;
    result_super2 = super2 > super1;

    // Somar pontuação das Cartas

    somapontos1 = result_area1 + result_des_pop1 + result_PIB1 + result_PIB_percap1 + 
                    result_pop1 + result_super1 + result_turistico1;

    somapontos2 = result_area2 + result_des_pop2 + result_PIB2 + result_PIB_percap2 + 
                    result_pop2 + result_super2 + result_turistico2;

    // Comparar carta vencedora

    result_total1 = somapontos1 > somapontos2;
    result_total2 = somapontos2 > somapontos1;

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

    // Imprimir resultado das comparações e carta campeã (1) vencedor (0) perdedor

    printf("\n Comparação de Cartas: \n");
    printf("População: Carta 1 (%d) - Carta 2 (%d)\n", result_pop1, result_pop2);
    printf("Área: Carta 1 (%d) - Carta 2 (%d)\n", result_area1, result_area2);
    printf("PIB: Carta 1 (%d) - Carta 2 (%d)\n", result_PIB1, result_PIB2);
    printf("Pontos Turísticos: Carta 1 (%d) - Carta 2 (%d)\n", result_turistico1, result_turistico2);
    printf("Densidade Populacional: Carta 1 (%d) - Carta 2 (%d)\n", result_des_pop1, result_des_pop2);
    printf("PIB Per Capita: Carta 1 (%d) - Carta 2 (%d)\n", result_PIB_percap1, result_PIB_percap2);
    printf("Super Poder: Carta 1 (%d) - Carta 2 (%d)\n", result_super1, result_super2);
    printf("Carta Vencedora com mais pontos: Carta 1 (%d) - Carta 2 (%d)\n", result_total1, result_total2);
  
    return 0;
}