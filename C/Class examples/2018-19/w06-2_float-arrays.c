/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

#define SIZE 8

int main()
{
    double array[SIZE];

    printf("Max random number is %d\n", RAND_MAX);

    // seed rand with the num of secs since the epoch
    srand(time(NULL));
    for (int t = 0; t < SIZE; ++t)
    {
        array[t] = 1.0 * rand() / RAND_MAX;
    }

    // find max & min
    double max = array[0];
    double min = array[0];
    for (int t = 0; t < SIZE; ++t)
    {
        if (array[t] > max)
        {
            max = array[t];
        }
        if (array[t] < min)
        {
            min = array[t];
        }
    }
    printf("Array is [%g, %g]\n", min, max);

    return 0;
}
