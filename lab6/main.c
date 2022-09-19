#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<malloc.h>
int main() {
    float a[4];
    float *pa = a;
    for (int i = 0; i < 4; ++i)
        scanf("%f", pa + i);
    for (int i = 0; i < 4; ++i)
        printf("%f ", *(pa + i));

    float *arr;
   arr = (float*)malloc(4 * sizeof(float));
   pa = arr;
   for (int i = 0; i < 4; ++i)
       scanf("%f", pa + i);
   for (int i = 0; i < 4; ++i)
       printf("%f ", *(pa + i));
   free(arr);
   return 0;
}