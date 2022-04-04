#include<stdio.h>   

int main(){


int sum_col[3] = {0,0,0};
int sum_row[3]={0, 0,0};

int array[3][3];
for (int i=0; i<3; i++){
    for (int j=0; j<3; j++){
        printf("enter the value (%d,%d):", i, j);
        scanf("%d", &array[i][j]);
        sum_col[j]=sum_col[j]+array[i][j];
    }
    printf("\n");
}

for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        sum_row[j]=sum_row[j]+array[j][i];
    }
}

printf("The array and its sum of column and row is: \n");
printf("\t\tARRAY\t\tSUM\n");

for (int i=0; i<3; i++){
    for (int j=0; j<3; j++){
        printf("\t %d ", array[i][j]);
    }
    printf("    %d", sum_row[i]);
    printf("\n");
}
printf("sum");
for(int i=0; i<3; i++){
    printf("\t %d ", sum_col[i]);
}



return 0;
}