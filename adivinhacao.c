//gcc adivinhacao.c -o adivinhacao.out//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*#define NUMERO_DE_TENTATIVAS 5 //equivalente ao const em javascript//*/
//double - casas decimais - %f //
//short - numeros inteiros pequenos//
//int - numeros inteiros - %d//
//long - numeros decimais de 2^64 - numeros muito grandes//
//float - numeros decimais com menos bytes//


int main() {

    printf("\n\n");
    printf("          P  /_\\  P                              \n");
    printf("         /_\\_|_|_/_\\                            \n");
    printf("     n_n | ||. .|| | n_n          Bem vindo ao    \n");
    printf("     |_|_|nnnn nnnn|_|_|      Jogo de Adivinhação!\n");
    printf("    |" "  |  |_|  |"  " |                         \n");
    printf("    |_____| ' _ ' |_____|                         \n");
    printf("          \\__|_|__/                              \n");
    printf("\n\n");

    //int segundos = time(0);
    //srand(segundos);

   // int numerogrande = rand();

   // int numerosecreto = numerogrande % 100; //Resto de uma divisão inteira em linguagem C//
   // printf("%d\n", chute);
   
    srand(time(0));
    int numerosecreto = rand() % 100;

    int chute;
    int acertou;
    int nivel;
    int numerodetentativas;
      
    double pontos = 1000;

    printf("Qual o nível de dificuldade?\n");
    printf("(1) Fácil (2) Médio (3) Difícil\n\n");
    printf("Escolha: ");
    scanf("%d", &nivel);
    
    switch(nivel) {
        case 1:
            numerodetentativas = 20;
            break;

        case 2:
            numerodetentativas = 15;
            break;

        default:
            numerodetentativas = 6;
            break;

    }

    /*for(int i = 1; i <= 3; i++) {
        printf("Qual é o seu chute? ");
        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);
    }*/

    for (int i = 1; i <= numerodetentativas; i++){

        printf("-> Tentativa %d de %d\n", i, numerodetentativas);
        printf("Qual o seu chute? ");
        scanf("%d", &chute);

        printf("Seu chute foi %d \n", chute);
        if (chute < 0) {
        printf("Você não pode chutar um número negativo\n");
        continue; 
        }

         int acertou = chute == numerosecreto;
        
        if (acertou){    
            break;
        }

        else if (chute > numerosecreto){
            printf("\nO seu chute é maior que o número secreto.\n");
        }

        else {
            printf("\n O seu chute foi menor que o número secreto.\n");
        }

        double pontosperdidos = abs(chute - numerosecreto) /2.0; //ou (chute - numerosecreto) /(double)2//
        /*if (pontosperdidos < 0){
            pontosperdidos = pontosperdidos * -1;
        } */ //Ao invés de usar o IF temos a função (abs) que transforma os números negativos em positivos 

        pontos = pontos - pontosperdidos;
    };
    //while (ganhou == 0) { 


    printf("Fim de jogo!\n");

    if(acertou) {
        printf("             OOOOOOOOOOO               \n");
        printf("         OOOOOOOOOOOOOOOOOOO           \n");
        printf("      OOOOOO  OOOOOOOOO  OOOOOO        \n");
        printf("    OOOOOO      OOOOO      OOOOOO      \n");
        printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
        printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
        printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
        printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
        printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n");
        printf("      OOOOOO   OOOOOOOOO   OOOOOO      \n");
        printf("         OOOOOO         OOOOOO         \n");
        printf("             OOOOOOOOOOOO              \n");
        printf("\n\n");

        printf("Você ganhou!\n");
        printf("Você acertou em %d tentativas!\n", numerodetentativas);
        printf("Total de pontos: %.1f\n", pontos);
    } 
    else {
        printf("Você perdeu! O número sercreto era: %d\n ", numerodetentativas);
        printf("Tente de novo!\n");
        printf("       \\|/ ____ \\|/    \n");
        printf("        @~/ ,. \\~@      \n");
        printf("       /_( \\__/ )_\\    \n");
        printf("          \\__U_/        \n");
    }



    };
////////////////////////////////CASTING/////////////////////////////////////////

/*#include <stdio.h>

int main() {

    int a = 3
    int b = 2;
    double pontos = 3 / (double)b;
    printf("%f\n", pontos);

    double pi = 3.1415;
    int piconvertido = (int)pi;

}*/