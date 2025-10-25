#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
      char estado1, estado2;
      char codcarta1[3], codcarta2[3];
      char nome1[20], nome2[20];
      int populacao1, populacao2, pontotur1, pontotur2; 
      float area1, area2, pib1, pib2, denspop1,denspop2, pibcapta1, pibcapta2;
      int resultadopopulacao;
      int resultadoarea;
      int resultadopib;
      int resultadopontotur;
      int resultadodensidade;
      int resultadopibcapta;
      int superpoder;
      int invdensidade;


  // Área para entrada de dados
      printf("Cadastro da carta 1\n");
      printf("Insira a letra corresponde ao estado:\n");
      scanf("%c", &estado1);

      printf("Insira o código da carta:\n");
      scanf("%s", codcarta1);

      printf("Insira o nome da cidade:\n");
      scanf("%s", nome1);

      printf("Insira a população:\n");
      scanf("%d", &populacao1);

      printf("Insira a área:\n");
      scanf("%f", &area1);

      printf("Insira o PIB:\n");
      scanf("%f", &pib1);

      printf("Insira o número de pontos turísticos:\n");
      scanf("%d", &pontotur1);

      denspop1 = populacao1 / area1;
      pibcapta1 = pib1 / populacao1;

      printf("\nCadastro da carta 2\n");
      printf("Insira a letra corresponde ao estado:\n");
      scanf(" %c", &estado2);

      printf("Insira o código da carta:\n");
      scanf("%s", codcarta2);

      printf("Insira o nome da cidade:\n");
      scanf("%s", nome2);

      printf("Insira a população:\n");
      scanf("%d", &populacao2);

      printf("Insira a área:\n");
      scanf("%f", &area2);

      printf("Insira o PIB:\n");
      scanf("%f", &pib2);

      printf("Insira o número de pontos turísticos:\n");
      scanf("%d", &pontotur2);

      denspop2 = populacao2 / area2;
      pibcapta2 = pib2 / populacao2;
      resultadopopulacao = populacao1 > populacao2;
      resultadoarea = area1 > area2;
      resultadopib = pib1 > pib2;
      resultadopontotur = pontotur1 > pontotur2;
      resultadodensidade = denspop1 < denspop2;
      resultadopibcapta = pibcapta1 > pibcapta2;

  // Área para exibição dos dados da cidade

      printf("\nSeguem os dados da Carta 1:\n");
      printf("\nEstado: %c\n", estado1);
      printf("Código da carta: %s\n", codcarta1);
      printf("nome da cidade: %s\n", nome1);
      printf("População: %d\n", populacao1);
      printf("Área: %.3f\n", area1);
      printf("PIB: %.3f\n", pib1);
      printf("Pontos Turísticos: %d\n", pontotur1);
      printf("Densidade: %.9f\n", denspop1);
      printf("PIB per capta: %.6f\n", pibcapta1);

      printf("\nSeguem os dados da Carta 2:\n");
      printf("\nEstado: %c\n", estado2);
      printf("Código da carta: %s\n", codcarta2);
      printf("nome da cidade: %s\n", nome2);
      printf("População: %d\n", populacao2);
      printf("Área: %.3f\n", area2);
      printf("PIB: %.3f\n", pib2);
      printf("Pontos Turísticos: %d\n", pontotur2);
      printf("Densidade: %.9f\n", denspop2);
      printf("PIB per capta: %.6f\n", pibcapta2);

      printf("\nResultado da comparação de cartas:\n");
      printf("\nPopulação: %d\n", resultadopopulacao);
      printf("\nÁrea: %d\n", resultadoarea);
      printf("\nPIB: %d\n", resultadopib);
      printf("\nPontos Turísticos: %d\n", resultadopontotur);
      printf("\nDensidade: %d\n", resultadodensidade);
      printf("\nPIB PerCapta: %d\n", resultadopibcapta);


return 0;
} 
