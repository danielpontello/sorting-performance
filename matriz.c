#include <stdio.h>

#define QUANTIDADE 10000

  int m, n, p, q, c, d, k, sum = 0;
  int first[QUANTIDADE][QUANTIDADE], second[QUANTIDADE][QUANTIDADE], multiply[QUANTIDADE][QUANTIDADE];

void multiplys()
{

    for ( c = 0 ; c < QUANTIDADE ; c++ )
    {
      for ( d = 0 ; d < QUANTIDADE ; d++ )
      {
        for ( k = 0 ; k < QUANTIDADE ; k++ )
        {
          sum = sum + first[c][k]*second[k][d];
        }
 
        multiply[c][d] = sum;
        sum = 0;
      }
    }
}
int main()
{
  srand(time(NULL));
 
  for (  c = 0 ; c < QUANTIDADE ; c++ )
  {
    for ( d = 0 ; d < QUANTIDADE ; d++ )
    {
       first[c][d] = rand()%1000000;
    }
  }

	for (  c = 0 ; c < QUANTIDADE ; c++ )
    {
		for ( d = 0 ; d < QUANTIDADE ; d++ )
		{
		   second[c][d] = rand()%1000000;
 		}
	}

printf("Multiplicando Matrizes...\n");
  
 multiplys();
  return 0;
}
