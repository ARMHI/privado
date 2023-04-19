#include <stdlib.h>
#include <stdio.h>





int main (){

    int *c, clock, *q, quant;
    float *A, *B, arrayA[1], arrayB[1];

   //printf ("before all");
    A = &arrayA[0];
    B = &arrayB[0];

    scanf ("%d", &quant);
    //printf ("%d", quant);

    q = (int*)malloc(sizeof(int)*1);
    c = (int*)malloc(sizeof(int)*1);
    A = (float*)malloc(sizeof(float)*quant);
    B = (float*)malloc(sizeof(float)*quant);
   // printf ("after mallocs");

    for (clock=0;clock<quant;clock++){
        scanf("%f", &A[clock]);
    //printf("accepting data array numeros %d \n", clock);
    //printf("quant %d \n", quant);
   // printf("accepting data array numeros %.2f \n", A[clock]);
        
    }

    CopyArray(arrayA[], clock, quant, arrayB);


    free(A);
    free(B);
    free(c);
    free(q);

    return 0;
}

void CopyArray(arrayA[], clock, quant, arrayB[]){

    for (clock = 0; clock < quant; clock++){
        arrayA[clock]=arrayB[clock];
        printf("posicao %d do array foi copiada\n", clock);
        printf("Array A %.2f \n", arrayA);
        printf("Array B %.2f \n", arrayB);
    //printf("%d\n", quant);
    //printf("%d\n", clock);


    }

}
