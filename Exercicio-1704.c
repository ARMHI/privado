#include <stdlib.h>
#include <stdio.h>


    float *A, *B, arrayA[1], arrayB[1];
    int *c, clock, *q, quant;



void CopyArray(float *A,float *B, int clock,int quant){


    for (clock = 0; clock < quant; clock++){
        arrayB[clock]=arrayA[clock];
        printf("posicao %d do array foi copiada\n", clock);
     // printf("Array A %.2f \n", arrayA[clock]);
    //   printf("Array B %.2f \n", arrayB[clock]);
    //printf("%d\n", quant);
    //printf("%d\n", clock);


    }

}

void MergeTopDown(float *A, float *B, int start, int mid, int end){

    for(clock = start; clock < end, clock++ )

    int s=start, m=mid;

    
    
}

void SplitTopDown (float *A, float *B, int start, int end){

int mid;

mid = start + end;

SplitTopDown(A, B, start, mid);
SplitTopDown(A, B, mid, end);

MergeTopDown(A, B, start, mid, end);

}

int main (){


   //printf ("before all");
    A = &arrayA[0];
    B = &arrayB[0];

    scanf ("%d", &quant);
    //printf ("%d", quant);

    q = (int*)malloc(sizeof(int)*2);
    c = (int*)malloc(sizeof(int)*1);
    A = (float*)malloc(sizeof(float)*quant);
    B = (float*)malloc(sizeof(float)*quant);
   // printf ("after mallocs");

    for (clock=0;clock<quant;clock++){
        scanf("%f", &arrayA[clock]);
    //printf("accepting data array numeros %d \n", clock);
    //printf("quant %d \n", quant);
    printf("accepting data array numeros %.2f \n", arrayA[clock]);
        
    }

 //   for (clock=0;clock<quant;clock++){
  //      printf("Array A %.2f \n", arrayA[clock]);
  //  }
    CopyArray(A, B, clock, quant);

    SplitTopDown(A, B, clock, quant);

    free(A);
    free(B);
    free(c);
    free(q);

    return 0;
}
