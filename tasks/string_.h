#ifndef STRING_H
#define STRING_H

#include <stddef.h>

size_t strlen_(char *begin);

char *find(char *begin, char *end, int ch);

char *findNonSpace(char *begin);

char *findSpace(char *begin);

char *findNonSpaceReverse(char *rbegin, const char *rend);

char* findSpaceReverse(char *rbegin, const char *rend);

int strcmp_(const char *lhs, const char *rhs);

void *memset_(void *ptr, int value, size_t num);


#endif /* STRING_H */