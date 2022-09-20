#include <stdio.h>
#include <string.h>


int main() {
    char s1[]="12345";
    char s2[]="67890";
    char s3[]="12345";

    printf("%s\n",  strcat(s1,s2));


    printf("%d\n", strcmp(s2,s3) ); // возвращает -1 и 1 хотя должен 0 1 в чем прикол?


    printf("%s\n", strcpy(s1,s2));


    printf("%d\n", strlen(s1));


    char *string1 = "1234567890";
    char *string2 = "757DC8";
    int length;
    length = strcspn(string1, string2);
    printf("Character where strings intersect is at position %d\n", length);
    return 0;
}
