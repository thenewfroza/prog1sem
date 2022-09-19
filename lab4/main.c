#include <stdio.h>

int main() {
   int n;

    scanf("%d",&n);
    printf ("%d\n", (n>=12 && n <=56));


    int n1;
    scanf("%d",&n1);
    printf("%d",(n1>>12)%2);
    return (0);
}
