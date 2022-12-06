#include <stdio.h>
#include <limits.h>
#include <assert.h>
#include <string.h>
#include "misaligned.h"

int main() {

    //printColorMap
    printColorMap();

    //fillColorMapList
    //Checking the Total Pair Count
    assert(fillColorMapList() == 25);

    //Checking the Pairs Minor and Major Color.
    assert(strcmp(colorPairList[0].majorColor, "White") == 0);
    assert(strcmp(colorPairList[0].minorColor, "Blue") == 0);
    assert(strcmp(colorPairList[1].majorColor, "White") == 0);
    assert(strcmp(colorPairList[1].minorColor, "Orange") == 0);
    assert(strcmp(colorPairList[2].majorColor, "White") == 0);
    assert(strcmp(colorPairList[2].minorColor, "Green") == 0);
    assert(strcmp(colorPairList[3].majorColor, "White") == 0);
    assert(strcmp(colorPairList[3].minorColor, "Brown") == 0);
    assert(strcmp(colorPairList[4].majorColor, "White") == 0);
    assert(strcmp(colorPairList[4].minorColor, "Slate") == 0);
    assert(strcmp(colorPairList[5].majorColor, "Red") == 0);
    assert(strcmp(colorPairList[5].minorColor, "Blue") == 0);
    assert(strcmp(colorPairList[6].majorColor, "Red") == 0);
    assert(strcmp(colorPairList[6].minorColor, "Orange") == 0);
    assert(strcmp(colorPairList[7].majorColor, "Red") == 0);
    assert(strcmp(colorPairList[7].minorColor, "Green") == 0);
    assert(strcmp(colorPairList[8].majorColor, "Red") == 0);
    assert(strcmp(colorPairList[8].minorColor, "Brown") == 0);
    assert(strcmp(colorPairList[9].majorColor, "Red") == 0);
    assert(strcmp(colorPairList[9].minorColor, "Slate") == 0);
    assert(strcmp(colorPairList[10].majorColor, "Black") == 0);
    assert(strcmp(colorPairList[10].minorColor, "Blue") == 0);
    assert(strcmp(colorPairList[11].majorColor, "Black") == 0);
    assert(strcmp(colorPairList[11].minorColor, "Orange") == 0);
    assert(strcmp(colorPairList[12].majorColor, "Black") == 0);
    assert(strcmp(colorPairList[12].minorColor, "Green") == 0);
    assert(strcmp(colorPairList[13].majorColor, "Black") == 0);
    assert(strcmp(colorPairList[13].minorColor, "Brown") == 0);
    assert(strcmp(colorPairList[14].majorColor, "Black") == 0);
    assert(strcmp(colorPairList[14].minorColor, "Slate") == 0);
    assert(strcmp(colorPairList[15].majorColor, "Yellow") == 0);
    assert(strcmp(colorPairList[15].minorColor, "Blue") == 0);
    assert(strcmp(colorPairList[16].majorColor, "Yellow") == 0);
    assert(strcmp(colorPairList[16].minorColor, "Orange") == 0);
    assert(strcmp(colorPairList[17].majorColor, "Yellow") == 0);
    assert(strcmp(colorPairList[17].minorColor, "Green") == 0);
    assert(strcmp(colorPairList[18].majorColor, "Yellow") == 0);
    assert(strcmp(colorPairList[18].minorColor, "Brown") == 0);
    assert(strcmp(colorPairList[19].majorColor, "Yellow") == 0);
    assert(strcmp(colorPairList[19].minorColor, "Slate") == 0);
    assert(strcmp(colorPairList[20].majorColor, "Violet") == 0);
    assert(strcmp(colorPairList[20].minorColor, "Blue") == 0);
    assert(strcmp(colorPairList[21].majorColor, "Violet") == 0);
    assert(strcmp(colorPairList[21].minorColor, "Orange") == 0);
    assert(strcmp(colorPairList[22].majorColor, "Violet") == 0);
    assert(strcmp(colorPairList[22].minorColor, "Green") == 0);
    assert(strcmp(colorPairList[23].majorColor, "Violet") == 0);
    assert(strcmp(colorPairList[23].minorColor, "Brown") == 0);
    assert(strcmp(colorPairList[24].majorColor, "Violet") == 0);
    assert(strcmp(colorPairList[24].minorColor, "Slate") == 0);

    printf("All is well (maybe!)\n");
    return 0;
}