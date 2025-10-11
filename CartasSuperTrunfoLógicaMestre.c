#include <stdio.h>
#include <stdbool.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade
    
    int opcao1;
    int opcao2;
    float soma_atrib1;
    float soma_atrib2;
    float atributo1_1;
    float atributo2_1;

    // Atributo de Erro do Jogo
    bool invalido = 0;

    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
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
    // Escolha dois atributos para comparação

   
    printf("\n\n Escolha o atributo para comparação:");
    printf("\n\n 1 - População");
    printf("\n\n 2 - Area");
    printf("\n\n 3 - Pontos Turísticos");
    printf("\n\n 4 - PIB");
    printf("\n\n 5 - Densidade Populacional");
    printf("\n\n 6 - Renda per Capita");
    printf("\n\n 7 - SuperPoder");

    printf("\n\n Entre com a opção 1 desejada:");
    scanf(" %d", &opcao1);
    
      
        switch(opcao1){
            case 1:
            printf("\n\n Escolha o atributo para comparação:");
            printf("\n\n 2 - Area");
            printf("\n\n 3 - Pontos Turísticos");
            printf("\n\n 4 - PIB");
            printf("\n\n 5 - Densidade Populacional");
            printf("\n\n 6 - Renda per Capita");
            printf("\n\n 7 - SuperPoder");

            printf("\n\n Entre com a opção 2 desejada:");
            
            scanf(" %d", &opcao2);
                
                if (opcao2 < 2 || opcao2 > 7){
                    
                    printf ("Opção Inválida!");
                    invalido = true;
                }
                
            break;

            case 2:
            printf("\n\n Escolha o atributo para comparação:");
            printf("\n\n 1 - População");
            printf("\n\n 3 - Pontos Turísticos");
            printf("\n\n 4 - PIB");
            printf("\n\n 5 - Densidade Populacional");
            printf("\n\n 6 - Renda per Capita");
            printf("\n\n 7 - SuperPoder");

            printf("\n\n Entre com a opção 2 desejada:");

            scanf(" %d", &opcao2);
                
                if (opcao2 < 1 || opcao2 > 7 || opcao2 == 2){
                    
                    printf ("Opção Inválida!");
                    invalido = true;
                }
                

            break;
            
            case 3:
            printf("\n\n Escolha o atributo para comparação:");
            printf("\n\n 1 - População");
            printf("\n\n 2 - Area");
            printf("\n\n 4 - PIB");
            printf("\n\n 5 - Densidade Populacional");
            printf("\n\n 6 - Renda per Capita");
            printf("\n\n 7 - SuperPoder");

            printf("\n\n Entre com a opção 2 desejada:");
            
            scanf(" %d", &opcao2);
                
            if (opcao2 < 1 || opcao2 > 7 || opcao2 == 3){
                    
                printf ("Opção Inválida!");
                invalido = true;
            }
            
            
            break;

            case 4:
            printf("\n\n Escolha o atributo para comparação:");
            printf("\n\n 1 - População");
            printf("\n\n 2 - Area");
            printf("\n\n 3 - Pontos Turísticos");
            printf("\n\n 5 - Densidade Populacional");
            printf("\n\n 6 - Renda per Capita");
            printf("\n\n 7 - SuperPoder");

            printf("\n\n Entre com a opção 2 desejada:");

            scanf(" %d", &opcao2);
                
            if (opcao2 < 1 || opcao2 > 7 || opcao2 == 4){
                    
                printf ("Opção Inválida!");
                invalido = true;
            }
            
            break;
            case 5:
            printf("\n\n Escolha o atributo para comparação:");
            printf("\n\n 1 - População");
            printf("\n\n 2 - Area");
            printf("\n\n 3 - Pontos Turísticos");
            printf("\n\n 4 - PIB");
            printf("\n\n 6 - Renda per Capita");
            printf("\n\n 7 - SuperPoder");

            printf("\n\n Entre com a opção 2 desejada:");

            scanf(" %d", &opcao2);
                
            if (opcao2 < 1 || opcao2 > 7 || opcao2 == 5){
                    
                printf ("Opção Inválida!");
                invalido = true;
            }
            break;

            case 6:
            printf("\n\n Escolha o atributo para comparação:");
            printf("\n\n 1 - População");
            printf("\n\n 2 - Area");
            printf("\n\n 3 - Pontos Turísticos");
            printf("\n\n 4 - PIB");
            printf("\n\n 5 - Densidade Populacional");
            printf("\n\n 7 - SuperPoder");

            printf("\n\n Entre com a opção 2 desejada:");
            
            scanf(" %d", &opcao2);
                
            if (opcao2 < 1 || opcao2 > 7 || opcao2 == 6){
                    
                printf ("Opção Inválida!");
                invalido = true;
            }
            break;

            case 7:
            printf("\n\n Escolha o atributo para comparação:");
            printf("\n\n 1 - População");
            printf("\n\n 2 - Area");
            printf("\n\n 3 - Pontos Turísticos");
            printf("\n\n 4 - PIB");
            printf("\n\n 5 - Densidade Populacional");
            printf("\n\n 6 - Renda per Capita");

            printf("\n\n Entre com a opção 2 desejada:");

            if (opcao2 < 1 || opcao2 > 6){
                    
            printf ("Opção Inválida!");
            invalido = true;            
            }

            break;

            default: 

                printf("\n\n Opção Inválida");
                invalido = false;

        }
    
 
