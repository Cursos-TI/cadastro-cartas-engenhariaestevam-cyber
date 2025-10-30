#include <stdio.h>



int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
      char estado1, estado2;
      char codcarta1[3], codcarta2[3];
      char nome1[20], nome2[20];
      int populacao1, populacao2, pontotur1, pontotur2, opcao; 
      float area1, area2, pib1, pib2, denspop1,denspop2, pibcapta1, pibcapta2;
         


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

      denspop1 = populacao1 / area1;//calculo da densidade Carta 1
      pibcapta1 = pib1 / populacao1;//calculo do PIB PerCapta Carta 1

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
      
      denspop2 = (float)populacao2 / area2; //calculo da densidade Carta 2
      pibcapta2 = pib2 / (float)populacao2; //calculo do PIB PerCapta Carta 2

     
  // Área para exibição dos dados da cidade

      

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


      //Aqui estão as opções do Menu:

      printf("Escolha o Atributo para comparação:\n");
      printf("1 - Dados inseridos da carta 1\n");
      printf("2 - Dados inseridos da carta 2\n");
      printf("3 - Dados inseridos das duas cartas\n");
      printf("4 - População\n");
      printf("5 - Área\n");
      printf("6 - PIB\n");
      printf("7 - Número de Pontos Turísticos\n");
      printf("8 - Densidade demográfica\n");

      //Lógica do switch

      switch (opcao)
      {
      case 1:
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
        break;

      case 2:
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
        break;

      case 3:
        /* code */
        break;

      case 4:
        /* code */
        break;

      case 5:
        /* code */
        break;

      case 6:
        /* code */
        break;

      case 7:
        /* code */
        break;

      case 8:
        /* code */
        break;

      default:
        break;
      }



      
      //abaixo estão as lógicas para a comparação das cartas:

      printf("\nAtributo - população:\n");
      printf("\nCarta 1:%s\n",nome1);
      printf("Carta 2:%s\n",nome2);

      if(populacao1 > populacao2) //calculo da comparação do atributo População
      {
        printf("A Carta 1 foi a vencedora!\n");
      }else
      {
        printf("A carta 2 foi a vencedora!\n");
      }
     

return 0;
} 
