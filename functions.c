#include "functions.h"

int sumOfEachRow(const int array[][GRID_SIZE])
{
    int total;

    for(int row = 0; row < GRID_SIZE; row++)
    {
        total = 0;
        for(int column = 0; column < GRID_SIZE; column++)
            total += array[row][column];
    }

    return total;
}

int sumOfEachColumn(const int array[][GRID_SIZE])
{
    int total;

    for(int columns = 0; columns < GRID_SIZE; columns++)
    {
        total = 0;
        for (int row = 0; row < GRID_SIZE; row++)
            total += array[row][columns];
    }

    return total;
}

int sumOfDiagonalTopLeftToRight(const int array[][GRID_SIZE])
{
    int total = 0;
    
    for(int i = 0; i < GRID_SIZE; i++)
        total += array[i][i];

    return total;
}

int sumOfDiagonalTopRightToLeft(const int array[][GRID_SIZE])
{
    int total = 0;
    int column = (GRID_SIZE - 1);

    for (int row = 0; row < GRID_SIZE; row++)
    {
        total += array[row][column];
        column--;
    }
    return total;
}

bool isLoShuMagicSquare(const int array[][GRID_SIZE])
{
    if(
        sumOfEachRow(array)                 == 15 &&
        sumOfEachColumn(array)              == 15 &&
        sumOfDiagonalTopLeftToRight(array)  == 15 &&
        sumOfDiagonalTopRightToLeft(array)  == 15
       )
        return true;
        
    return false;
}