if (invalido == false){


    // Mostra o nome das cartas em disputa:

        printf("\nNome da Cidade 1 %s",nome_cidade1);
        printf("\nNome da Cidade 2 %s",nome_cidade2);

    // De acordo com o menu selecionado será impresso o atributo das duas cartas
    // O primeiro case faz a seleção do primeiro atributo selecionado
    // Dentro do case aninhado é feita a comparação dos dois atributos por meio do operador ternário, em seguida


        switch(opcao1){

            case 1:
                
                printf("\nAtributo de Comparação: População");
                printf("\nPopulação1: %d ",populacao1);
                printf("\nPopulação2: %d ",populacao2);

                atributo1_1 = populacao1;
                atributo2_1 = populacao2; 


                switch (opcao2){

                    case 1:

                        printf("\nAtributo de Comparação: População");
                        printf("\nPopulação1: %d ",populacao1);
                        printf("\nPopulação2: %d ",populacao2);

                        soma_atrib1 = atributo1_1 + populacao1;
                        soma_atrib2 = atributo2_1 + populacao2;

                        printf("\n\nSoma dos atributos da carta 1 %f", soma_atrib1);
                        printf("\n\nSoma dos atributos da carta 2 %f", soma_atrib2);

                        (soma_atrib1 == soma_atrib2) ? printf("\n\nEmpate"):(soma_atrib1 > soma_atrib2) ? printf("\n\nCarta 1 Venceu!") : printf("\n\nCarta 2 Venceu!");
                        
                    break;

                    case 2:

                        printf("\nAtributo de Comparação: Area");
                        printf("\nArea1: %f ",area1);
                        printf("\nArea2: %f ",area2);

                        soma_atrib1 = atributo1_1 + area1;
                        soma_atrib2 = atributo2_1 + area2;

                        printf("\n\nSoma dos atributos da carta 1 %f", soma_atrib1);
                        printf("\n\nSoma dos atributos da carta 2 %f", soma_atrib2);

                    (soma_atrib1 == soma_atrib2) ? printf("\n\nEmpate"):(soma_atrib1 > soma_atrib2) ? printf("\n\nCarta 1 Venceu!") : printf("\n\nCarta 2 Venceu!");

                    break;

                    case 3:

                        printf("\nAtributo de Comparação: Pontos Turísticos");
                        printf("\nNúmero de Pontos Turísticos 1: %d ",n_pontos_turisticos1);
                        printf("\nNúmero de Pontos Turísticos 2: %d ",n_pontos_turisticos2);

                        soma_atrib1 = atributo1_1 + n_pontos_turisticos1;
                        soma_atrib2 = atributo2_1 + n_pontos_turisticos2;

                        printf("\n\nSoma dos atributos da carta 1 %f", soma_atrib1);
                        printf("\n\nSoma dos atributos da carta 2 %f", soma_atrib2);

                        (soma_atrib1 == soma_atrib2) ? printf("\n\nEmpate"):(soma_atrib1 > soma_atrib2) ? printf("\n\nCarta 1 Venceu!") : printf("\n\nCarta 2 Venceu!");


                    break;

                    case 4:
                        printf("\nAtributo de Comparação: PIB");
                        printf("\nPIB1: %f ",PIB1);
                        printf("\nPIB2: %f ",PIB2);

                        soma_atrib1 = atributo1_1 + PIB1;
                        soma_atrib2 = atributo2_1 + PIB2;

                        printf("\n\nSoma dos atributos da carta 1 %f", soma_atrib1);
                        printf("\n\nSoma dos atributos da carta 2 %f", soma_atrib2);

                        (soma_atrib1 == soma_atrib2) ? printf("\n\nEmpate"):(soma_atrib1 > soma_atrib2) ? printf("\n\nCarta 1 Venceu!") : printf("\n\nCarta 2 Venceu!");

                    break;

                    case 5:
                        printf("\nAtributo de Comparação: DENSIDADE POPULACIONAL");
                        printf("\nDensidade Populacional: %f ",densidade_populacional1);
                        printf("\nDensidade Populacional: %f ",densidade_populacional2);

                        soma_atrib1 = atributo1_1 + densidade_populacional1;
                        soma_atrib2 = atributo2_1 + densidade_populacional2;

                        printf("\n\nSoma dos atributos da carta 1 %f", soma_atrib1);
                        printf("\n\nSoma dos atributos da carta 2 %f", soma_atrib2);

                        (soma_atrib1 == soma_atrib2) ? printf("\n\nEmpate"):(soma_atrib1 > soma_atrib2) ? printf("\n\nCarta 1 Venceu!") : printf("\n\nCarta 2 Venceu!");

                    break;

                    case 6:
                        printf("\nAtributo de Comparação: RENDA PER CAPITA");
                        printf("\nRenda Per Capita 1: %f ",renda_pcapita1);
                        printf("\nRenda Per Capita 2: %f ",renda_pcapita2);
                        
                        soma_atrib1 = atributo1_1 + renda_pcapita1;
                        soma_atrib2 = atributo2_1 + renda_pcapita2;

                        printf("\n\nSoma dos atributos da carta 1 %f", soma_atrib1);
                        printf("\n\nSoma dos atributos da carta 2 %f", soma_atrib2);

                        (soma_atrib1 == soma_atrib2) ? printf("\n\nEmpate"):(soma_atrib1 > soma_atrib2) ? printf("\n\nCarta 1 Venceu!") : printf("\n\nCarta 2 Venceu!");

                    break;

                    case 7:
                        printf("\nAtributo de Comparação: SUPERPODER");
                        printf("\nSuperPoder 1: %f ",superpoder1);
                        printf("\nSuperPoder 2: %f ",superpoder2);

                        soma_atrib1 = atributo1_1 + superpoder1;
                        soma_atrib2 = atributo2_1 + superpoder2;

                        printf("\n\nSoma dos atributos da carta 1 %f", soma_atrib1);
                        printf("\n\nSoma dos atributos da carta 2 %f", soma_atrib2);

                        (soma_atrib1 == soma_atrib2) ? printf("\n\nEmpate"):(soma_atrib1 > soma_atrib2) ? printf("\n\nCarta 1 Venceu!") : printf("\n\nCarta 2 Venceu!");

                    break;
                }
            break;

            case 2:

                printf("\nAtributo de Comparação: Area");
                printf("\nArea1: %f ",area1);
                printf("\nArea2: %f ",area2);

                atributo1_1 = area1;
                atributo2_1 = area2;
                
                switch (opcao2){

                    case 1:

                        printf("\nAtributo de Comparação: População");
                        printf("\nPopulação1: %d ",populacao1);
                        printf("\nPopulação2: %d ",populacao2);

                        soma_atrib1 = atributo1_1 + populacao1;
                        soma_atrib2 = atributo2_1 + populacao2;

                        printf("\n\nSoma dos atributos da carta 1 %f", soma_atrib1);
                        printf("\n\nSoma dos atributos da carta 2 %f", soma_atrib2);

                        (soma_atrib1 == soma_atrib2) ? printf("\n\nEmpate"):(soma_atrib1 > soma_atrib2) ? printf("\n\nCarta 1 Venceu!") : printf("\n\nCarta 2 Venceu!");
                        
                    break;

                    case 2:

                        printf("\nAtributo de Comparação: Area");
                        printf("\nArea1: %f ",area1);
                        printf("\nArea2: %f ",area2);

                        soma_atrib1 = atributo1_1 + area1;
                        soma_atrib2 = atributo2_1 + area2;

                        printf("\n\nSoma dos atributos da carta 1 %f", soma_atrib1);
                        printf("\n\nSoma dos atributos da carta 2 %f", soma_atrib2);

                    (soma_atrib1 == soma_atrib2) ? printf("\n\nEmpate"):(soma_atrib1 > soma_atrib2) ? printf("\n\nCarta 1 Venceu!") : printf("\n\nCarta 2 Venceu!");

                    break;

                    case 3:

                        printf("\nAtributo de Comparação: Pontos Turísticos");
                        printf("\nNúmero de Pontos Turísticos 1: %d ",n_pontos_turisticos1);
                        printf("\nNúmero de Pontos Turísticos 2: %d ",n_pontos_turisticos2);

                        soma_atrib1 = atributo1_1 + n_pontos_turisticos1;
                        soma_atrib2 = atributo2_1 + n_pontos_turisticos2;

                        printf("\n\nSoma dos atributos da carta 1 %f", soma_atrib1);
                        printf("\n\nSoma dos atributos da carta 2 %f", soma_atrib2);

                        (soma_atrib1 == soma_atrib2) ? printf("\n\nEmpate"):(soma_atrib1 > soma_atrib2) ? printf("\n\nCarta 1 Venceu!") : printf("\n\nCarta 2 Venceu!");


                    break;

                    case 4:
                        printf("\nAtributo de Comparação: PIB");
                        printf("\nPIB1: %f ",PIB1);
                        printf("\nPIB2: %f ",PIB2);

                        soma_atrib1 = atributo1_1 + PIB1;
                        soma_atrib2 = atributo2_1 + PIB2;

                        printf("\n\nSoma dos atributos da carta 1 %f", soma_atrib1);
                        printf("\n\nSoma dos atributos da carta 2 %f", soma_atrib2);

                        (soma_atrib1 == soma_atrib2) ? printf("\n\nEmpate"):(soma_atrib1 > soma_atrib2) ? printf("\n\nCarta 1 Venceu!") : printf("\n\nCarta 2 Venceu!");

                    break;

                    case 5:
                        printf("\nAtributo de Comparação: DENSIDADE POPULACIONAL");
                        printf("\nDensidade Populacional: %f ",densidade_populacional1);
                        printf("\nDensidade Populacional: %f ",densidade_populacional2);

                        soma_atrib1 = atributo1_1 + densidade_populacional1;
                        soma_atrib2 = atributo2_1 + densidade_populacional2;

                        printf("\n\nSoma dos atributos da carta 1 %f", soma_atrib1);
                        printf("\n\nSoma dos atributos da carta 2 %f", soma_atrib2);

                        (soma_atrib1 == soma_atrib2) ? printf("\n\nEmpate"):(soma_atrib1 > soma_atrib2) ? printf("\n\nCarta 1 Venceu!") : printf("\n\nCarta 2 Venceu!");

                    break;

                    case 6:
                        printf("\nAtributo de Comparação: RENDA PER CAPITA");
                        printf("\nRenda Per Capita 1: %f ",renda_pcapita1);
                        printf("\nRenda Per Capita 2: %f ",renda_pcapita2);
                        
                        soma_atrib1 = atributo1_1 + renda_pcapita1;
                        soma_atrib2 = atributo2_1 + renda_pcapita2;

                        printf("\n\nSoma dos atributos da carta 1 %f", soma_atrib1);
                        printf("\n\nSoma dos atributos da carta 2 %f", soma_atrib2);

                        (soma_atrib1 == soma_atrib2) ? printf("\n\nEmpate"):(soma_atrib1 > soma_atrib2) ? printf("\n\nCarta 1 Venceu!") : printf("\n\nCarta 2 Venceu!");

                    break;

                    case 7:
                        printf("\nAtributo de Comparação: SUPERPODER");
                        printf("\nSuperPoder 1: %f ",superpoder1);
                        printf("\nSuperPoder 2: %f ",superpoder2);

                        soma_atrib1 = atributo1_1 + superpoder1;
                        soma_atrib2 = atributo2_1 + superpoder2;

                        printf("\n\nSoma dos atributos da carta 1 %f", soma_atrib1);
                        printf("\n\nSoma dos atributos da carta 2 %f", soma_atrib2);

                        (soma_atrib1 == soma_atrib2) ? printf("\n\nEmpate"):(soma_atrib1 > soma_atrib2) ? printf("\n\nCarta 1 Venceu!") : printf("\n\nCarta 2 Venceu!");

                    break;
                }
            break;
            
            case 3:

                printf("\nAtributo de Comparação: Pontos Turísticos");
                printf("\nNúmero de Pontos Turísticos 1: %d ",n_pontos_turisticos1);
                printf("\nNúmero de Pontos Turísticos 2: %d ",n_pontos_turisticos2);

                atributo1_1 = n_pontos_turisticos1;
                atributo2_1 = n_pontos_turisticos2;
            
                switch (opcao2){

                    case 1:

                        printf("\nAtributo de Comparação: População");
                        printf("\nPopulação1: %d ",populacao1);
                        printf("\nPopulação2: %d ",populacao2);

                        soma_atrib1 = atributo1_1 + populacao1;
                        soma_atrib2 = atributo2_1 + populacao2;

                        printf("\n\nSoma dos atributos da carta 1 %f", soma_atrib1);
                        printf("\n\nSoma dos atributos da carta 2 %f", soma_atrib2);

                        (soma_atrib1 == soma_atrib2) ? printf("\n\nEmpate"):(soma_atrib1 > soma_atrib2) ? printf("\n\nCarta 1 Venceu!") : printf("\n\nCarta 2 Venceu!");
                        
                    break;

                    case 2:

                        printf("\nAtributo de Comparação: Area");
                        printf("\nArea1: %f ",area1);
                        printf("\nArea2: %f ",area2);

                        soma_atrib1 = atributo1_1 + area1;
                        soma_atrib2 = atributo2_1 + area2;

                        printf("\n\nSoma dos atributos da carta 1 %f", soma_atrib1);
                        printf("\n\nSoma dos atributos da carta 2 %f", soma_atrib2);

                    (soma_atrib1 == soma_atrib2) ? printf("\n\nEmpate"):(soma_atrib1 > soma_atrib2) ? printf("\n\nCarta 1 Venceu!") : printf("\n\nCarta 2 Venceu!");

                    break;

                    case 3:

                        printf("\nAtributo de Comparação: Pontos Turísticos");
                        printf("\nNúmero de Pontos Turísticos 1: %d ",n_pontos_turisticos1);
                        printf("\nNúmero de Pontos Turísticos 2: %d ",n_pontos_turisticos2);

                        soma_atrib1 = atributo1_1 + n_pontos_turisticos1;
                        soma_atrib2 = atributo2_1 + n_pontos_turisticos2;

                        printf("\n\nSoma dos atributos da carta 1 %f", soma_atrib1);
                        printf("\n\nSoma dos atributos da carta 2 %f", soma_atrib2);

                        (soma_atrib1 == soma_atrib2) ? printf("\n\nEmpate"):(soma_atrib1 > soma_atrib2) ? printf("\n\nCarta 1 Venceu!") : printf("\n\nCarta 2 Venceu!");


                    break;

                    case 4:
                        printf("\nAtributo de Comparação: PIB");
                        printf("\nPIB1: %f ",PIB1);
                        printf("\nPIB2: %f ",PIB2);

                        soma_atrib1 = atributo1_1 + PIB1;
                        soma_atrib2 = atributo2_1 + PIB2;

                        printf("\n\nSoma dos atributos da carta 1 %f", soma_atrib1);
                        printf("\n\nSoma dos atributos da carta 2 %f", soma_atrib2);

                        (soma_atrib1 == soma_atrib2) ? printf("\n\nEmpate"):(soma_atrib1 > soma_atrib2) ? printf("\n\nCarta 1 Venceu!") : printf("\n\nCarta 2 Venceu!");

                    break;

                    case 5:
                        printf("\nAtributo de Comparação: DENSIDADE POPULACIONAL");
                        printf("\nDensidade Populacional: %f ",densidade_populacional1);
                        printf("\nDensidade Populacional: %f ",densidade_populacional2);

                        soma_atrib1 = atributo1_1 + densidade_populacional1;
                        soma_atrib2 = atributo2_1 + densidade_populacional2;

                        printf("\n\nSoma dos atributos da carta 1 %f", soma_atrib1);
                        printf("\n\nSoma dos atributos da carta 2 %f", soma_atrib2);

                        (soma_atrib1 == soma_atrib2) ? printf("\n\nEmpate"):(soma_atrib1 > soma_atrib2) ? printf("\n\nCarta 1 Venceu!") : printf("\n\nCarta 2 Venceu!");

                    break;

                    case 6:
                        printf("\nAtributo de Comparação: RENDA PER CAPITA");
                        printf("\nRenda Per Capita 1: %f ",renda_pcapita1);
                        printf("\nRenda Per Capita 2: %f ",renda_pcapita2);
                        
                        soma_atrib1 = atributo1_1 + renda_pcapita1;
                        soma_atrib2 = atributo2_1 + renda_pcapita2;

                        printf("\n\nSoma dos atributos da carta 1 %f", soma_atrib1);
                        printf("\n\nSoma dos atributos da carta 2 %f", soma_atrib2);

                        (soma_atrib1 == soma_atrib2) ? printf("\n\nEmpate"):(soma_atrib1 > soma_atrib2) ? printf("\n\nCarta 1 Venceu!") : printf("\n\nCarta 2 Venceu!");

                    break;

                    case 7:
                        printf("\nAtributo de Comparação: SUPERPODER");
                        printf("\nSuperPoder 1: %f ",superpoder1);
                        printf("\nSuperPoder 2: %f ",superpoder2);

                        soma_atrib1 = atributo1_1 + superpoder1;
                        soma_atrib2 = atributo2_1 + superpoder2;

                        printf("\n\nSoma dos atributos da carta 1 %f", soma_atrib1);
                        printf("\n\nSoma dos atributos da carta 2 %f", soma_atrib2);

                        (soma_atrib1 == soma_atrib2) ? printf("\n\nEmpate"):(soma_atrib1 > soma_atrib2) ? printf("\n\nCarta 1 Venceu!") : printf("\n\nCarta 2 Venceu!");

                    break;
                
                }
            
            break;
                
            case 4:

                printf("\nAtributo de Comparação: PIB");
                printf("\nPIB1: %f ",PIB1);
                printf("\nPIB2: %f ",PIB2);
                atributo1_1 = PIB1;
                atributo2_1 = PIB2;
    
            switch (opcao2){

                    case 1:

                        printf("\nAtributo de Comparação: População");
                        printf("\nPopulação1: %d ",populacao1);
                        printf("\nPopulação2: %d ",populacao2);

                        soma_atrib1 = atributo1_1 + populacao1;
                        soma_atrib2 = atributo2_1 + populacao2;

                        printf("\n\nSoma dos atributos da carta 1 %f", soma_atrib1);
                        printf("\n\nSoma dos atributos da carta 2 %f", soma_atrib2);

                        (soma_atrib1 == soma_atrib2) ? printf("\n\nEmpate"):(soma_atrib1 > soma_atrib2) ? printf("\n\nCarta 1 Venceu!") : printf("\n\nCarta 2 Venceu!");
                        
                    break;

                    case 2:

                        printf("\nAtributo de Comparação: Area");
                        printf("\nArea1: %f ",area1);
                        printf("\nArea2: %f ",area2);

                        soma_atrib1 = atributo1_1 + area1;
                        soma_atrib2 = atributo2_1 + area2;

                        printf("\n\nSoma dos atributos da carta 1 %f", soma_atrib1);
                        printf("\n\nSoma dos atributos da carta 2 %f", soma_atrib2);

                    (soma_atrib1 == soma_atrib2) ? printf("\n\nEmpate"):(soma_atrib1 > soma_atrib2) ? printf("\n\nCarta 1 Venceu!") : printf("\n\nCarta 2 Venceu!");

                    break;

                    case 3:

                        printf("\nAtributo de Comparação: Pontos Turísticos");
                        printf("\nNúmero de Pontos Turísticos 1: %d ",n_pontos_turisticos1);
                        printf("\nNúmero de Pontos Turísticos 2: %d ",n_pontos_turisticos2);

                        soma_atrib1 = atributo1_1 + n_pontos_turisticos1;
                        soma_atrib2 = atributo2_1 + n_pontos_turisticos2;

                        printf("\n\nSoma dos atributos da carta 1 %f", soma_atrib1);
                        printf("\n\nSoma dos atributos da carta 2 %f", soma_atrib2);

                        (soma_atrib1 == soma_atrib2) ? printf("\n\nEmpate"):(soma_atrib1 > soma_atrib2) ? printf("\n\nCarta 1 Venceu!") : printf("\n\nCarta 2 Venceu!");


                    break;

                    case 4:
                        printf("\nAtributo de Comparação: PIB");
                        printf("\nPIB1: %f ",PIB1);
                        printf("\nPIB2: %f ",PIB2);

                        soma_atrib1 = atributo1_1 + PIB1;
                        soma_atrib2 = atributo2_1 + PIB2;

                        printf("\n\nSoma dos atributos da carta 1 %f", soma_atrib1);
                        printf("\n\nSoma dos atributos da carta 2 %f", soma_atrib2);

                        (soma_atrib1 == soma_atrib2) ? printf("\n\nEmpate"):(soma_atrib1 > soma_atrib2) ? printf("\n\nCarta 1 Venceu!") : printf("\n\nCarta 2 Venceu!");

                    break;

                    case 5:
                        printf("\nAtributo de Comparação: DENSIDADE POPULACIONAL");
                        printf("\nDensidade Populacional: %f ",densidade_populacional1);
                        printf("\nDensidade Populacional: %f ",densidade_populacional2);

                        soma_atrib1 = atributo1_1 + densidade_populacional1;
                        soma_atrib2 = atributo2_1 + densidade_populacional2;

                        printf("\n\nSoma dos atributos da carta 1 %f", soma_atrib1);
                        printf("\n\nSoma dos atributos da carta 2 %f", soma_atrib2);

                        (soma_atrib1 == soma_atrib2) ? printf("\n\nEmpate"):(soma_atrib1 > soma_atrib2) ? printf("\n\nCarta 1 Venceu!") : printf("\n\nCarta 2 Venceu!");

                    break;

                    case 6:
                        printf("\nAtributo de Comparação: RENDA PER CAPITA");
                        printf("\nRenda Per Capita 1: %f ",renda_pcapita1);
                        printf("\nRenda Per Capita 2: %f ",renda_pcapita2);
                        
                        soma_atrib1 = atributo1_1 + renda_pcapita1;
                        soma_atrib2 = atributo2_1 + renda_pcapita2;

                        printf("\n\nSoma dos atributos da carta 1 %f", soma_atrib1);
                        printf("\n\nSoma dos atributos da carta 2 %f", soma_atrib2);

                        (soma_atrib1 == soma_atrib2) ? printf("\n\nEmpate"):(soma_atrib1 > soma_atrib2) ? printf("\n\nCarta 1 Venceu!") : printf("\n\nCarta 2 Venceu!");

                    break;

                    case 7:
                        printf("\nAtributo de Comparação: SUPERPODER");
                        printf("\nSuperPoder 1: %f ",superpoder1);
                        printf("\nSuperPoder 2: %f ",superpoder2);

                        soma_atrib1 = atributo1_1 + superpoder1;
                        soma_atrib2 = atributo2_1 + superpoder2;

                        printf("\n\nSoma dos atributos da carta 1 %f", soma_atrib1);
                        printf("\n\nSoma dos atributos da carta 2 %f", soma_atrib2);

                        (soma_atrib1 == soma_atrib2) ? printf("\n\nEmpate"):(soma_atrib1 > soma_atrib2) ? printf("\n\nCarta 1 Venceu!") : printf("\n\nCarta 2 Venceu!");

                    break;
                }

            break;

            case 5:

                printf("\nAtributo de Comparação: DENSIDADE POPULACIONAL");
                printf("\nDensidade Populacional 1: %f ",densidade_populacional1);
                printf("\nDensidade Populacional 2: %f ",densidade_populacional2);
                
                atributo1_1 = densidade_populacional1;
                atributo2_1 = densidade_populacional2;
    
               switch (opcao2){

                    case 1:

                        printf("\nAtributo de Comparação: População");
                        printf("\nPopulação1: %d ",populacao1);
                        printf("\nPopulação2: %d ",populacao2);

                        soma_atrib1 = atributo1_1 + populacao1;
                        soma_atrib2 = atributo2_1 + populacao2;

                        printf("\n\nSoma dos atributos da carta 1 %f", soma_atrib1);
                        printf("\n\nSoma dos atributos da carta 2 %f", soma_atrib2);

                        (soma_atrib1 == soma_atrib2) ? printf("\n\nEmpate"):(soma_atrib1 > soma_atrib2) ? printf("\n\nCarta 1 Venceu!") : printf("\n\nCarta 2 Venceu!");
                        
                    break;

                    case 2:

                        printf("\nAtributo de Comparação: Area");
                        printf("\nArea1: %f ",area1);
                        printf("\nArea2: %f ",area2);

                        soma_atrib1 = atributo1_1 + area1;
                        soma_atrib2 = atributo2_1 + area2;

                        printf("\n\nSoma dos atributos da carta 1 %f", soma_atrib1);
                        printf("\n\nSoma dos atributos da carta 2 %f", soma_atrib2);

                    (soma_atrib1 == soma_atrib2) ? printf("\n\nEmpate"):(soma_atrib1 > soma_atrib2) ? printf("\n\nCarta 1 Venceu!") : printf("\n\nCarta 2 Venceu!");

                    break;

                    case 3:

                        printf("\nAtributo de Comparação: Pontos Turísticos");
                        printf("\nNúmero de Pontos Turísticos 1: %d ",n_pontos_turisticos1);
                        printf("\nNúmero de Pontos Turísticos 2: %d ",n_pontos_turisticos2);

                        soma_atrib1 = atributo1_1 + n_pontos_turisticos1;
                        soma_atrib2 = atributo2_1 + n_pontos_turisticos2;

                        printf("\n\nSoma dos atributos da carta 1 %f", soma_atrib1);
                        printf("\n\nSoma dos atributos da carta 2 %f", soma_atrib2);

                        (soma_atrib1 == soma_atrib2) ? printf("\n\nEmpate"):(soma_atrib1 > soma_atrib2) ? printf("\n\nCarta 1 Venceu!") : printf("\n\nCarta 2 Venceu!");


                    break;

                    case 4:
                        printf("\nAtributo de Comparação: PIB");
                        printf("\nPIB1: %f ",PIB1);
                        printf("\nPIB2: %f ",PIB2);

                        soma_atrib1 = atributo1_1 + PIB1;
                        soma_atrib2 = atributo2_1 + PIB2;

                        printf("\n\nSoma dos atributos da carta 1 %f", soma_atrib1);
                        printf("\n\nSoma dos atributos da carta 2 %f", soma_atrib2);

                        (soma_atrib1 == soma_atrib2) ? printf("\n\nEmpate"):(soma_atrib1 > soma_atrib2) ? printf("\n\nCarta 1 Venceu!") : printf("\n\nCarta 2 Venceu!");

                    break;

                    case 5:
                        printf("\nAtributo de Comparação: DENSIDADE POPULACIONAL");
                        printf("\nDensidade Populacional: %f ",densidade_populacional1);
                        printf("\nDensidade Populacional: %f ",densidade_populacional2);

                        soma_atrib1 = atributo1_1 + densidade_populacional1;
                        soma_atrib2 = atributo2_1 + densidade_populacional2;

                        printf("\n\nSoma dos atributos da carta 1 %f", soma_atrib1);
                        printf("\n\nSoma dos atributos da carta 2 %f", soma_atrib2);

                        (soma_atrib1 == soma_atrib2) ? printf("\n\nEmpate"):(soma_atrib1 > soma_atrib2) ? printf("\n\nCarta 1 Venceu!") : printf("\n\nCarta 2 Venceu!");

                    break;

                    case 6:
                        printf("\nAtributo de Comparação: RENDA PER CAPITA");
                        printf("\nRenda Per Capita 1: %f ",renda_pcapita1);
                        printf("\nRenda Per Capita 2: %f ",renda_pcapita2);
                        
                        soma_atrib1 = atributo1_1 + renda_pcapita1;
                        soma_atrib2 = atributo2_1 + renda_pcapita2;

                        printf("\n\nSoma dos atributos da carta 1 %f", soma_atrib1);
                        printf("\n\nSoma dos atributos da carta 2 %f", soma_atrib2);

                        (soma_atrib1 == soma_atrib2) ? printf("\n\nEmpate"):(soma_atrib1 > soma_atrib2) ? printf("\n\nCarta 1 Venceu!") : printf("\n\nCarta 2 Venceu!");

                    break;

                    case 7:
                        printf("\nAtributo de Comparação: SUPERPODER");
                        printf("\nSuperPoder 1: %f ",superpoder1);
                        printf("\nSuperPoder 2: %f ",superpoder2);

                        soma_atrib1 = atributo1_1 + superpoder1;
                        soma_atrib2 = atributo2_1 + superpoder2;

                        printf("\n\nSoma dos atributos da carta 1 %f", soma_atrib1);
                        printf("\n\nSoma dos atributos da carta 2 %f", soma_atrib2);

                        (soma_atrib1 == soma_atrib2) ? printf("\n\nEmpate"):(soma_atrib1 > soma_atrib2) ? printf("\n\nCarta 1 Venceu!") : printf("\n\nCarta 2 Venceu!");

                    break;
                }
            
            break;
            
            case 6:

                printf("\nAtributo de Comparação: RENDA PER CAPITA");
                printf("\nRenda Per Capita 1: %f ",renda_pcapita1);
                printf("\nRenda Per Capita 2: %f ",renda_pcapita2);

                soma_atrib1 = renda_pcapita1;
                soma_atrib2 = renda_pcapita2 ;

                switch (opcao2){

                    case 1:

                        printf("\nAtributo de Comparação: População");
                        printf("\nPopulação1: %d ",populacao1);
                        printf("\nPopulação2: %d ",populacao2);

                        soma_atrib1 = atributo1_1 + populacao1;
                        soma_atrib2 = atributo2_1 + populacao2;

                        printf("\n\nSoma dos atributos da carta 1 %f", soma_atrib1);
                        printf("\n\nSoma dos atributos da carta 2 %f", soma_atrib2);

                        (soma_atrib1 == soma_atrib2) ? printf("\n\nEmpate"):(soma_atrib1 > soma_atrib2) ? printf("\n\nCarta 1 Venceu!") : printf("\n\nCarta 2 Venceu!");
                        
                    break;

                    case 2:

                        printf("\nAtributo de Comparação: Area");
                        printf("\nArea1: %f ",area1);
                        printf("\nArea2: %f ",area2);

                        soma_atrib1 = atributo1_1 + area1;
                        soma_atrib2 = atributo2_1 + area2;

                        printf("\n\nSoma dos atributos da carta 1 %f", soma_atrib1);
                        printf("\n\nSoma dos atributos da carta 2 %f", soma_atrib2);

                    (soma_atrib1 == soma_atrib2) ? printf("\n\nEmpate"):(soma_atrib1 > soma_atrib2) ? printf("\n\nCarta 1 Venceu!") : printf("\n\nCarta 2 Venceu!");

                    break;

                    case 3:

                        printf("\nAtributo de Comparação: Pontos Turísticos");
                        printf("\nNúmero de Pontos Turísticos 1: %d ",n_pontos_turisticos1);
                        printf("\nNúmero de Pontos Turísticos 2: %d ",n_pontos_turisticos2);

                        soma_atrib1 = atributo1_1 + n_pontos_turisticos1;
                        soma_atrib2 = atributo2_1 + n_pontos_turisticos2;

                        printf("\n\nSoma dos atributos da carta 1 %f", soma_atrib1);
                        printf("\n\nSoma dos atributos da carta 2 %f", soma_atrib2);

                        (soma_atrib1 == soma_atrib2) ? printf("\n\nEmpate"):(soma_atrib1 > soma_atrib2) ? printf("\n\nCarta 1 Venceu!") : printf("\n\nCarta 2 Venceu!");


                    break;

                    case 4:
                        printf("\nAtributo de Comparação: PIB");
                        printf("\nPIB1: %f ",PIB1);
                        printf("\nPIB2: %f ",PIB2);

                        soma_atrib1 = atributo1_1 + PIB1;
                        soma_atrib2 = atributo2_1 + PIB2;

                        printf("\n\nSoma dos atributos da carta 1 %f", soma_atrib1);
                        printf("\n\nSoma dos atributos da carta 2 %f", soma_atrib2);

                        (soma_atrib1 == soma_atrib2) ? printf("\n\nEmpate"):(soma_atrib1 > soma_atrib2) ? printf("\n\nCarta 1 Venceu!") : printf("\n\nCarta 2 Venceu!");

                    break;

                    case 5:
                        printf("\nAtributo de Comparação: DENSIDADE POPULACIONAL");
                        printf("\nDensidade Populacional: %f ",densidade_populacional1);
                        printf("\nDensidade Populacional: %f ",densidade_populacional2);

                        soma_atrib1 = atributo1_1 + densidade_populacional1;
                        soma_atrib2 = atributo2_1 + densidade_populacional2;

                        printf("\n\nSoma dos atributos da carta 1 %f", soma_atrib1);
                        printf("\n\nSoma dos atributos da carta 2 %f", soma_atrib2);

                        (soma_atrib1 == soma_atrib2) ? printf("\n\nEmpate"):(soma_atrib1 > soma_atrib2) ? printf("\n\nCarta 1 Venceu!") : printf("\n\nCarta 2 Venceu!");

                    break;

                    case 6:
                        printf("\nAtributo de Comparação: RENDA PER CAPITA");
                        printf("\nRenda Per Capita 1: %f ",renda_pcapita1);
                        printf("\nRenda Per Capita 2: %f ",renda_pcapita2);
                        
                        soma_atrib1 = atributo1_1 + renda_pcapita1;
                        soma_atrib2 = atributo2_1 + renda_pcapita2;

                        printf("\n\nSoma dos atributos da carta 1 %f", soma_atrib1);
                        printf("\n\nSoma dos atributos da carta 2 %f", soma_atrib2);

                        (soma_atrib1 == soma_atrib2) ? printf("\n\nEmpate"):(soma_atrib1 > soma_atrib2) ? printf("\n\nCarta 1 Venceu!") : printf("\n\nCarta 2 Venceu!");

                    break;

                    case 7:
                        printf("\nAtributo de Comparação: SUPERPODER");
                        printf("\nSuperPoder 1: %f ",superpoder1);
                        printf("\nSuperPoder 2: %f ",superpoder2);

                        soma_atrib1 = atributo1_1 + superpoder1;
                        soma_atrib2 = atributo2_1 + superpoder2;

                        printf("\n\nSoma dos atributos da carta 1 %f", soma_atrib1);
                        printf("\n\nSoma dos atributos da carta 2 %f", soma_atrib2);

                        (soma_atrib1 == soma_atrib2) ? printf("\n\nEmpate"):(soma_atrib1 > soma_atrib2) ? printf("\n\nCarta 1 Venceu!") : printf("\n\nCarta 2 Venceu!");

                    break;
                }
                        
            
                break;

            case 7:

                printf("\nAtributo de Comparação: SUPERPODER");
                printf("\nSUPERPODER 1: %f ",superpoder1);
                printf("\nSUPERPODER 2: %f ",superpoder2);

                atributo1_1 = superpoder1;
                atributo2_1 = superpoder2; 
                

                switch (opcao2){

                    case 1:

                        printf("\nAtributo de Comparação: População");
                        printf("\nPopulação1: %d ",populacao1);
                        printf("\nPopulação2: %d ",populacao2);

                        soma_atrib1 = atributo1_1 + populacao1;
                        soma_atrib2 = atributo2_1 + populacao2;

                        printf("\n\nSoma dos atributos da carta 1 %f", soma_atrib1);
                        printf("\n\nSoma dos atributos da carta 2 %f", soma_atrib2);

                        (soma_atrib1 == soma_atrib2) ? printf("\n\nEmpate"):(soma_atrib1 > soma_atrib2) ? printf("\n\nCarta 1 Venceu!") : printf("\n\nCarta 2 Venceu!");
                        
                    break;

                    case 2:

                        printf("\nAtributo de Comparação: Area");
                        printf("\nArea1: %f ",area1);
                        printf("\nArea2: %f ",area2);

                        soma_atrib1 = atributo1_1 + area1;
                        soma_atrib2 = atributo2_1 + area2;

                        printf("\n\nSoma dos atributos da carta 1 %f", soma_atrib1);
                        printf("\n\nSoma dos atributos da carta 2 %f", soma_atrib2);

                    (soma_atrib1 == soma_atrib2) ? printf("\n\nEmpate"):(soma_atrib1 > soma_atrib2) ? printf("\n\nCarta 1 Venceu!") : printf("\n\nCarta 2 Venceu!");

                    break;

                    case 3:

                        printf("\nAtributo de Comparação: Pontos Turísticos");
                        printf("\nNúmero de Pontos Turísticos 1: %d ",n_pontos_turisticos1);
                        printf("\nNúmero de Pontos Turísticos 2: %d ",n_pontos_turisticos2);

                        soma_atrib1 = atributo1_1 + n_pontos_turisticos1;
                        soma_atrib2 = atributo2_1 + n_pontos_turisticos2;

                        printf("\n\nSoma dos atributos da carta 1 %f", soma_atrib1);
                        printf("\n\nSoma dos atributos da carta 2 %f", soma_atrib2);

                        (soma_atrib1 == soma_atrib2) ? printf("\n\nEmpate"):(soma_atrib1 > soma_atrib2) ? printf("\n\nCarta 1 Venceu!") : printf("\n\nCarta 2 Venceu!");


                    break;

                    case 4:
                        printf("\nAtributo de Comparação: PIB");
                        printf("\nPIB1: %f ",PIB1);
                        printf("\nPIB2: %f ",PIB2);

                        soma_atrib1 = atributo1_1 + PIB1;
                        soma_atrib2 = atributo2_1 + PIB2;

                        printf("\n\nSoma dos atributos da carta 1 %f", soma_atrib1);
                        printf("\n\nSoma dos atributos da carta 2 %f", soma_atrib2);

                        (soma_atrib1 == soma_atrib2) ? printf("\n\nEmpate"):(soma_atrib1 > soma_atrib2) ? printf("\n\nCarta 1 Venceu!") : printf("\n\nCarta 2 Venceu!");

                    break;

                    case 5:
                        printf("\nAtributo de Comparação: DENSIDADE POPULACIONAL");
                        printf("\nDensidade Populacional: %f ",densidade_populacional1);
                        printf("\nDensidade Populacional: %f ",densidade_populacional2);

                        soma_atrib1 = atributo1_1 + densidade_populacional1;
                        soma_atrib2 = atributo2_1 + densidade_populacional2;

                        printf("\n\nSoma dos atributos da carta 1 %f", soma_atrib1);
                        printf("\n\nSoma dos atributos da carta 2 %f", soma_atrib2);

                        (soma_atrib1 == soma_atrib2) ? printf("\n\nEmpate"):(soma_atrib1 > soma_atrib2) ? printf("\n\nCarta 1 Venceu!") : printf("\n\nCarta 2 Venceu!");

                    break;

                    case 6:
                        printf("\nAtributo de Comparação: RENDA PER CAPITA");
                        printf("\nRenda Per Capita 1: %f ",renda_pcapita1);
                        printf("\nRenda Per Capita 2: %f ",renda_pcapita2);
                        
                        soma_atrib1 = atributo1_1 + renda_pcapita1;
                        soma_atrib2 = atributo2_1 + renda_pcapita2;

                        printf("\n\nSoma dos atributos da carta 1 %f", soma_atrib1);
                        printf("\n\nSoma dos atributos da carta 2 %f", soma_atrib2);

                        (soma_atrib1 == soma_atrib2) ? printf("\n\nEmpate"):(soma_atrib1 > soma_atrib2) ? printf("\n\nCarta 1 Venceu!") : printf("\n\nCarta 2 Venceu!");

                    break;

                    case 7:
                        printf("\nAtributo de Comparação: SUPERPODER");
                        printf("\nSuperPoder 1: %f ",superpoder1);
                        printf("\nSuperPoder 2: %f ",superpoder2);

                        soma_atrib1 = atributo1_1 + superpoder1;
                        soma_atrib2 = atributo2_1 + superpoder2;

                        printf("\n\nSoma dos atributos da carta 1 %f", soma_atrib1);
                        printf("\n\nSoma dos atributos da carta 2 %f", soma_atrib2);

                        (soma_atrib1 == soma_atrib2) ? printf("\n\nEmpate"):(soma_atrib1 > soma_atrib2) ? printf("\n\nCarta 1 Venceu!") : printf("\n\nCarta 2 Venceu!");

                    break;
                }

            break;

            
        }

    } else

{
    printf ("Erro no Jogo. Reinicie!");

}


    return 0;
}
