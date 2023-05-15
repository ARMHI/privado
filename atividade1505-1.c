/* Programa feito por Artur M. 

1- Construa um algoritmo que efetue e apresente o resultado da soma entre duas matrizes 3 x 5.

*/

#include <stdlib.h>
#include <stdio.h>

void entrada(float matriz[3][5],float matriz2[3][5], float matriz3 [3][5], int linha, int coluna){


    for(linha=0; linha<3; linha++){
        for(coluna=0; coluna<5; coluna++){scanf("%f", &matriz[linha][coluna]); }
    }
    for(linha=0; linha<3; linha++){
        for(coluna=0; coluna<5; coluna++){scanf("%f", &matriz2[linha][coluna]); }
    }
    for(linha=0; linha<3; linha++){
        for(coluna=0; coluna<5; coluna++){matriz2[linha][coluna]= 0; }
    }


    //saida(matriz,saida,0,0);

}

void contas(float matriz [3][5], float matriz2[3][5], float matriz3 [3][5], int linha, int coluna){

    for(linha=0;linha<3;linha++){
        for(coluna=0; coluna<5; coluna++){ matriz3[linha][coluna]=matriz1[linha][coluna] + matriz2[linha][coluna];}
}

}

void saida(float matriz[3][5],float matriz2[3][5], float matriz3[3][5], int linha, int coluna,int clock){

for (clock = 0; clock < 3; clock++){
for (linha=0; linha<3;linha++){

    printf ("[");
    for ( coluna=0; coluna)

     }
    }
}


int main (){
float matriz[3] [5], linha, coluna, matriz2[3][5], matriz3 [3] [5]; 

printf("insira duas matrizes 3X5\n");

entrada(matriz, matriz2, matriz3, 0, 0);
contas(matriz, matriz2, matriz3, 0, 0, 0);
saida(matriz, matriz2, matriz3, 0, 0);

return 0;

}




//ARMHI
