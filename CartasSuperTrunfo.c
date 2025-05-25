 #include <stdio.h>

 int main() {
     // Declaração das variáveis para Carta 1
   char estado1;
   char codigo1[5];
   char nomeCidade1[50];
   int populacao1;
   float area1;
   float pib1;
   int pontosTuristicos1;

  // Declaração das variáveis para Carta 2
   char estado2;
   char codigo2[5];
   char nomeCidade2[50];
   int populacao2;
   float area2;
   float pib2;
   int pontosTuristicos2;

   // Leitura das informações da Carta 1
   printf("Informe os dados da Carta 1:\n");
   printf("Estado: ");

   scanf(" %c", &estado1);
   printf("Código: ");

   scanf("%s", codigo1);
   printf("Nome da cidade: ");

   scanf(" %[^\n]", nomeCidade1);

   printf("População: ");                                           
   scanf("%d", &populacao1);

   printf("Área: "); 
   scanf("%f", &area1);

   printf("PIB: ");
   scanf("%f", &pib1);

   printf("Número de pontos turísticos: ");
   scanf("%d", &pontosTuristicos1);

   // Leitura das informações da Carta 2
   printf("\nInforme os dados da Carta 2:\n");

   printf("Estado: ");
   scanf(" %c", &estado2);

   printf("Código: ");
   scanf("%s", codigo2);

   printf("Nome da cidade: ");
   scanf(" %[^\n]", nomeCidade2);

   printf("População: ");
   scanf("%d", &populacao2);

   printf("Área: ");
   scanf("%f", &area2);
                                                                                                                                                                                    
   printf("PIB: ");
   scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição das informações
 printf("\nCarta 1:\n");
 printf("Estado: %c\n", estado1);

 printf("Código: %s\n", codigo1);
 printf("Nome da cidade: %s\n", nomeCidade1);
                                                                                                                                                                                                                         
 printf("População: %d\n", populacao1);
 printf("Área: %.2f\n", area1);
                                                                                                                                                                                                                                
 printf("PIB: %.2f bilhões\n", pib1);
 printf("Número de Pontos turísticos: %d\n", pontosTuristicos1);

 printf("\nCarta 2:\n");

 printf("Estado: %c\n", estado2);
 printf("Código: %s\n", codigo2);

 printf("Nome da cidade: %s\n", nomeCidade2);
 printf("População: %d\n", populacao2);

 printf("Área: %.2f\n", area2);
 printf("PIB: %.2f bilhões\n", pib2);

 printf("Número de Pontos turísticos: %d\n", pontosTuristicos2);

 return 0;
 }