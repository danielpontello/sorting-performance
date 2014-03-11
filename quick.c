#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define QUANTIDADE 200000

void q_sort(int numbers[], int left, int right)
{
  int pivot, l_hold, r_hold;
 
  l_hold = left;
  r_hold = right;
  pivot = numbers[left];
  while (left < right)
  {
    while ((numbers[right] >= pivot) && (left < right))
      right--;
    if (left != right)
    {
      numbers[left] = numbers[right];
      left++;
    }
    while ((numbers[left] <= pivot) && (left < right))
      left++;
    if (left != right)
    {
      numbers[right] = numbers[left];
      right--;
    }
  }
  numbers[left] = pivot;
  pivot = left;
  left = l_hold;
  right = r_hold;
  if (left < pivot)
    q_sort(numbers, left, pivot-1);
  if (right > pivot)
    q_sort(numbers, pivot+1, right);
}

void quickSort(int numbers[], int array_size)
{
  q_sort(numbers, 0, array_size - 1);
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

    printf("Executando QuickSort...\n");
    quickSort(vetor, QUANTIDADE);
    return 0;
}
