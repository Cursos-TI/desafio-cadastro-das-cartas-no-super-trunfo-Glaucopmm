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
    char codigo1 = "";

    int populacao2 = 0;
    int n_pontos_turisticos2 = 0;
    float area2 = 0.0;
    float PIB2 = 0.0;
    char codigo2 = "";

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("############ SUPER TRUNFO ##########\n\n");
    printf("Entre com os dados da Carta 1: ");
    printf("\n\nCódigo da Cidade: ");
    scanf("%c",&codigo1);
    printf("\nÁrea : ");
    scanf("%f",&area1);
    printf("\nPopulação : ");
    scanf("%d",&populacao1);
    printf("\nNúmero de Pontos Turísticos : ");
    scanf("%d",&n_pontos_turisticos1);
    printf("\nPIB : ");
    scanf("%f",&PIB1);

    printf("\n\nEntre com os dados da Carta 2: ");
    printf("\n\nCódigo da Cidade: ");
    scanf(" %c",&codigo2 );
    printf("\nÁrea : ");
    scanf("%f",&area2);
    printf("\nPopulação : ");
    scanf("%d",&populacao2);
    printf("\nNúmero de Pontos Turísticos : ");
    scanf("%d",&n_pontos_turisticos2);
    printf("\nPIB : ");
    scanf("%f",&PIB2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n\nCarta 1");
    printf("\nCódigo: %c",codigo1);
    printf("\nÁrea: %.2f ",area1);
    printf("\nPopulação: %d ",populacao1);
    printf("\nNúmero de Pontos Turísticos: %d ", n_pontos_turisticos1);
    printf("\nPIB: %.2f ", PIB1);

    printf("\n\nCarta 2");
    printf("\nCódigo: %c",codigo2);
    printf("\nÁrea: %.2f ",area2);
    printf("\nPopulação: %d ",populacao2);
    printf("\nNúmero de Pontos Turísticos: %d ", n_pontos_turisticos2);
    printf("\nPIB: %.2f ", PIB2);

    return 0;
}
