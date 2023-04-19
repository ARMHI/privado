#include <stdio.h>
#include <stdio.h>

int quant, clock, EndArray, StartArray;
float *vetor, numeros[2], *vetorB, arrayB[2], temp;

void CopyArray (numeros[], arrayB[], clock, quant){

   for (clock=0;clock<quant;clock++){
      arrayB[clock] == numeros[clock];

   }

}

void SplitTopDown(A[], StartArray, EndArray, B[]){

int MidArray;


    if (EndArray-StartArray<=1){
        return;
    }

    MidArray = (StartArray+EndArray)/2;

    SplitTopDown(A[], StartArray, MidArray, B[]);
    SplitTopDown(A[], MidArray, EndArray, B[]);


    MergeTopDown(A[], StartArray, MidArray, EndArray, B[]);

}

void MergeTopDown(){}

int main (){
    vetor = &numeros[2];
    vetorB = &arrayB[2];

    scanf ("%d", quant);

    vetor = (float*)malloc(sizeof(float)*quant);
    vetorB = (float*)malloc(sizeof(float)*quant);

CopyArray(numeros[], arrayB[], 0, quant);

SplitTopDown(numeros[], 0, quant, arrayB[]);
    
    
}
