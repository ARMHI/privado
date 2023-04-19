#include <stdlib.h>
#include <stdio.h>

    float *A, *B, arrayA[1], arrayB[1];

void CopyArray(int clock,int quant){
    for (clock=0;clock<quant;clock++){
        printf("Array A %.2f \n", arrayA[clock]);
    }
    for (clock = 0; clock < quant; clock++){
      printf("Array A %.2f \n", arrayA[clock]);
       printf("Array B %.2f \n", arrayB[clock]);
        arrayB[clock]=arrayA[clock];
      //  printf("posicao %d do array foi copiada\n", clock);
     // printf("Array A %.2f \n", arrayA[clock]);
      // printf("Array B %.2f \n", arrayB[clock]);
    //printf("%d\n", quant);
    //printf("%d\n", clock);


    }

}

void MergeTopDown(float *A, float *B, int start, int mid, int end, int clock){

    int s=start, m=mid;

    printf ("merge TopDown");

    for(clock = start; clock < end; clock++ ){

        if ( s<mid && (m>=end || arrayA[s]<=arrayA[m])){
            arrayB[clock]=arrayA[s];
            s=s+1;
        }
        else{
            arrayB[clock]=arrayA[m];
            m=m+1;
        }

    }


    
    
}

void SplitTopDown (float *A, float *B, int start, int end, int clock){

int mid;

if ((end-start)<=1){
    return;
}

mid = (start + end)/2;

SplitTopDown(A, B, start, mid, 0);
SplitTopDown(A, B, mid, end, 0);

MergeTopDown(A, B, start, mid, end, 0);

}

int main (){

    int *c, clock, *q, quant;

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
        scanf("%f", &arrayA[clock]);
    //printf("accepting data array numeros %d \n", clock);
    //printf("quant %d \n", quant);
    //printf("accepting data array numeros %.2f \n", arrayA[clock]);
        
    }

 //   for (clock=0;clock<quant;clock++){
  //      printf("Array A %.2f \n", arrayA[clock]);
  //  }
    CopyArray(clock, quant);

    SplitTopDown(A, B, clock, quant, clock);

    for(clock=0;clock<quant;clock++){
        printf("Array A %.2f \n", arrayA[clock]);
        printf("Array B %.2f \n", arrayB[clock]);
    }

    free(A);
    free(B);
    free(c);
    free(q);

    return 0;
}
