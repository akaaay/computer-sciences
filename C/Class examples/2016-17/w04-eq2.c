/********************************************************************-*-c-*-*\
*               *  Code examples for Computer Sciences 2016-17               *
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
#include <math.h>

int main()
{
    printf("Eq solver (a x^2 + b x + c = 0)!\n");

    double a, b, c;

    printf("Enter a:");
    scanf("%lg", &a);       // %lg for double
    printf("Enter b:");
    scanf("%lg", &b);
    printf("Enter c:");
    scanf("%lg", &c);

    if(a == 0) {
        if(b == 0) {
            if(c == 0) {
                printf("Not determined...\n");
            } else {
                printf("Yeuch, impossible!\n");
            }
        } else {
            // double x = 1.0 * -c / b;
            // if a b & c were ints: double x = -(double)c / (double)b;
            double x = -c / b;
            printf("x = %lg\n", x);
        }
    } else {
        double delta = b * b - 4 * a * c;

        if(delta < 0) {
            printf("Yeuch, no solutions in R\n");
        } else {
            double x1 = (-b + sqrt(delta)) / (2 * a);
            double x2 = (-b - sqrt(delta)) / (2 * a);

            printf("x1 = %g\n", x1);
            printf("x2 = %g\n", x2);
        }
    }

    return 0;
}
