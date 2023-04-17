#include <stdlib.h>
#include <stdio.h>

int main (  ) {

float vetor[10],maior, menor;
int clock;

for(clock=0; clock <10; clock++){
    scanf("%f", &vetor[clock]);

    if (vetor[clock]>maior){maior=vetor[clock];}
    if (vetor[clock]<menor){menor=vetor[clock];}

}

    printf ("o maior numero e %.2f \n", maior);
    printf ("o menor numero e %.2f \n", menor);

    return 0;

    


}