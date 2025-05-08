#include <stdio.h>

int main(){
    int Linha[10]= { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    char Coluna[10]= {'A','B','C','D','E','F','G','H','I','J'};
    int Tabuleiro[10][10];
    int i, W = 0;//Water
    int N = 3;//Navio
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
            if (((X == 0) && (Y == 3))||((X == 0) && (Y == 4))||
                ((X == 0) && (Y == 5))||((X == 8) && (Y == 2))||//Comparação(Escolha do lugar dos navios)
                ((X == 7) && (Y == 2))||((X == 6) && (Y == 2))){
                    printf("%d\t", N);} else {
                 
            printf("%d\t", W);}}//Água
        
        printf("\n");}
return 0;
}