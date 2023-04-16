//
// Created by lesny on 19.02.2023.
//
#include "matrix.h"

typedef struct matrix {
    int **values; // элементы матрицы
    int nRows; // количество рядов
    int nCols; // количество столбцов
} matrix;
typedef struct position {
    int rowIndex; // номер строки
    int colIndex; // номер столбца
} position;
