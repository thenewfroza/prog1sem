#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "lib_for_lab7.h"
int main() {
    enum month a;
    a=July;
    printf("%d \n", a);


    struct line l;
    float sum;
    scanf("%f", &l.x1);
    scanf("%f", &l.y1);
    scanf("%f", &l.x2);
    scanf("%f", &l.y2);
    sum = (l.x2-l.x1)*(l.x2-l.x1)+(l.y2-l.y1)*(l.y2-l.y1);
    printf("%f", sqrt(sum));


    union deviceADSL num;
    scanf("%x", &num.x);
    printf("dsl: %s\n",(num.adsl.dsl)?"on":"off");
    printf("ppp: %s\n",(num.adsl.ppp)?"on":"off");
    printf("link: %s\n",(num.adsl.link)?"on":"off");
    return 0;
}
