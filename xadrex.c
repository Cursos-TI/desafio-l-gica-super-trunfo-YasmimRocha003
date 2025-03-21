#include <stdio.h>

int main (){
  printf ("Desafio Xadrez! \n");

  char estado[20], codigodacarta[5], cidade[20];
  int populacao, numerodepontosturisticos;
  float area, pib, densidadepopulacional, pibpercapita;

  char ESTADO[20], CODIGODACARTA[5], CIDADE[20];
  int POPULACAO, NUMERODEPONTOSTURISTICOS;
  float AREA, PIB, DENSIDADEPOPULACIONAL, PIBPERCAPITA;

  densidadepopulacional = (float) populacao / area;
  pibpercapita = (float) pib / populacao;
  
  DENSIDADEPOPULACIONAL = (float) POPULACAO / AREA;
  PIBPERCAPITA = (float) PIB / POPULACAO;

  printf("Carta1: \n");

  printf("Informe o estado: \n");
  scanf("%s", estado);

  printf("Informe o código da carta: \n");
  scanf("%s", codigodacarta);

  printf("Informe o nome da cidade: \n");
  scanf("%s", cidade);

  printf("Informe a população: \n");
  scanf("%d", &populacao);

  printf("Informe a area: \n");
  scanf("%f", &area);

  printf("Informe o PIB: \n");
  scanf("%f", &pib);
  
  printf("Informe o Número de pontos turísticos: \n");
  scanf("%d", &numerodepontosturisticos);

  printf("Carta2: \n");

  printf("Informe o estado: \n");
  scanf("%s", ESTADO);

  printf("Informe o código da carta: \n");
  scanf("%s", CODIGODACARTA);

  printf("Informe o nome da cidade: \n");
  scanf("%s", CIDADE);

  printf("Informe a população: \n");
  scanf("%d", &POPULACAO);

  printf("Informe a area: \n");
  scanf("%f", &AREA);

  printf("Informe o PIB: \n");
  scanf("%f", &PIB);
  
  printf("Informe o Número de pontos turísticos: \n");
  scanf("%d", &NUMERODEPONTOSTURISTICOS);

  printf("Carta1: \n");

  printf("Estado: %s\n", estado);
  printf("Código da carta: %s\n", codigodacarta );
  printf("Cidade: %s\n", cidade);
  printf("População: %d\n", populacao);
  printf("Area: %f\n",area);
  printf("PIB: %f\n", pib);
  printf("Número de pontos turísticos: %d\n", numerodepontosturisticos);
  printf("Densidade populacional: %2.f\n", densidadepopulacional);
  printf("PIB per capita: %2.f\n", pibpercapita);

  printf("Carta2: \n");

  printf("Estado: %s\n", ESTADO);
  printf("Código da carta: %s\n", CODIGODACARTA);
  printf("Cidade: %s\n", CIDADE);
  printf("População: %d\n", POPULACAO);
  printf("Area: %f\n",AREA);
  printf("PIB: %f\n", PIB);
  printf("Número de pontos turísticos: %d\n", NUMERODEPONTOSTURISTICOS);
  printf("Densidade populacional: %2.f\n", DENSIDADEPOPULACIONAL);
  printf("PIB per capita: %2.f\n", PIBPERCAPITA);

  printf("Resultado da comparação:\n");
  printf("Cidade: %s - População: %d\n", cidade, populacao);
  printf("Cidade: %s - População: %d\n", CIDADE, POPULACAO);
   
  if ( populacao > POPULACAO){
    printf("Carta 1 ganhou\n");
}else {
    printf("Carta 2 ganhou\n");
}
}