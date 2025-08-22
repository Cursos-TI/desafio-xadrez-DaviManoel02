#include <stdio.h>

int main(){

int  opcao,numerodemovimentos,i,opcaocavalo;

do{
//MEUNU INTERATIVO   
printf("\n-----Menu de movimentação-----\n");
printf("1.Torre\n");
printf("2.Bispo\n");
printf("3.Rainha\n");
printf("4.cavalo\n");
printf("5.Encerrar jogada\n");
printf("Escolha uma opção\n");
scanf("%d",&opcao);

if (opcao == 5)
{
    printf("Encerrar jogada\n");
    break;
}
switch (opcao)
{
case 1://MOVIMENTAÇÃO DA TORRE EM FOR
printf("Quantas casas deseja mover?\n");
scanf("%d",&numerodemovimentos);
if (numerodemovimentos<=5) {
printf("Numero de movimentos validos\n");
printf("\nMovimento da Torre:\n");
for (int i = 1; i <= numerodemovimentos; i++) { 
    printf("Direita %d\n",i);
}
}else
{
    printf("opcao invalida\n");
}
break;

case 2://MOVIMENTAÇÃO DO BISPO EM WHILE
printf("Quantas casas deseja mover?\n");
scanf("%d",&numerodemovimentos);

if (numerodemovimentos<=5){
    printf("Opcao valida\n");

printf("\nMovimento da bispo:\n");
i= 1;
while (i <= numerodemovimentos){
   printf("Cima direita %d \n",i);
   i++;
}
}else
{
    printf("opcao invalida\n");
}

break;

case 3://MOVIMENTAÇÃO DA RAINHA EM DO-WHILE
printf("Quantas casas deseja mover?\n");
scanf("%d",&numerodemovimentos);

if (numerodemovimentos<=8){
printf("Numero de movimentos validos\n");
printf("\nMovimento da rainha:\n");
 i= 1;
 do {
    printf("Esquerda %d \n",i);
i++;
 } while (i<=numerodemovimentos);
}else{
    printf("opcao invalida\n");
}
break;
//MENU PARA ESCOLHA DE MOVIMENTO DO CAVALO
case 4:
printf("Movimento do Cavalo!\n");
printf("\nMovimento do Cavalo (em L):\n");
printf("1. cima, cima, direita\n");
printf("2. cima, cima, esquerda\n");
printf("3. baixo, baixo, direita\n");
printf("4. baixo, baixo, esquerda\n");
printf("Escolha uma opção: ");
scanf("%d", &opcaocavalo);

switch (opcaocavalo)
{
case 1:
    for ( i = 1; i <=2; i++){
    int j = 1;
        while (j<=1){
       printf("cima\n");
    j++;
    }
    
}
printf("Direita\n");
    break;

case 2:
    for ( i = 1; i <=2; i++){
    int j = 1;
        while (j<=1){
       printf("cima\n");
    j++;
    }
    
}
printf("esquerda\n");
    break;

case 3:
    for ( i = 1; i <=2; i++){
    int j = 1;
        while (j<=1){
       printf("baixo\n");
    j++;
    }
    
}
printf("Direita\n");
    break;

case 4:
    for ( i = 1; i <=2; i++){
    int j = 1;
        while (j<=1){
       printf("baixo\n");
    j++;
    }
    
}
printf("esquerda\n");
    break;


default:
    printf("opcao invalida para movimentacao do cavalo\n");
break;
}
break;



default:
printf("Opção invalida, tente novamente. \n");
    break;
}

} while (opcao !=5);



}