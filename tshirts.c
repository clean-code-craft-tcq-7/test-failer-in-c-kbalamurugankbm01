#include "tshirts.h"
/* Assumptions:
The size of 1 to 38 falls under S
The size of 39 to 42 falls under M
The size above 42 falls under L
*/

char size(int cms) {
    char sizeName = '\0';
    if(cms > 0 && cms <= 38) {
        sizeName = 'S';
    } else if(cms > 38 && cms <= 42) {
        sizeName = 'M';
    } else if(cms > 42) {
        sizeName = 'L';
    }
    return sizeName;
}
