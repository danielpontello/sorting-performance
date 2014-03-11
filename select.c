#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define QUANTIDADE 200000

void selection_sort(int num[], int tam) 
{ 
  int i, j, min, swap;
  for (i = 0; i < (tam-1); i++) 
   {
    min = i;
    for (j = (i+1); j < tam; j++) {
      if(num[j] < num[min]) {
        min = j;
      }
    }
    if (i != min) {
      swap = num[i];
      num[i] = num[min];
      num[min] = swap;
    }
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

    printf("Executando SelectionSort...\n");
    selection_sort(vetor, QUANTIDADE);
    return 0;
}
