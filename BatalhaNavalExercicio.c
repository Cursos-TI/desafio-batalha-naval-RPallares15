#include <stdio.h>

#define Cone1 3
#define Cone2 3
#define Cruz1 3
#define Cruz2 3
#define Octa1 3
#define Octa2 3

int main(){
    int Linha[10]= { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    char Coluna[10]= {'A','B','C','D','E','F','G','H','I','J'};
    int Cone [Cone1][Cone2];
    int Cruz [Cruz1][Cruz2];
    int Octa [Octa1][Octa2];
    int Tabuleiro[10][10];
    int W = 0;//Water
    int N = 3;//Navio
    int P = 5;//Power
    char C = Coluna[0];
    
    printf("---------------------------------------------------------------------------------\n");
    printf("-----------------------------Tabuleiro Batalha Naval-----------------------------\n");
    printf("\t");
    while (C <= 'J') {//definição de colunas
        printf("%c\t", C);
        C++ ;
    }
    printf("\n");
    for (int X = 0; X < 10; X++){
        printf("%d\t", Linha[0]++);//definição de linhas
            
        for (int Y = 0; Y < 10; Y++){
            if (((X == 9) && (Y == 6))||((X == 8) && (Y == 7))||
                ((X == 7) && (Y == 8))||((X == 2) && (Y == 7))||//Comparação(Escolha do lugar dos navios)
                ((X == 3) && (Y == 8))||((X == 4) && (Y == 9))||
                ((X == 0) && (Y == 3))||((X == 0) && (Y == 4))||
                ((X == 0) && (Y == 5))||((X == 8) && (Y == 2))||
                ((X == 7) && (Y == 2))||((X == 6) && (Y == 2))){
                    printf("%d\t", N);} else if (
                    ((X == 0)&&(Y == 1)||(X == 1)&&(Y == 0)||(X == 1)&&(Y == 1)||
                     (X == 1)&&(Y == 2)||(X == 2)&&(Y == 0)||(X == 2)&&(Y == 1)||
                     (X == 2)&&(Y == 2))||
                    //Poderes
                    ((X == 0)&&(Y == 6)||(X == 1)&&(Y == 5)||(X == 1)&&(Y == 6)||
                     (X == 1)&&(Y == 7)||(X == 2)&&(Y == 6)||(X == 1)&&(Y == 4)||
                     (X == 1)&&(Y == 8))||

                    ((X == 4)&&(Y == 4)||(X == 5)&&(Y == 3)||(X == 5)&&(Y == 4)||
                    (X == 5)&&(Y == 5)||(X == 6)&&(Y == 4))){
                        printf("%d\t", P);
                    } else
                    {
                 
            printf("%d\t", W);}}//Água
        
        printf("\n");}
return 0;
}