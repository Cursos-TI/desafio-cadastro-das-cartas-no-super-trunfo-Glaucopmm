#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    int populacao1 = 0;
    int n_pontos_turisticos1 = 0;
    float area1 = 0.0;
    float PIB1 = 0.0;
    char codigo_estado1 = "";
    char nome_cidade1[20] = "";
    char codigo_carta1[5] = "A01";

    int populacao2 = 0;
    int n_pontos_turisticos2 = 0;
    float area2 = 0.0;
    float PIB2 = 0.0;
    char codigo_estado2 = "";
    char nome_cidade2[20] = "";
    char codigo_carta2[5] = "A01";

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
 
    printf("############ SUPER TRUNFO ##########\n\n");
    printf("Entre com os dados da Carta 1: \n");
    printf("Código do Estado: \n");
    scanf(" %c",&codigo_estado1);
    printf("Código da Carta: \n");
    scanf(" %s",&codigo_carta1);
    printf("Nome da Cidade: \n");
    scanf(" %s",&nome_cidade1);
    printf("População : \n");
    scanf("%d",&populacao1);
    printf("Área : \n");
    scanf("%f",&area1);
    printf("Número de Pontos Turísticos : \n");
    scanf("%d",&n_pontos_turisticos1);
    printf("PIB : \n");
    scanf("%f",&PIB1);

    printf("############ SUPER TRUNFO ##########\n\n");
    printf("Entre com os dados da Carta 2: \n");
    printf("Código do Estado: \n");
    scanf(" %c",&codigo_estado2);
    printf("Código da Carta: \n");
    scanf(" %s",&codigo_carta2);
    printf("Nome da Cidade: \n");
    scanf(" %s",&nome_cidade2);
    printf("População : \n");
    scanf("%d",&populacao2);
    printf("Área : \n");
    scanf("%f",&area2);
    printf("Número de Pontos Turísticos : \n");
    scanf("%d",&n_pontos_turisticos2);
    printf("PIB : \n");
    scanf("%f",&PIB2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n\nCarta 1:");
    printf("\nEstado: %c",codigo_estado1);
    printf("\nCódigo: %s",codigo_carta1);
    printf("\nNome da Cidade %s",nome_cidade1);
    printf("\nPopulação: %d ",populacao1);
    printf("\nÁrea: %.2f ",area1);
    printf("\nPIB: %.2f ", PIB1);
    printf("\nNúmero de Pontos Turísticos: %d ", n_pontos_turisticos1);
   

    printf("\n\nCarta 2:");
    printf("\nEstado: %c",codigo_estado2);
    printf("\nCódigo: %s",codigo_carta2);
    printf("\nNome da Cidade %s",nome_cidade2);
    printf("\nPopulação: %d ",populacao2);
    printf("\nÁrea: %.2f ",area2);
    printf("\nPIB: %.2f ", PIB2);
    printf("\nNúmero de Pontos Turísticos: %d ", n_pontos_turisticos2);
   

    return 0;
}
