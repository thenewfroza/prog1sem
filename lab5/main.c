#include <stdio.h>

int main() {

    int mass[7] = {23, 5678, 2, 564, 365, 77, 443};
    for (int i = 0; i < 7; i++) {
        printf(" %d", mass[i]);
    }
    printf("\n");

    int matrix[2][2]={{1,1},{1,4}};
    int matrix1[2][2]={{1,2},{4,1}};
    int matrix2[2][2]={{0,0},{0,0}};

    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++) {
            for (int inner=0;inner<2;inner++){
                matrix2[i][j] += matrix[i][inner] * matrix1[inner][j];
            }
            printf(" %d", matrix2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
