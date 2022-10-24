// CS2600 - Andrew Jujun
#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main()
{
  // Outline:
  // Function that checks if it's a Lo Shu Magic Array
  // -> Checks each rows, columns, diagonals if == 15
  // if yes, then it's the magic array.

  const int not_magic_square[3][3] = { {1, 2, 3},
                                       {4, 5, 6},
                                       {7, 8, 9} };

  const int magic_square[3][3] = { {4, 9, 2},
                                   {3, 5, 7},
                                   {8, 1, 6} };

  printf("Is magic_square magic square? %s\n", 
                            isLoShuMagicSquare(magic_square) ? "Yes" : "No" );

  printf("Is not_magic_square magic square? %s\n", 
                        isLoShuMagicSquare(not_magic_square) ? "Yes" : "No" );

  return EXIT_SUCCESS;
}