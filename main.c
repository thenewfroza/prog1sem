#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
struct student{
    char name[50];
    int course;
    char group[6];
    int age;
    int code_isu;

};
struct student st;
int main() {
   struct student st={"Serg",1,"M3115",22,264976};
   st.course++;
   st.name = "jenya";


    return 0;

}
 