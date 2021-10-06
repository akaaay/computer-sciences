/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Free for personal or classroom use.                  *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int t;

    printf("argc: %d\n", argc);
    for (t = 0; t < argc; t += 1)
    {
        printf("ARG %d: %s\n", t, argv[t]);
    }

    return EXIT_SUCCESS;
}
