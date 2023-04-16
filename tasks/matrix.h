//
// Created by lesny on 18.02.2023.
//

typedef struct Matrix {
    int **values; // элементы матрицы
    int nRows; // количество рядов
    int nCols; // количество столбцов
} Matrix;
typedef struct Position {
    int rowIndex; // номер строки
    int colIndex; // номер столбца
} Position;
