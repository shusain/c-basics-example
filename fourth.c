#include <stdio.h>
#include <stdlib.h>

int main() {
  // making "a" a new variable
  int *someVar = malloc(sizeof(int) * 4);

  // populating some part of the allocated memory
  someVar[0] = 1;
  someVar[1] = 2;

  printf("Values: %d %d\n", someVar[0], someVar[1]);
  printf("Pointer arithmetic: %d %d\n", *(someVar), *(someVar+1));
  printf("Addresses: %p %p\n", someVar, (someVar+1));

  //Show what is in the memory we allocated but didn't set
  
  printf("Values out of range: %d %d\n", *(someVar+2), *(someVar+3));

  free(someVar);
}