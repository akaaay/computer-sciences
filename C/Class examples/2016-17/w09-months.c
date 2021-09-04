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
#include <ctype.h>
#include <string.h>

#define MAX_SIZE 256

int main()
{
    char month_str[256];
    int month_int;

    printf("Enter month: ");
    scanf("%s", month_str);

    if(stricmp(month_str, "january") == 0) {
        month_int = 1;
    } else if(stricmp(month_str, "february") == 0) {
        month_int = 2;
    } else if(stricmp(month_str, "march") == 0) {
        month_int = 3;
    } else if(stricmp(month_str, "april") == 0) {
        month_int = 4;
    } else if(stricmp(month_str, "may") == 0) {
        month_int = 5;
    } else if(stricmp(month_str, "june") == 0) {
        month_int = 6;
    } else if(stricmp(month_str, "july") == 0) {
        month_int = 7;
    } else if(stricmp(month_str, "august") == 0) {
        month_int = 8;
    } else if(stricmp(month_str, "september") == 0) {
        month_int = 9;
    } else if(stricmp(month_str, "october") == 0) {
        month_int = 10;
    } else if(stricmp(month_str, "november") == 0) {
        month_int = 11;
    } else if(stricmp(month_str, "december") == 0) {
        month_int = 12;
    } else {
        printf("D'ho!?\n");
        month_int = -1;
    }

    printf("The month is: %d\n", month_int);
}
