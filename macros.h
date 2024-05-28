#ifndef MACROS_H
#define MACROS_H

// Пример макроса без аргументов
#define UNIQUE_MACRO "This is a unique macro for the group"

// Пример макроса с аргументами
#define SQUARE(x) ((x) * (x))

// Пример безопасного макроса с аргументами
#define SAFE_SQUARE(x) ({ \
    __typeof__(x) _x = (x); \
    _x * _x; \
})

#endif /* MACROS_H */
