#include<stdio.h>   

int main(){
//1. pattern 1
printf("Pattern 1: \n");
int array1[5][5];
for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
        array1[i][j]=j+1;
        printf("%d", array1[i][j]);
    }
    printf("\n");
}
//2. Pattern 2
printf("Pattern 2: \n");
int array2[5][5];
for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
        array2[i][j]=j+i+1;
        printf("%d", array2[i][j]);
    }
    printf("\n");
}
//3. Pattern 3:
printf("Pattern 3: \n");
char array3[5][5];
for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
        if(i>j)
        array3[i][j]='.';
        else 
        array3[i][j]='0';
        printf("%c", array3[i][j]);
    }
    printf("\n");
}
//4. Pattern 4
printf("Pattern 4: \n");
int array4[5][5];
for(int i=0; i<5; i++){
    for(int j=0; j<=i; j++){
        array4[i][j]=i+1;
        printf("%d", array4[i][j]);
    }
    printf("\n");
}
//5. Pattern 5
printf("Pattern 5: \n");
int array5[5][5];
for(int i=0; i<5; i++){
    for(int j=0; j<=i; j++){
        array5[i][j]=j+1;
        printf("%d", array5[i][j]);
    }
    printf("\n");
}
//6. Pattern 6
printf("Pattern 6: \n");
int array6[5][5];
for(int i=0; i<5; i++){
    for(int j=0; j<=i; j++){
        array6[i][j]=5-j;
        printf("%d", array6[i][j]);
    }
    printf("\n");
}
//7. Pattern 7
printf("Pattern 7: \n");
int array7[5][5];
for(int i=0; i<5; i++){
    for(int j=0; j<=i; j++){
        array7[i][j]=i+1-j;
        printf("%d", array7[i][j]);
    }
    printf("\n");
} 
//8. Pattern 8
printf("Pattern 8: \n");
int num=1;
int array8[5][5];
for(int i=0; i<5; i++){
    for(int j=0; j<=i; j++){
        array8[i][j]=num;
        num++;
        printf("%d", array8[i][j]);
        printf(" ");
    }
    printf("\n");
} 

//9 Pattern 9
printf("Pattern 9: \n");
char array9[5][5];
for(int i=0; i<5; i++){
    for(int j=0; j<5-i; j++){
        array9[i][j]=' ';
        printf("%c", array9[i][j]);
    }
    for(int z=0; z<=i; z++){
        array9[i][4-z]='X';
        printf("%c", array9[i][4-z]);
    }
    printf("\n");
} 
return 0;
}