
#ifndef LAB7_LIB_FOR_LAB7_H
#define LAB7_LIB_FOR_LAB7_H

enum month {
    January,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

struct line{
    float x1;
    float y1;
    float x2;
    float y2;

};

union deviceADSL{
    unsigned char x;
    struct{
        unsigned short dsl:1;
        unsigned short ppp:1;
        unsigned short link:1;
    } adsl;
};

#endif //LAB7_LIB_FOR_LAB7_H
