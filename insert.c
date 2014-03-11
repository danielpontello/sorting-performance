#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define QUANTIDADE 200000

void insertionSort(int numeros[], int tam) {
   int i, j, eleito;
   for (i = 1; i < tam; i++){
      eleito = numeros[i];
      j = i - 1;
      while ((j>=0) && (eleito < numeros[j])) {
         numeros[j+1] = numeros[j];
         j--;
      }
      numeros[j+1] = eleito;
   }
}

int main()
{
    int vetor[QUANTIDADE];
    int i, alea, qtd=0;
    
    srand(time(NULL));
    
    for(i=0; i<QUANTIDADE; i++)
    {
        alea = rand()%1000000;
	// vetor[i] = alea;
    }    

    printf("Executando InsertSort...\n");
    insertionSort(vetor, QUANTIDADE);
    return 0;
}
