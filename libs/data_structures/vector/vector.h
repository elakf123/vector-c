#include <stdio.h>

#ifndef UNTITLED6_VECTOR_H
#define UNTITLED6_VECTOR_H

#endif //UNTITLED6_VECTOR_H

typedef struct vector {
    int *data; // указатель на элементы вектора
    size_t size; // размер вектора
    size_t capacity; // вместимость вектора
} vector;

vector createVector(size_t n);

void reserve(vector *v, size_t newCapacity);

void clear(vector *v);

void shrinkToFit(vector *v);

void deleteVector(vector *v);