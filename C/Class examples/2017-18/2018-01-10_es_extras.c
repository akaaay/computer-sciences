/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Free for personal or classroom use.                  *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

// Define STRUCT & declare VARIABLE
struct FOO
{
    int a, b, c;
} foo;

// Define UNNAMED STRUCT & declare VARIABLE
struct
{
    int x, y;
} bar;

// Define STRUCT and TYPEDEF a new type
typedef struct _POINT
{
    double x, y;
} POINT;

int main()
{
    POINT p1, p2;

    foo.a = 23;
    bar.x = 0;
    return 0;
}

void func(void)
{
    // interesting stuff
    struct
    {
        int zap, zop;
    } tmp;
    // use tmp
}
