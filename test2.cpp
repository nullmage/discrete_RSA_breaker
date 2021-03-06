#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int fact(int n){
  /*
     Function: fact (n)
     Returns: n!
  */

  int i;
  int p = 1;

  for (i=1; i <= n ; ++i){
    p = p * i;
  }
  return p;

}

int main(int argc, char * argv[]){
  int n;

  if (argc <= 1){
    /* Check if user has a command line argument */
    printf ("Usage: %s <number>", argv[0]);
    return 2;
  }

  n = atoi(argv[1]); /* Extract the command line argument */

  assert( n >= 0);

  /* Print the factorial */
  printf ("%d ! = %d \n", n, fact(n));

  return 1;
}
