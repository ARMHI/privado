#include <stdlib.h>
#include <stdio.h>

    int  click, quanti;
    float *A, *B;

void CopyArray(int clock,int quant, float *A, float *B){

    for (clock = 0; clock < quant; clock++){
        //printf ("%d\n", clock);
        B[clock]=A[clock];
      //  printf("posicao %d do array foi copiada\n", clock);
    }

 //   for (clock=0;clock<quant;clock++){ printf("Array A %.2f \n", A[clock]); printf("Array B %.2f \n", B[clock]);}

}

/*

void MergeTopDown(float *A, float *B, int start, int mid, int end, int clock){

    int s=start, m=mid;

    printf ("merge TopDown");

    for(clock = start; clock < end; clock++ ){

        if ( s<mid && (m>=end || A[s]<=A[m])){
            B[clock]=A[s];
            s=s+1;
        }
        else{
            B[clock]=A[m];
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
*/

int main (){


    scanf ("%d", &quanti);

    float *A = (float*)malloc(sizeof(float)*quanti);
    float *B = (float*)malloc(sizeof(float)*quanti);

    for (click=0;click<quanti;click++){
        scanf("%f", &A[click]);
        
    }

    for (click=0;click<quanti;click++){
       printf("Array A %.2f \n", A[click]);
       printf("Array B %.2f \n", B[click]);
   }


    CopyArray(0, quanti, A, B);

 //   SplitTopDown(A, B, click, quanti, click);

  /*  for(clock=0;clock<quant;clock++){
        printf("Array A %.2f \n", A[clock]);
        printf("Array B %.2f \n", B[clock]);
    }
    */

    free(A);
    free(B);

    return 0;
}
