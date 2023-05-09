/* Programa feito por Artur M. 

Exercício 02

Desenvolva um programa (C) que cria uma matriz bidimensional 4 X 5, e que a usuário preencha todos os elementos através de entrada via teclado. Após o preenchimento da matriz, 
apresente seu conteúdo da seguinte forma:

Exemplo de Saída:

[111, 21, 55, 3, 99]

[123, 566, 7, 9, 44]

[987, 1, 2556, 4443, 56]

[33, 5443, 986, 102, 8865]

*/

#include <stdlib.h>
#include <stdio.h>

void entrada(int matriz[4][5], int linha, int coluna){

        printf ("entrada");

    for(linha=0; linha<4; linha++){
        for(coluna=0; coluna<5; coluna++){scanf("%d", &matriz[linha][coluna]); printf("%d ",linha); }
    }

}

void saida(int matriz[4][5], int linha, int coluna){

    printf("[");
    for (linha=0; linha < 4; linha++){
        for (coluna=0; coluna<4; coluna++){printf("%d, ", matriz[linha][coluna]);}
        printf("%d]\n", matriz[linha][coluna]);
    }

}

int main (int matriz[4] [5], int linha, int coluna){

entrada(matriz, 0, 0);

printf("apos entrada");
saida(matriz, 0, 0);

return 0;

}




//ARMHI