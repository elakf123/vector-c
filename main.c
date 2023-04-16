#include <stdio.h>
#include "libs\data_structures\vector\vector.h"


int main() {
    vector v = createVector(5); // создаем вектор размером 5 элементов
    deleteVector(&v);

    return 0;
}
