/********************************************************************-*-c-*-*\
*               *  Code examples for Computer Sciences 2017-18               *
*    #####      *  (!) Giovanni Squillero <giovanni.squillero@polito.it>     *
*   ######      *                                                            *
*   ###   \     *  Copying and distribution of this file, with or without    *
*    ##G  c\    *  modification, are permitted in any medium without royalty *
*    #     _\   *  provided this notice is preserved.                        *
*    |   _/     *  This file is offered as-is, without any warranty.         *
*    |  _/      *                                                            *
*               *  See: http://staff.polito.it/giovanni.squillero/dida.php   *
\****************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define N_PRIMES 200

int main()
{
    printf("Finding the first %d primes!\n", N_PRIMES);

    int primes[N_PRIMES];
    int num_primes = 0;

    int num = 1;
    while(num_primes < N_PRIMES) {
        num = num + 1;
        int is_prime = 1;
        for(int t = 0; t < num_primes; t = t + 1) {
            if(num % primes[t] == 0) {
                is_prime = 0;
            }
        }
        if(is_prime == 1) {
            primes[num_primes] = num;
            num_primes = num_primes + 1;
        }
    }

    printf("Primes:");
    for(int t = 0; t < N_PRIMES; t = t + 1) {
        printf(" %d", primes[t]);
    }
    printf("\n");

    return 0;
}