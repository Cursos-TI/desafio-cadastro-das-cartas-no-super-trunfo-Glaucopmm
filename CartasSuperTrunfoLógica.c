#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int opcao;
    unsigned long int populacao1 = 0;
    int n_pontos_turisticos1 = 0;
    float area1 = 0.0;
    float PIB1 = 0.0;
    float densidade_populacional1 = 0.0;
    float renda_pcapita1 = 0.0;
    char codigo_estado1 = 'a';
    char nome_cidade1[20] = " ";
    char codigo_carta1[5] = "A01";
    float superpoder1 = 0.0;

    unsigned long int populacao2 = 0;
    int n_pontos_turisticos2 = 0;
    float area2 = 0.0;
    float PIB2 = 0.0;
    float densidade_populacional2 = 0.0;
    float renda_pcapita2 = 0.0;
    char codigo_estado2 = 'a';
    char nome_cidade2[20] = "";
    char codigo_carta2[5] = "A01";
    float superpoder2 = 0.0;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
 
    printf("############ SUPER TRUNFO LÓGICA ##########\n\n");
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

    // Cálculo da Densidade Populacional
    // Divisão da População da Cidade pela sua Área

    densidade_populacional1 = (float)populacao1/area1;
    densidade_populacional2 = (float)populacao2/area2;
    
    renda_pcapita1 = (float) PIB1/populacao1;
    renda_pcapita2 = (float) PIB2/populacao2;
    
    // Cálculo Superpoder
    
    superpoder1 = (float)populacao1 + area1 + (float)n_pontos_turisticos1 + renda_pcapita1 + (1/densidade_populacional1);
    
    superpoder2 = (float)populacao2 + area2 + (float)n_pontos_turisticos2 + renda_pcapita2 + (1/densidade_populacional2);

    // Menu Critério de Comparação

    printf("\n\n Escolha o atributo para comparação:");
    printf("\n\n 1 - População");
    printf("\n\n 2 - Area");
    printf("\n\n 3 - Pontos Turísticos");
    printf("\n\n 4 - PIB");
    printf("\n\n 5 - Densidade Populacional");
    printf("\n\n 6 - Renda per Capita");
    printf("\n\n 7 - SuperPoder");

    printf("\n\n Entre com a opção desejada:");
    scanf(" %d", &opcao);

// Mostra o nome das cartas em disputa:

    printf("\nNome da Cidade 1 %s",nome_cidade1);
    printf("\nNome da Cidade 2 %s",nome_cidade2);

 // De acordo com o menu selecionado será impresso o atributo das duas cartas
 // Dentro do case é feita a comparação dos dois atributos por meio da estrutura de if encadeado, em seguida
 // é impressa a carta vencedora 

    switch(opcao){

        case 1:
            
            printf("\nAtributo de Comparação: População");
            printf("\nPopulação1: %d ",populacao1);
            printf("\nPopulação2: %d ",populacao2);
            
            if (populacao1 > populacao2)
                {
                    printf("\n\nCarta 1 VENCEU");        
                } 
            else if (superpoder1 == superpoder2)
                {
                    printf("\n\nEMPATE");}
            else {
                    printf("\n\nCarta 2 VENCEU");
            }
        break;

        case 2:

            printf("\nAtributo de Comparação: Area");
            printf("\nArea1: %d ",area1);
            printf("\nArea2: %d ",area2);
            
            if (area1 > area2)
                {
                    printf("\n\nCarta 1 VENCEU");        
                } 
            else if ( area1 == area2)
                {
                    printf("\n\nEMPATE");}
            else {
                    printf("\n\nCarta 2 VENCEU");
            }
        break;
        
        case 3:

            printf("\nAtributo de Comparação: Pontos Turísticos");
            printf("\nNúmero de Pontos Turísticos 1: %d ",n_pontos_turisticos1);
            printf("\nNúmero de Pontos Turísticos 2: %d ",n_pontos_turisticos2);
            
            if (n_pontos_turisticos1 > n_pontos_turisticos2)
                {
                    printf("\n\nCarta 1 VENCEU");        
                } 
            else if ( area1 == area2)
                {
                    printf("\n\nEMPATE");}
            else {
                    printf("\n\nCarta 2 VENCEU");
            }
        break;

        case 4:

            printf("\nAtributo de Comparação: PIB");
            printf("\nNúmero de Pontos Turísticos 1: %d ",PIB1);
            printf("\nNúmero de Pontos Turísticos 2: %d ",PIB2);
            
            if (PIB1 > PIB2)
                {
                    printf("\n\nCarta 1 VENCEU");        
                } 
            else if ( PIB1 == PIB2)
                {
                    printf("\n\nEMPATE");}
            else {
                    printf("\n\nCarta 2 VENCEU");
            }

        break;

        case 5:

            printf("\nAtributo de Comparação: DENSIDADE POPULACIONAL");
            printf("\nNúmero de Pontos Turísticos 1: %d ",densidade_populacional1);
            printf("\nNúmero de Pontos Turísticos 2: %d ",densidade_populacional2);
            
            if (densidade_populacional1 < densidade_populacional2)
                {
                    printf("\n\nCarta 1 VENCEU");        
                } 
            else if ( densidade_populacional1 == densidade_populacional2)
                {
                    printf("\n\nEMPATE");}
            else {
                    printf("\n\nCarta 2 VENCEU");
            }
        
        break;
        
        case 6:

            printf("\nAtributo de Comparação: DENSIDADE POPULACIONAL");
            printf("\nNúmero de Pontos Turísticos 1: %d ",renda_pcapita1);
            printf("\nNúmero de Pontos Turísticos 2: %d ",renda_pcapita2);
            
            if (renda_pcapita1 > renda_pcapita2)
                {
                    printf("\n\nCarta 1 VENCEU");        
                } 
            else if ( renda_pcapita1 == renda_pcapita2)
                {
                    printf("\n\nEMPATE");}
            else {
                    printf("\n\nCarta 2 VENCEU");
            }
        
            break;

        case 7:

            printf("\nAtributo de Comparação: SUPERPODER");
            printf("\nNúmero de Pontos Turísticos 1: %d ",superpoder1);
            printf("\nNúmero de Pontos Turísticos 2: %d ",superpoder2);
            
            if (superpoder1 > superpoder2)
                {
                    printf("\n\nCarta 1 VENCEU");        
                } 
            else if ( superpoder1 == superpoder2)
                {
                    printf("\n\nEMPATE");}
            else {
                    printf("\n\nCarta 2 VENCEU");
            }
        break;

        
    }




 

    return 0;
}
