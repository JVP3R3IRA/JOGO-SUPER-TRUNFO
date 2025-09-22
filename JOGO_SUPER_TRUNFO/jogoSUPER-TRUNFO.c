#include <stdio.h>

int main()
{
    char letra, letra2; // VARIAVEL DA LETRA DA CARTA

    char cidade[50], cidade2[50], estado[50], estado2[50]; // VARIAVEL NOME CIDADE

    unsigned long int populacao, populacao2;

    int codigo, codigo2;

    int resultadoA, resultadoB, resultadoC, resultadoD, resultadoE, resultadoF, resultadoG;

    int turistico, turistico2;

    float poder, poder2;

    float pib, pib2, area, area2;

    float densidade, percapita, densidade2, percapita2;

    printf("Digite uma letra de A-H: ");
    scanf("%c", &letra);

    printf("Digite um número de 1-4: ");
    scanf("%d", &codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade);

    printf("Digite o estado da cidade: ");
    scanf("%s", &estado);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%lu", &populacao);

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

    printf("Digite o estado da cidade: ");
    scanf("%s", estado2);

    printf("Digite o número de habitantes da cidada: ");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade: ");
    scanf("%f", &area2);

    printf("Digite o Produto interno Bruto (PIB) da cidade: ");
    scanf("%f", &pib2);

    printf("Digite quantos pontos turisticos a cidade tem: ");
    scanf("%d", &turistico2);

    densidade = populacao / area;
    percapita = pib / populacao;

    densidade2 = populacao2 / area2;
    percapita2 = pib2 / populacao2;

    poder = (float)populacao + area + pib + (float)turistico;

    poder2 = (float)populacao2 + area2 + pib2 + (float)turistico2;

    resultadoA = populacao > populacao2;

    resultadoB = area > area2;

    resultadoC = pib > pib2;

    resultadoD = turistico > turistico2;

    resultadoE = densidade < densidade2;

    resultadoF = percapita > percapita2;

    resultadoG = poder > poder2;

    printf("VAMOS VER O RESULTADO DE CADA CARTA\n");

    printf("PRIMEIRA CARTA\n");

    printf("Estado: %c\n", letra);

    printf("Código: %c%02d\n", letra, codigo);

    printf("O nome da cidade é: %s\n", cidade);

    printf("O estado da cidade é: %s\n", estado);

    printf("A população e de: %lu km²\n", populacao);

    printf("A área: %.2f\n", area);

    printf("O Pib e: R$ %.2f Bilhoes de Reais\n", pib);

    printf("Numero de pontos turisticos: %d\n", turistico);

    printf("A densidade populacional é: %.2f\n", densidade);

    printf("O PIB per capita é: %.2f\n", percapita);

    printf("O Super poder da carta é: %.2f\n", poder);

    printf("SEGUNDA CARTA\n");

    printf("Estado: %c\n", letra2);

    printf("Código: %c%02d\n", letra2, codigo2);

    printf("O nome da cidade é: %s\n", cidade2);

    printf("O estado da cidade é: %s", estado2);

    printf("A população e de: %lu km²\n", populacao2);

    printf("A área: %.2f\n", area2);

    printf("O Pib e: R$ %.2f Bilhoes de Reais\n", pib2);

    printf("Numero de pontos turisticos: %d\n", turistico2);

    printf("A densidade populacional é: %.2f\n", densidade2);

    printf("O PIB per capita é: %.2f\n", percapita2);

    printf("O Super Poder da carta é: %.2f\n", poder2);

    printf("COMPARAÇÃO DAS DUAS CARTAS\n");

    printf("População: %d\n", resultadoA);
    
    printf("Àrea:  %d\n",  resultadoB);

    printf("Pib: %d\n", resultadoC);

    printf("Pontos Turisticos: %d\n", resultadoD);

    printf("Densidade populacional: %d\n", resultadoE);

    printf("Pib per Capita: %d\n", resultadoF);

    printf("Super Poder: %d\n", resultadoG);

        return 0;
        
}