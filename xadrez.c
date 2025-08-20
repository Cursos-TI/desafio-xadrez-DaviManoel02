#include <stdio.h>

int main(){

int  opcao,numerodemovimentos,i;

do{
//MEUNU INTERATIVO   
printf("\n-----Menu de movimentação-----\n");
printf("1.Torre\n");
printf("2.Bispo\n");
printf("3.Rainha\n");
printf("4.Encerrar jogada\n");
printf("Escolha uma opção\n");
scanf("%d",&opcao);

if (opcao == 4)
{
    printf("Encerrar jogada\n");
    break;
}
printf("Quantas casas deseja mover?\n");
scanf("%d",&numerodemovimentos);

switch (opcao)
{
case 1://MOVIMENTAÇÃO DA TORRE EM FOR
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

default:
printf("Opção invalida, tente novamente. \n");
    break;
}

} while (opcao !=4);



}