#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char estado, cod[2], cidade[50], estado1, cod1[2], cidade1[50];
    int populacao, turisticos, populacao1, turisticos1;
    float area, PIB, area1, PIB1;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Digite uma leta de A à H para carta 1: \n");
    scanf(" %c", &estado);

    printf("Digite um número de 01 à 04 para carta 1: \n");
    scanf(" %s", cod);

    getchar();
    printf("Digite o nome da cidade para carta 1: \n");
    fgets(cidade, 50, stdin);

    printf("Digite a população da cidade para carta 1: \n");
    scanf("%d", &populacao);

    printf("Digite a Área em km² da cidade para carta 1: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade para carta 1: \n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turisticos da cidade para carta 1: \n");
    scanf("%d", &turisticos);

    printf("Digite uma leta de A à H para carta 2: \n");
    scanf(" %c", &estado1);

    printf("Digite um número de 01 à 04 para carta 2: \n");
    scanf(" %s", cod1);

    getchar();
    printf("Digite o nome da cidade para carta 2: \n");
    fgets(cidade1, 50, stdin);

    printf("Digite a população da cidade para carta 2: \n");
    scanf("%d", &populacao1);

    printf("Digite a Área em km² da cidade para carta 2: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade para carta 2: \n");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turisticos da cidade para carta 2: \n");
    scanf("%d", &turisticos1);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\nCarta 1:\nEstado: %c\n", estado);
    printf("Código: %c%s\n", estado, cod);
    printf("Nome da cidade: %s", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Números de Pontos Turisticos: %d\n", turisticos);

    printf("\nCarta 2:\nEstado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, cod1);
    printf("Nome da cidade: %s", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Números de Pontos Turisticos: %d\n\n", turisticos1);

    return 0;
}
