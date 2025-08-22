#include <stdio.h>

int main(){

//variáveis para cadastro das cartas_1

    char estado1;
    char codigo_carta1[4];
    char nome_cidade1[20];
    int populacao1;
    float area1; 
    float pib1;
    int pontos_turisticos1;

//variáveis para cadastro das cartas_2

    char estado2;
    char codigo_carta2[4];
    char nome_cidade2[20];
    int populacao2;
    float area2; 
    float pib2;
    int pontos_turisticos2;


//Cadastro da carta_1
    

    printf("Digite os dados da carta - 1 \n");

    printf("Estado (letra de A a H): \n");
    scanf("%s", &estado1);

    printf("Código da carta (ex: A01 ou B02): \n");
    scanf("%s", &codigo_carta1);

    printf("Nome da Cidade: \n");
    scanf("%s", &nome_cidade1);

    printf("População: \n");
    scanf("%d", &populacao1);

    printf("Quantidade de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos1);

    printf("Área (em km²): \n");
    scanf("%f", &area1);

    printf("PIB (em bilhões de Reais): \n");
    scanf("%f", &pib1);

//Retornar ao usuário o cadastro que ele fez da carta_1

    printf("Dados da Carta 1 \n");

    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo_carta1);
    printf("Cidade: %s \n", nome_cidade1);
    printf("População: %d \n", populacao1);
    printf("Pontos turísticos: %d \n", pontos_turisticos1);
    printf("Área em km²: %f \n", area1);
    printf("PIB: %f \n", pib1);


//Cadastro da carta_2
    

    printf("Digite os dados da carta - 2 \n");

    printf("Estado (letra de A a H): \n");
    scanf("%s", &estado2);

    printf("Código da carta (ex: A01 ou B02): \n");
    scanf("%s", &codigo_carta2);

    printf("Nome da Cidade: \n");
    scanf("%s", &nome_cidade2);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Quantidade de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos2);

    printf("Área (em km²): \n");
    scanf("%f", &area2);

    printf("PIB (em bilhões de Reais): \n");
    scanf("%f", &pib2);

//Retornar ao usuário o cadastro que ele fez da carta_2

    printf("Dados da Carta 2 \n");

    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo_carta2);
    printf("Cidade: %s \n", nome_cidade2);
    printf("População: %d \n", populacao2);
    printf("Pontos turísticos: %d \n", pontos_turisticos2);
    printf("Área em km²: %f \n", area2);
    printf("PIB: %f \n", pib2);


}