#include<stdio.h>   

int main(){
// Create an m x n grid. The value at the (i, j) position is i + mj. Fill the grid with the appropriate value by traversing rows first, and cols second
int row, col;
printf("Please enter 2 integers for rowxcol grid: \n");
scanf("%d %d", &row, &col);
int array[row][col];
for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
        array[i][j]=i+row*j;
        printf("%d ", array[i][j]);
    }
    printf("\n");
}
// Fill the grid by traversing cols first, and rows second. The value at position (i,j) be k++, where k=0 prior to looping
int k=0;
for(int i=0; i<col; i++){
    for(int j=0; j<row; j++){
        array[j][i]=k++;
        printf("element at (%d, %d) is %d \n", j, i, array[j][i]);
    }
}

return 0;
}