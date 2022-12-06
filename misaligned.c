#include <stdio.h>
#include <string.h>
#include "misaligned.h"

ColorPair colorPairList[MAX_COLOR_PAIR_COUNT];

void printColorMap() {
    int size, i;
    size = fillColorMapList();

    for (i = 0; i < size; i++) {
        printf("%d | %s | %s\n", i, colorPairList[i].majorColor, colorPairList[i].minorColor);
    }
}

int fillColorMapList() {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int i = 0, j = 0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            strcpy(colorPairList[(i*5)+j].majorColor, majorColor[i]);
            strcpy(colorPairList[(i*5)+j].minorColor, minorColor[j]);
        }
    }
    return i * j;
}