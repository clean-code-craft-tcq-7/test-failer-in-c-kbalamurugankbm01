#ifndef MISALIGNED_H
#define MISALIGNED_H

#define MAX_COLOR_PAIR_COUNT 25
#define MAX_COLOR_NAME_LEN 10

typedef struct {
    char majorColor[MAX_COLOR_NAME_LEN];
    char minorColor[MAX_COLOR_NAME_LEN];
}ColorPair;

extern void printColorMap();
int fillColorMapList();

extern ColorPair colorPairList[MAX_COLOR_PAIR_COUNT];
extern const char* majorColor[];
extern const char* minorColor[];

#endif /*MISALIGNED_H*/