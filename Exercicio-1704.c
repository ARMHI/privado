#include <stdio.h>
#include <stdio.h>

int quant;
float *vetor, numeros[2];


int main (){
    vetor = &numeros[2];

    scanf ("%d", quant);

    vetor = (float*)malloc(sizeof(float)*5);
    vetor = realloc(vetor, quant*(sizeof(float)));

    
    
}
