#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define QUANTIDADE 200000

void bubble( int v[], int qtd )
{
  int i;
  int j;
  int aux;
  int k = qtd - 1 ;

  for(i = 0; i < qtd; i++)
  {
     for(j = 0; j < k; j++)
     {
        if(v[j] > v[j+1])
        {
            aux = v[j];
        v[j] = v[j+1];
        v[j+1]=aux;
        }
     }
     k--;
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

    printf("Executando BubbleSort...\n");
    bubble(vetor, QUANTIDADE);
    return 0;
}
