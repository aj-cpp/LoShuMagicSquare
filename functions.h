#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define GRID_SIZE 3

bool isLoShuMagicSquare(const int[][GRID_SIZE]);
int sumOfEachRow(const int[][GRID_SIZE]);
int sumOfEachColumn(const int[][GRID_SIZE]);
int sumOfDiagonalTopLeftToRight(const int[][GRID_SIZE]);
int sumOfDiagonalTopRightToLeft(const int[][GRID_SIZE]);

#endif  // FUNCTIONS_H_
