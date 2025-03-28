#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");	
    
    //carta1

    char estado1;
    char codigo1[10];
    char cidade1[54];
    unsigned long int populacao1; 
    float area1;
    float pib1;
    int pontos_turisticos1;

    //carta2
    char estado2;
    char codigo2[10];
    char cidade2[54];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    // Entrada para carta1
    printf("=======Carta 1=======\n");
    printf("Digite a inicial do estado: ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta (ex inicial-do-estado99): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    getchar();
    fgets(cidade1, sizeof(cidade1), stdin);
    printf("Digite o numero da população da cidade: ");
    scanf("%d", &populacao1);
    printf("Digite o tamanho da a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos1);

    //Entrada para carta2
    printf("\n=======Carta 2=======\n");
    printf("Digite a inicial do estado: ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta (ex inicial-do-estado99): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    getchar();
    fgets(cidade2, sizeof(cidade2), stdin);
    printf("Digite o numero da população da cidade: ");
    scanf("%d", &populacao2);
    printf("Digite o tamanho da a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos2);

    //Densidade e PIB Per capita
    float densidade1 = populacao1 / area1;
    float pib_per_capita1 = pib1 / populacao1; 

    float densidade2 = populacao2 / area2;
    float pib_per_capita2 = pib2 / populacao2;

    //Calculando poder
    float super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1.0 / densidade1);
    float super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1.0 / densidade1);

    printf("\n=======Dados da carta 1=======\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    printf("Super poder: %2.f\n", super_poder1);
    
    printf("\n=======Dados da carta 2=======\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("Super poder: %.2f\n", super_poder2);  

    printf("\n=======Comparação=======\n");
    printf("População: carta %d venceu (%d)\n", populacao1 > populacao2 ? 1 : 2, populacao2 > populacao2 ? 1 : 0);
    printf("Área: carta %d venceu (%d)\n", area1 > area2 ? 1 : 2, area1 > area2 ? 1 : 0);
    printf("PIB: carta %d venceu (%d)\n", pib1 > pib2 ? 1 : 2, pib1 > pib2 ? 1 : 0);
    printf("Pontos turisticos: carta %d venceu (%d)\n", pontos_turisticos1 > pontos_turisticos2 ? 1 : 2, pontos_turisticos1 > pontos_turisticos2 ? 1 : 0);
    printf("Densidade: carta %d venceu (%d)\n", densidade1 < densidade2 ? 1 : 2, densidade1 < densidade2 ? 1 : 0);
    printf("PIB per capita: carta %d venceu (%d)\n", pib_per_capita1 > pib_per_capita2 ? 1 : 2, pib_per_capita1 > pib_per_capita2 ? 1 : 0);
    printf("Super poder: carta %d venceu (%d)\n", super_poder1 > super_poder2 ? 1 : 2, super_poder1 > super_poder2 ? 1 : 0);


    


   return 0;

}
