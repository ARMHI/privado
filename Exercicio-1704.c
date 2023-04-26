#include <stdlib.h>
#include <stdio.h>

    int  click, quanti, quante;

    float *A, *B;

void CopyArray(int clock,int quant, float *A, float *B){

    for (clock = 0; clock < quant; clock++){
        //printf ("%d\n", clock);
        B[clock]=A[clock];
      //  printf("posicao %d do array foi copiada\n", clock);
    }

 //   for (clock=0;clock<quant;clock++){ printf("Array A %.2f \n", A[clock]); printf("Array B %.2f \n", B[clock]);}

}



void MergeTopDown(float *A, float *B, int start, int mid, int end, int clock){

    int s=start, m=mid;

    //printf (" TopDownMerge \n");

    for(clock = start; clock < end; clock++ ){
        //printf ("\n %d %d %d %.2f %.2f\n ", s, m, end, A[s], A[m]);
        if ( s<mid && (m>=end || A[s]<=A[m])){
            B[clock]=A[s];
            s=s+1;
          //  printf ("\n if %.2f %.2f %.2f \n", B[clock], A[s], A[m]);
        }
        else{
            B[clock]=A[m];
            m=m+1;
           // printf ("\n else %.2f %.2f %.2f \n", B[clock], A[s], A[m]);
        }

    }
    CopyArray(0, quanti, B, A);

    //printf ("\nmerge result: 0-%.2f 1-%.2f 2-%.2f 3-%.2f \n", B[0], B[1], B[2], B[3]);
    
    
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

//printf("\n %d %d %d \n", start, mid, end);

}


int main (){


    scanf ("%d", &quanti);

    float *A = (float*)malloc(sizeof(float)*quanti+1);
    float *B = (float*)malloc(sizeof(float)*quanti+1);

    //A[quanti]= 0.00;


    for (click=0;click<quanti;click++){
        scanf("%f", &A[click]);
        
    }

    //for (click=0;click<quanti;click++){ printf("Array A %.2f \n", A[click]); printf("Array B %.2f \n", B[click]);}


    CopyArray(0, quanti, A, B);

   // printf ("%d", quanti);
    SplitTopDown(A, B, 0, quanti, 0);

    //for(click=0;click<quanti;click++){ printf("Array A %.2f \n", A[click]);   printf("Array B %.2f \n", B[click]); }

    for (click=0; click<quanti;click++){
        printf (" %.2f,", A[click]);
    }


    printf (" \n");

    for (click=quanti; click>0; click--){
        printf(" %.2f,", A[click-1]);
    }


   

    free(A);
    free(B);

    return 0;
}
