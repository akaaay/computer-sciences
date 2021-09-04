/********************************************************************-*-c-*-*\
*               *  Class examples for Computer Sciences 2014-15              *
*    #####      *  (!) Giovanni Squillero <giovanni.squillero@polito.it>     *
*   ######      *                                                            *
*   ###   \     *  Copying and distribution of this file, with or without    *
*    ##G  c\    *  modification, are permitted in any medium without royalty *
*    #     _\   *  provided this notice is preserved.                        *
*    |   _/     *  This file is offered as-is, without any warranty.         *
*    |  _/      *                                                            *
*               *  See: http://www.cad.polito.it/staff/squillero/dida/       *
\****************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define INCREMENT 0.0005
#define INITIAL_VEL_X   100
#define INITIAL_VEL_H   100
#define GRAVITY -9.8

int main()
{
    double bulletH, bulletX;
    double velH, velX;
    double accH, accX;
    double time;

    time = 0.0;
    bulletH = 0.0000001;
    bulletX = 0.0;
    velX = INITIAL_VEL_X;
    velH = INITIAL_VEL_H;
    accX = 0;

    while(bulletH > 0) {
        int t = 0;
        printf("%8g:", time);
        while(t < bulletH/10.0) {
            printf(" ");
            t = t +1;
        }
        printf("*\n");


        //printf("Bullet (%4g): %5g %5g (v: %5g %5g / a: %5g %5g)\n", time,
        //       bulletX, bulletH, velX, velH, accX, accH);


        accX = -velX/10000.0;
        accH = GRAVITY-velH/10000.0;
        velX += accX;   // ie. velX = velX + accX
        velH += accH;
        bulletX += velX;
        bulletH += velH;

        time += INCREMENT;
    }
    printf("Bullet (final): %5g %5g (v: %5g %5g / a: %5g %5g)\n",
           bulletX, bulletH, velX, velH, accX, accH);
    printf("Goodbye cruel world\n");

    return EXIT_SUCCESS;
}
