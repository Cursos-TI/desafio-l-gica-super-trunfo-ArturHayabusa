#include <stdio.h>

int main(){
    //Carta 1
    unsigned long int populacao1;
    int  pontost1;
    float pib1, area1;
    char nome1[20], estdo1[2], codigo1[4];
   //Carta 2
    unsigned long int populacao2;
    int pontost2;
    float pib2, area2;
    char nome2[20], estado2[2], codigo2[4];

        //especificações da carta 1

        printf("Estabelecendo parametros para carta numero 1\n");

        printf("Digite o Estado da cidade: \n");
            scanf("%s", estdo1);
        
        printf("Digite o Codigo da carta(eg:ES01, SP23): \n");
            scanf("%s", codigo1);

        printf("Digite o nome da cidade: \n");
            scanf("%s", nome1);

        printf("Digite a população do Estado(em numeros): \n");
            scanf("%d", &populacao1);

        printf("Digite a área do estado em km²: \n");
            scanf("%f", &area1);

          printf("Digite o PIB do Estado(em Bilhões): \n");
            scanf("%f", &pib1);

        printf("Digite o number de Pontos Turisticos: \n");
            scanf("%d", &pontost1);
        
    float percap1 = 1000000000*pib1 / populacao1;
    float denpup1 = populacao1 / area1;
    float superP1 = (float) pib1 + area1 + pontost1 + denpup1 + percap1;


     // Descrição Carta 1

    printf("Carta 1:\n");
    printf("Estado: %s \n", estdo1 );
    printf("Código: %s \n", codigo1 );
    printf("Nome da Cidade %s \n", nome1 );
    printf("População: %d \n", populacao1 );
    printf("Área: %.2f km² \n", area1 );
    printf("Pib: %.2f bilhoes de reais. \n", pib1);
    printf("Pontos turisticos: %d \n", pontost1);
    printf("Densidade Populacional: %.2f hab/km²\n",denpup1);
    printf("PIB per Capita:%.2f reais \n",percap1);


     printf("Carta 1 estabelecida.\n ------------------------\n Iniciando carta 2\n");
        
       // Especificações da carta 2
        printf("Digite o Estado da cidade: \n");
            scanf("%s", estado2);
        printf("Digite o Codigo da carta(eg:ES01, SP23):\n");
            scanf("%s", codigo2);
        printf("Digite o nome da cidade: \n");
            scanf("%s", nome2);
        printf("Digite a população do Estado(em numeros):\n ");
            scanf("%d", &populacao2);
       printf("Digite a área do estado em km²:\n ");
            scanf("%f", &area2);
        printf("Digite o PIB do Estado(em Bilhões): \n");
            scanf("%f", &pib2);
        printf("Digite o number de Pontos Turisticos: \n");
            scanf("%d", &pontost2);
    float percap2 = 1000000000*pib2 / populacao2;
    float denpup2 = populacao2 / area2;
    float superP2 = (float) pib2 + area2 + pontost2 + denpup1 + percap1;
    
    printf("carta 2 estabelecida.\n ");


// Descrição Carta 2

    printf("Carta 2:\n");
    printf("Estado: %s \n", estado2 );
    printf("Código: %s \n", codigo2 );
    printf("Nome da Cidade: %s \n", nome2 );
    printf("População: %d \n", populacao2 );
    printf("Área: %f km² \n", area2 );
    printf("Pib: %f bilhoes de reais. \n", pib2);
    printf("Pontos turisticos: %d \n", pontost2);
    printf("Densidade Populacional: %.2f hab/km²\n",denpup2);
    printf("PIB per Capita:%.2f reais \n",percap2);

    //Comparando ambas cartas
    printf("----------------------------------------------------\n");
    printf("Comparando PIB:\n");
    printf("Carta 1 - %s (%s): %f bilhões de reais\n", nome1, estdo1, pib1);
    printf("Carta 2 - %s (%s): %f bilhões de reais\n", nome2, estado2, pib2);
    if (pib1 > pib2){
        printf("Carta 1 (%s) Venceu!\n", nome1);
    } else 
    if (pib2 > pib1){
        printf("Carta 2 (%s) Venceu!\n", nome2);
    } else
    printf("EMPATE!\n");


    return 0;
}