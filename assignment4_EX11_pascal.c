#include<stdio.h>   

int main(){
int pascal[7][7];
for (int i=0; i<7; i++){
    for (int j=0; j<=i; j++){
        if(j==0 || i==j)
            pascal[i][j]=1;
        else {
        pascal[i][j]= pascal[i-1][j-1]+pascal[i-1][j];
        }
        printf("%d ", pascal[i][j]);
    }
    printf("\n");
}

return 0;
}