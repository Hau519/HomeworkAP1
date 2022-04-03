#include<stdio.h>   

int main(){
//Write a program in C to find the number occurring odd number of times in an array
int array[9]={8, 3, 8, 5, 4, 3, 4, 3, 5};
int count[9]={1, 1, 1, 1, 1, 1, 1, 1, 1};
for (int i=0; i<9; i++){
    for(int j=i+1; j<9; j++){
        if(array[i]==array[j]){
            count[i]++;
            count[j]++;
        }
    }
}

for (int i=0; i<9; i++){
    if (count[i]%2!=0)
        {printf("The element occur odd number of time is %d", array[i]);
        break;}
}

return 0;
}