#include<stdio.h>   

int main(){

//  Write a program in C to find the smallest missing element from a sorted array

int no_of_elements;
int min;
int temp;

printf("Enter number of elements in the array please!\n");
scanf("%d", &no_of_elements);
int array[no_of_elements];
for(int i=0; i<no_of_elements; i++){
    printf("Enter value %d of the array please!\n", i);
    scanf("%d", &array[i]);
}

for(int i=0; i<no_of_elements; i++){
    if (array[i+1]!=array[i]+1){
        printf("The smallest missing value is %d", array[i]+1);
        break;
    }
}

return 0;
}
