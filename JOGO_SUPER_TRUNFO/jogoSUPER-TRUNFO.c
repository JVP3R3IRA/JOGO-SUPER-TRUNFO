#include <stdio.h>

int main()
{
    char letra, letra2; // VARIAVEL DA LETRA DA CARTA

    char cidade[50], cidade2[50]; // VARIAVEL NOME CIDADE
    
    int populacao,populacao2;
    
    int codigo,codigo2;

    int turistico, turistico2; 

    float area, area2;      

    float pib, pib2;

    float renda, percapita, renda2, percapita2;
    
    printf("Digite uma letra de A-H: ");
    scanf("%c", &letra);

    printf("Digite um número de 1-4: ");
    scanf("%d", &codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade: ");
    scanf("%f", &area);

    printf("Digite o Produto interno Bruto (PIB) da cidade: ");
    scanf("%f", &pib);

    printf("Digite quantos pontos turisticos a cidade tem: ");
    scanf("%d", &turistico);

    printf("VAMOS CADASTRAR A SEGUNDA CARTA\n");

    printf("Digite uma letra de A-H: ");
    scanf(" %c", &letra2);

    printf("Digite um número de 1-4: ");
    scanf("%d", &codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade2);

    printf("Digite o número de habitantes da cidada: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade: ");
    scanf("%f", &area2);

    printf("Digite o Produto interno Bruto (PIB) da cidade: ");
    scanf("%f", &pib2); 

    printf("Digite quantos pontos turisticos a cidade tem: ");
    scanf("%d", &turistico2);

    renda = populacao / area ;
    percapita = pib / populacao;


    printf("VAMOS VER O RESULTADO DE CADA CARTA\n");

    printf("PRIMEIRA CARTA\n");

    printf("Estado: %c\n", letra);

    printf("Código: %c%02d\n", letra, codigo);

    printf("O nome da cidade é: %s\n", cidade);

    printf("A população e de: %d km²\n", populacao);

    printf("A área: %f\n", area);

    printf("O Pib e: R$ %.2f Bilhoes de Reais\n", pib);

    printf("Numero de pontos turisticos: %d\n", turistico);

    printf("A densidade populacional e %.2f\n", renda);

    printf("O PIB per capita é: %.2f", percapita);

    printf("SEGUNDA CARTA\n");

    printf("Estado: %c\n", letra2);
    
    printf("Código: %c%02d\n", letra2, codigo2);

    printf("O nome da cidade é: %s\n", cidade2);

    printf("A população e de: %d km²\n", populacao2);

    printf("A área: %f\n", area2);

    printf("O Pib e: R$ %.2f Bilhoes de Reais\n", pib2);

    printf("Numero de pontos turisticos: %d\n", turistico2);

}