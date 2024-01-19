#include <stdio.h>
#include <stdlib.h>

void find_move(int i, int j );
void make_matrix( int matrix[5][5]);

int main() {
    int matrix[5][5];
    
    make_matrix(matrix);
   
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if(matrix[i][j]==1){
               
             find_move(i+1,j+1);
            }
        }
            printf("\n");
    }

    return 0;
}
void make_matrix( int matrix[5][5]){     
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            // printf("Matrix[%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

}

void find_move(int i, int j ){
    i= abs(3-i);
    j= abs(3-j);
 
    printf("%d", i+j);
}