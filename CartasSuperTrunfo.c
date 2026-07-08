#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1 [4], codigo2 [4];
    char cidade1 [50], cidade2 [50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    
    printf("**Cadastro da carta 1**\n");
    printf("\n");

    printf("Estado - Uma letra de 'A' a 'H': ");
    scanf(" %s", &estado1);
    printf("Código da carta: ");
    scanf(" %s", codigo1);
    printf("Nome da cidade: ");
    scanf("%s", cidade1);
    printf("Número da população: ");
    scanf(" %d", &populacao1);
    printf("Área: ");
    scanf(" %f", &area1);
    printf("PIB: ");
    scanf(" %f", &pib1);
    printf("Número de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);
    printf("\n");
    
    float densidadePopulacional1 = populacao1 / area1;
    float pibperCapita1 = pib1 / populacao1;
    float dpinv1 = 1 / densidadePopulacional1;
    float superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibperCapita1 + dpinv1;

    printf("***RESULTADO CARTA 1***\n");
    printf("\n");
    
    printf("Carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turisticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f\n", densidadePopulacional1);
    printf("PIB per capita: %.2f\n", pibperCapita1);
    printf("O super poder dessa carta é: %.2f\n", superPoder1);
    
    printf("\n");
    printf("\n===========================\n");
    printf("\n");

    printf("**Cadastro da carta 2**\n");
    printf("\n");
    
    printf("Estado - Uma letra de 'A' a 'H': ");
    scanf(" %s", &estado2);
    printf("Código da carta: ");
    scanf(" %s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %s", cidade2);
    printf("Número da População: ");
    scanf(" %d", &populacao2);
    printf("Área: ");
    scanf(" %f", &area2);
    printf("PIB: ");
    scanf(" %f", &pib2);
    printf("Número de pontos turisticos: ");
    scanf(" %d", &pontosTuristicos2);
    printf("\n");
    
    float densidadePopulacional2 = populacao2 / area2;
    float pibperCapita2 = pib2 / populacao2;
    float dpinv2 = 1 / densidadePopulacional2;
    float superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibperCapita2 + dpinv2;
    
    printf("***RESULTADO CARTA 2***\n");
    printf("\n");
    
    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turisticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f\n", densidadePopulacional2);
    printf("PIB per capita: %.2f\n", pibperCapita2);
    printf("O super poder dessa carta é: %.2f\n", superPoder2);
        
      printf("\n");
      printf("***Comparação das cartas***\n");
      printf("\n");
      
      printf("População: %d\n", populacao1 > populacao2);
      printf("Área: %d\n", area1 > area2);
      printf("PIB: %d\n", pib1 > pib2);
      printf("Pontos turisticos: %d\n", pontosTuristicos1 > pontosTuristicos2);
      printf("Densidade populacional: %d\n", densidadePopulacional1 < densidadePopulacional2);
      printf("Pib per Capita: %d\n", pibperCapita1 > pibperCapita2);
      printf("Super Poder: %d\n", superPoder1 > superPoder2);
      
    
    
return 0;

}


