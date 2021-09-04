/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define PROBLEM_SIZE 3

int main()
{
    /**
    int sum = 0;
    for(int t = 0; t < PROBLEM_SIZE; t = t + 1) {
        int num;
        do {
            printf("Enter number >0: ");
            scanf("%d", &num);
        } while(num < 0);
        sum = sum + num;
    }
    printf("The average is: %g\n", sum/PROBLEM_SIZE);
    **/

    int sum = 0;
    int t = 0;
    while (t < PROBLEM_SIZE)
    {
        int num;
        printf("Enter positive number: ");
        scanf("%d", &num);
        if (num >= 0)
        {
            sum = sum + num;
            t = t + 1;
        }
    }
    double avg = sum;
    avg = avg / PROBLEM_SIZE;
    printf("The average is: %g\n", avg);

    return 0;
}