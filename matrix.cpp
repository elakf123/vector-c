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

#include <stdio.h>
#include "libs\data_structures\vector\vector.h"


int main() {
    vector v = createVector(5); // создаем вектор размером 5 элементов
    printf("%zu ", v.capacity);

    reserve(&v, 8); // изменяем вместимость на 8 элементов
    printf("%zu\n", v.capacity);


    return 0;
}
