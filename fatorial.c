#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define QUANTIDADE 64000

int fatorial(int n)
{
  if(n == 0)
    return 1;
  else
    return n * fatorial(n-1);
}

int main()
{
    printf("Executando Fatorial...\n");
    printf("Fatorial: %d\n", fatorial(QUANTIDADE));
    return 0;
}
