#include <stdio.h>

int main(){
   int opcao, escolhacarta, escolham;
   
    //Carta 1
    unsigned long int populacao1 = 6748000;
    int  pontost1 = 30;
    float pib1= 300.50, area1 = 1200.25;
    char nome1[20]= "Rio de Janeiro", estdo1[2]="RJ" , codigo1[4]= "RJ01";
    float percap1 = 1000000000*pib1 / populacao1;
    float denpup1 = populacao1 / area1;
    float superP1 = (float) pib1 + area1 + pontost1 + denpup1 + percap1;

   //Carta 2
    unsigned long int populacao2 = 12325000;
    int pontost2 = 50;
    float pib2= 699.28, area2= 1521.11;
    char nome2[20]="São Paulo", estado2[2]="SP", codigo2[4]="SP01";
    float percap2 = 1000000000*pib2 / populacao2;
    float denpup2 = populacao2 / area2;
    float superP2 = (float) pib2 + area2 + pontost2 + denpup1 + percap1;

    printf("SEJA BEM VINDO AO JOGO DE SUPER TRUNFO\n");
    printf("Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção\n");
    scanf("%d",&opcao);

    switch (opcao)
    {
    case 1:
        printf("Iniciando Jogo\n");
        printf("Escolha entre Carta 1 ou Carta 2:  ");
        scanf("%d",&escolhacarta);
        switch (escolhacarta)
        {
        case 1:
            printf("Você escolheu a Carta 1, aqui estão suas estatisticas:\n");
            printf("Carta 1:\n");
            printf("Estado: %s \n", estdo1 );
            printf("Código: %s \n", codigo1 );
            printf("Nome da Cidade %s \n", nome1 );
            printf("Estatisticas:\n");
            printf("1. População: %d \n", populacao1 );
            printf("2. Área: %.2f km² \n", area1 );
            printf("3. Pib: %.2f bilhoes de reais. \n", pib1);
            printf("4. Pontos turisticos: %d \n", pontost1);
            printf("5. PIB per Capita:%.2f reais \n",percap1);
            printf("6. Densidade Demográfica: %.2f hab/km²\n",denpup1);
            printf("---------------------------------------------------\n");
            printf("Escolha qual estatistica usar: ");
            scanf("%d",&escolham);
            switch (escolham)
            {
            case 1:
                printf("Você Escolheu: População (%d)",populacao1);
                printf("Minha carta tem %d\n",populacao2);
                    if(populacao1 > populacao2){
                        printf("A sua Carta Venceu!\n");
                    }else if(populacao2 > populacao1){
                        printf("A minha Carta Venceu!\n");
                    }else{
                        printf("EMPATE!!\n");
                    }
                break;
            case 2:
            printf("Você Escolheu: Área (%.2f km²)\n",area1);
            printf("A minha carta tem %.2f km²\n",area2);
                    if(area1 > area2){
                        printf("A sua Carta Venceu!\n");
                    }else if(area1 > area2){
                        printf("A minha Carta Venceu!\n");
                    }else{
                        printf("EMPATE!!\n");
                    }    
                break;
            case 3:
            printf("Você Escolheu: PIB (R$ %.2f bilhões)\n",pib1);
            printf("Minha carta tem R$ %.2f bilhões\n",pib2);
                    if(pib1 > pib2){
                        printf("A sua Carta Venceu!\n");
                    }else if(pib2 > pib1){
                        printf("A minha Carta Venceu!\n");
                    }else{
                        printf("EMPATE!!\n");
                    }
                break;
            case 4:
            printf("Você Escolheu: Pontos Turisticos (%d)\n",pontost1);
            printf("Minha carta tem %d\n",pontost2);
                    if(pontost1 > pontost2){
                        printf("A sua Carta Venceu!\n");
                    }else if(pontost2 > pontost1){
                        printf("A minha Carta Venceu!\n");
                    }else{
                        printf("EMPATE!!\n");
                    }
                break;
            case 5:
            printf("Você Escolheu: Per Capta (R$ %.2f)\n",percap1);
            printf("Minha carta tem R$ %.2f\n",percap2);
                    if(percap1 > percap2){
                        printf("A sua Carta Venceu!\n");
                    }else if(percap2 > percap1){
                        printf("A minha Carta Venceu!\n");
                    }else{
                        printf("EMPATE!!\n");
                    }
                break;
            case 6:
            printf("Você Escolheu: Densidade Demográfica: (%.2f hab/km²)\n",denpup1);
            printf("Minha carta tem %.2f hab/km²\n",denpup2);
                    if(denpup1 < denpup2){
                        printf("A sua Carta Venceu!\n");
                    }else if(denpup2 < denpup1){
                        printf("A minha Carta Venceu!\n");
                    }else{
                        printf("EMPATE!!\n");
                    }
                break;
            
            default:
            printf("Opção invalida, Tente novamente\n");
                break;
            }
        break;
        case 2:
            printf("Você escolheu a Carta 2, aqui estão suas estatisticas:\n");
            printf("Carta 2:\n");
            printf("Estado: %s \n", estado2 );
            printf("Código: %s \n", codigo2 );
            printf("Nome da Cidade: %s \n", nome2 );
            printf("Estatisticas:\n");            
            printf("1. População: %d \n", populacao2 );
            printf("2. Área: %f km² \n", area2 );
            printf("3. Pib: %f bilhoes de reais. \n", pib2);
            printf("4. Pontos turisticos: %d \n", pontost2);
            printf("5. PIB per Capita:%.2f reais \n",percap2);
            printf("6. Densidade Populacional: %.2f hab/km²\n",denpup2);
            printf("---------------------------------------------------\n");
            printf("Escolha qual estatistica usar: ");
            scanf("%d",&escolham);
            switch (escolham)
            {
            case 1:
                printf("Você Escolheu: População (%d)\n",populacao2);
                printf("Minha carta tem %d\n",populacao1);
                    if(populacao1 < populacao2){
                        printf("A sua Carta Venceu!\n");
                    }else if(populacao2 < populacao1){
                        printf("A minha Carta Venceu!\n");
                    }else{
                        printf("EMPATE!!\n");
                    }
                break;
            case 2:
            printf("Você Escolheu: Área Km²(%.2f)\n",area2);
            printf("Minha carta tem %.2f km²\n",area1);
                    if(area1 < area2){
                        printf("A sua Carta Venceu!\n");
                    }else if(area1 < area2){
                        printf("A minha Carta Venceu!\n");
                    }else{
                        printf("EMPATE!!\n");
                    }    
                break;
            case 3:
            printf("Você Escolheu: PIB (R$ %.2f Bilhões)\n",pib2);
            printf("Minha carta tem R$ %.2f Bilhões\n",pib1);
                    if(pib1 < pib2){
                        printf("A sua Carta Venceu!\n");
                    }else if(pib2 < pib1){
                        printf("A minha Carta Venceu!\n");
                    }else{
                        printf("EMPATE!!\n");
                    }
                break;
            case 4:
            printf("Você Escolheu: Pontos Turisticos (%d)\n",pontost2);
            printf("Minha carta tem %d\n",pontost1);
                    if(pontost1 < pontost2){
                        printf("A sua Carta Venceu!\n");
                    }else if(pontost2 < pontost1){
                        printf("A minha Carta Venceu!\n");
                    }else{
                        printf("EMPATE!!\n");
                    }
                break;
            case 5:
            printf("Você Escolheu: Per Capta (R$ %.2f)\n",percap2);
            printf("A minha carta tem R$ %.2f\n",percap1);
                    if(percap1 < percap2){
                        printf("A sua Carta Venceu!\n");
                    }else if(percap2 < percap1){
                        printf("A minha Carta Venceu!\n");
                    }else{
                        printf("EMPATE!!");
                    }
                break;
            case 6:
            printf("Você Escolheu: Densidade Demográfica: (%.2f hab/km²)\n",denpup2);
            printf("Minha carta tem %.2f hab/km²\n",denpup1);
                    if(denpup1 > denpup2){
                        printf("A sua Carta Venceu!\n");
                    }else if(denpup2 > denpup1){
                        printf("A minha Carta Venceu!\n");
                    }else{
                        printf("EMPATE!!\n");
                    }
                break;
            
            default:
            printf("Opção invalida, Tente novamente\n");
                break;
            }
        break;
        break;
        default:
        printf("Opção invalida, Tente novamente\n");
            break;
        }
        break;
    case 2:
    printf("As regras do jogo são a seguintes: \n\n1. Primeiro você deve escolher qual valor usar para comparar a carta com o seu oponente.\n2. A carta com o maior valor, com exceção da densidade demografica, ganha.\n\n\n");
    break;
    case 3:
    printf("thau tchau, desligando jogo\n");
    break;
    default:
     printf("Opção invalida, Tente novamente\n");
        break;
    }






    return 0;
}