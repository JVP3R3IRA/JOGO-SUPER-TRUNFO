#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    // DECLARAÇÃO DE VARIAVEIS DAS CARTAS

    char letra, letra2; // LETRA IDENTIFICADORA DA CARTA

    char cidade[50], cidade2[50], estado[50], estado2[50]; // NOME E ESTADO DA CIDADE

    unsigned long int populacao, populacao2; // POPULAÇÃO DAS CIDADES

    int codigo, codigo2; // CÓDIGO IDENTIFICADOR DA CARTA

    int turistico, turistico2, opcao; // PONTOS TURISTICOS, E A LOGICA DE OPÇÕES DO JOGO

    float poder, poder2; // SUPER PODER DAS CARTAS

    float pib, pib2, area, area2; // PIB E ÁREA DAS CIDADES

    float densidade, percapita, densidade2, percapita2; // DENSIDADE E PIB PERCAPITA

    srand((unsigned)time(NULL));
    letra = 'A' + (rand() % 8);
    codigo = 1 + (rand() % 4);

    letra2 = 'A' + (rand() % 8);
    codigo2 = 1 + (rand() % 4);

    // ENTRADA DE DADOS DA PRIMEIRA CARTA
    printf("Codigo da carta gerado aleatoriamente: %c%02d\n", letra, codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade);

    printf("Digite o estado da cidade: ");
    scanf("%s", estado);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%lu", &populacao);

    printf("Digite a área da cidade: ");
    scanf("%f", &area);

    printf("Digite o Produto interno Bruto (PIB) da cidade: ");
    scanf("%f", &pib);

    printf("Digite quantos pontos turisticos a cidade tem: ");
    scanf("%d", &turistico);

    // ENTRADA DE DADOS DA SEGUNDA CARTA
    printf("VAMOS CADASTRAR A SEGUNDA CARTA\n");

    printf("Codigo da carta gerado aleatoriamente: %c%02d\n ", letra2, codigo2);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

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

    // CÁLCULO DOS ATRIBUTOS
    densidade = populacao / area;
    percapita = pib / populacao;

    densidade2 = populacao2 / area2;
    percapita2 = pib2 / populacao2;

    // CÁLCULO DOS SUPER PODER (SOMA SIMPLES DOS ATRIBUTOS)
    poder = (float)populacao + area + pib + (float)turistico;

    poder2 = (float)populacao2 + area2 + pib2 + (float)turistico2;

    // IMPRESSÃO DOS RESULTADOS DAS CARTAS
    printf("VAMOS VER O RESULTADO CADASTRADO DE CADA CARTA\n");

    // RESULTADO PRIMEIRA CARTA
    printf("\n--- PRIMEIRA CARTA ---\n");

    printf("Código: %c%02d\n", letra, codigo);

    printf("Estado: %c\n", letra);

    printf("O nome da cidade é: %s\n", cidade);

    printf("O estado da cidade é: %s\n", estado);

    printf("A população e de: %lu habitantes \n", populacao);

    printf("A área: %.2f km²\n", area);

    printf("O Pib e: R$ %.2f Bilhoes de Reais\n", pib);

    printf("Numero de pontos turisticos: %d\n", turistico);

    printf("A densidade populacional é: %.2f\n", densidade);

    printf("O PIB per capita é: %.2f\n", percapita);

    printf("O Super poder da carta é: %.2f\n", poder);

    // RESULTADO SEGUNDA CARTA
    printf("\n--- SEGUNDA CARTA  ---\n");

    printf("Código: %c%02d\n", letra2, codigo2);

    printf("Estado: %c\n", letra2);

    printf("O nome da cidade é: %s\n", cidade2);

    printf("O estado da cidade é: %s", estado2);

    printf("A população e de: %lu habitantes \n", populacao2);

    printf("A área: %.2f km²\n", area2);

    printf("O Pib e: R$ %.2f Bilhoes de Reais\n", pib2);

    printf("Numero de pontos turisticos: %d\n", turistico2);

    printf("A densidade populacional é: %.2f\n", densidade2);

    printf("O PIB per capita é: %.2f\n", percapita2);

    printf("O Super Poder da carta é: %.2f\n", poder2);

    printf("JÁ QUE TODAS AS INFORMAÇOES DAS CARTAS FORAM PREENCHIDAS\n");
    printf("AGORA ESCOLHA QUAL O ATRIBUTO DE COMPARAÇAO  PARA SER AVALIDADO ENTRE AS CARTAS\n");

    printf("(1) POPULAÇÃO\n");
    printf("(2) ÁREA\n");
    printf("(3) PIB\n");
    printf("(4) NUMERO DE PONTOS TURISTICOS\n");
    printf("(5) DENSIDADE DEMOGRÁFICA\n"); //   VENCE A CARTA COM MENOR VALOR
    printf("(6) SUPER PODER");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:

        printf("Atributo Escolhido: POPULAÇÃO\n");
        printf("%s: %lu habitantes\n", cidade, populacao);
        printf("%s: %lu habitantes\n", cidade2, populacao2);

        if (populacao > populacao2)
            printf("Cidade %s GANHOU", cidade);

        else if (populacao2 > populacao)
            printf("Cidade %s GANHOU", cidade2);

        else
            printf("Deu Empate entre as ciades");

        break;

    case 2:

        printf("Atributo Escolhido: ÁREA\n");
        printf("%s: %.2f km²\n", cidade, area);
        printf("%s: %.2f km²\n", cidade2, area2);

        if (area > area2)
            printf("Cidade: %s GANHOU", cidade);

        else if (area2 > area)
            printf("Cidade: %s GANHOU", cidade2);

        else
            printf("Deu Empate entre as cidades");

        break;

    case 3:

        printf("Atributo Escolhido: PIB\n");
        printf("%s: R$ %.2f\n", cidade, pib);
        printf("%s: R$%.2f\n", cidade2, pib2);

        if (pib > pib2)
            printf("Cidade: %s GANHOU", cidade);

        else if (pib2 > pib)

            printf("Cidade: %s GANHOU", cidade2);

        else
            printf("Deu empate entre as cidades");

        break;

    case 4:
        printf("Atributo Escolhido: PONTOS TURISTICOS\n");
        printf("%s: %d Pontos Turisticos\n", cidade, turistico2);
        printf("%s: %d Pontos Turisticos\n", cidade2, turistico2);

        if (turistico > turistico2)
            printf("Cidade: %s GANHOU", cidade);
        else if (turistico2 > turistico)
            printf("Cidade: %s GANHOU", cidade2);
        else
            printf("Deu empate entre as cidades");
        break;

    case 5:
        printf("Atributo Escolhido: Densidade demografica\n");
        printf("%s: %.2f Densidade demografica\n", cidade, densidade);
        printf("%s: %.2f Densidade demografica\n", cidade2, densidade2);

        if (densidade < densidade2)
            printf("Cidade: %s GANHOU", cidade);
        else if (densidade2 < densidade)

            printf("Cidade: %s GANHOU", cidade2);
        else
            printf("Deu empate entre as cidades");

        break;

    case 6:
        printf("Atributo Escolhido: Super Poder\n");
        printf("%s: %.2f Super Poder\n", cidade, poder);
        printf("%s: %.2f Super Poder\n", cidade2, poder2);

        if (poder > poder2)
            printf("Cidade: %s GANHOU", cidade);
        else if (poder2 > poder)
            printf("Cidade: %s GANHOU", cidade2);

        else
            printf("Deu empate entre as cidades");
        break;

    default:
        printf("Opção Invalida");
        break;
    }

    return 0;
}