#include <stdio.h>

//sets the maximum number of vectors
#define MAX 50

int main ()
{
  int  v[MAX];

  //computing
  for (int i = 0; i < MAX; i++)
    v[i] = (i+5*i)%(i+1);

  //printing results
  for (int i = 0; i < MAX; i++)
    printf("%i, ", v[i]);
  
  return 0;
}
